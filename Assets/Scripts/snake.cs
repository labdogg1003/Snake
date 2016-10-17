using UnityEngine;
using System.Collections;
using System.Collections.Generic;

enum Direction {up,down,left,right};
enum CachedInput {left,right,up,down,none};

public class snake : MonoBehaviour 
{
	public List<GameObject> bodyParts;
	Vector3 orientation;

	//To control the speed of the snake
	public float snakeSpeed = .1f;

	int frame = 0;
	int triggerCount = 0;
    float tailStartingScale = .75f;
    Direction direction;
	Direction lastInput;
    CachedInput cachedInput;
    Vector3 lastKnownPosition;
    public int maxLength = 6;
    public GameObject snakeBody;
  
    bool died = false;
	public CameraFollow follow;

	float fingerStartTime  = 0.0f;
	Vector2 fingerStartPos = Vector2.zero;

	bool isSwipe = false;
	float minSwipeDist  = 20.0f;
	float maxSwipeTime = 0.5f;



    void Awake() 
    {
    }

	void Start()
	{
        this.GetComponent<BoxCollider>().enabled = true;
        lastKnownPosition = this.transform.position;
        cachedInput = CachedInput.none;
		direction = Direction.up;
        orientation = Vector3.right;
        scaleBodyParts();
	}


	// Update is called once per frame
	void Update()
	{
        orientation = Vector3.right * snakeSpeed;

        cacheInput();

        if (triggerCount <= 0 || died == true)
        {
            StartCoroutine("die");
        }
        else if (gameManager.Instance.paused == true)
        {
            //Stop game play
        }
		else 
		{
			move ();
            StartCoroutine(Follow(lastKnownPosition));
		}
	}

	IEnumerator Follow(Vector3 lastKnownPosition)
	{
        
		Vector3 lastPosition = lastKnownPosition;
		foreach (GameObject g in bodyParts) 
		{
            Vector3 temp = g.GetComponent<Body>().lastKnownPosition;
            g.transform.position = Vector3.MoveTowards(g.transform.position, lastPosition, snakeSpeed);
            lastPosition = temp;
		}
        yield return null;
	}

	void OnTriggerEnter () 
	{
		triggerCount++;
	}

	void OnTriggerExit () 
	{
		triggerCount--;
	}

	void move()
	{
		frame += 1;
		
        // Move in a new Direction?
        if (checkForMove())
        {
            switch (direction)
            {
                case Direction.up:
                    if (cachedInput == CachedInput.right)
                    {
                        transform.Rotate(0, 90, 0, Space.World);
                        direction = Direction.right;
                    }
                    else if (cachedInput == CachedInput.left)
                    {
                        transform.Rotate(0, 270, 0, Space.World);
                        direction = Direction.left;
                    }
                    break;
                case Direction.down:
                    if (cachedInput == CachedInput.right)
                    {
                        transform.Rotate(0, 270, 0, Space.World);
                        direction = Direction.right;
                    }
                    else if (cachedInput == CachedInput.left)
                    {
                        transform.Rotate(0, 90, 0, Space.World);
                        direction = Direction.left;
                    }
                    break;
                case Direction.left:
                    if (cachedInput == CachedInput.up)
                    {
                        transform.Rotate(0, 90, 0, Space.World);
                        direction = Direction.up;
                    }
                    else if (cachedInput == CachedInput.down)
                    {
                        transform.Rotate(0, 270, 0, Space.World);
                        direction = Direction.down;
                    }
                    break;
                case Direction.right:
                    if (cachedInput == CachedInput.up)
                    {
                        transform.Rotate(0, 270, 0, Space.World);
                        direction = Direction.up;
                    }
                    else if (cachedInput == CachedInput.down)
                    {
                        transform.Rotate(0, 90, 0, Space.World);
                        direction = Direction.down;
                    }
                    break;
            }
        }
		transform.Translate(orientation);
	}

    private bool checkForMove()
    {
        bool canChangeDirection = false;

        if(checkWholeNumber(this.transform.position.x))
        {
            if (checkWholeNumber(this.transform.position.z))
            {
                canChangeDirection = true;
                lastKnownPosition = this.transform.position;
            }
        }
        return canChangeDirection;
    }


	IEnumerator die()
	{
		lockCamera();
        gameManager.Instance.died = true;

		yield return new WaitForSeconds(.5f);

		this.gameObject.GetComponent <BoxCollider> ().enabled = false;

		if (this.gameObject.GetComponent <Rigidbody> () == null) 
		{
			this.gameObject.AddComponent<Rigidbody> ();
		}

		this.gameObject.GetComponent <Rigidbody>().useGravity = true;
	}

	void lockCamera()
	{
		//turn off camera follow so we don't drop after the snake dies
		follow.enabled = false;
	}




    /*** Helper Functions ***/
    private bool checkWholeNumber(float myFloat)
    {
        return IsApproximately(myFloat, Mathf.RoundToInt(myFloat));
    }

    private void cacheInput()
    {
		if (Input.touchCount > 0)
		{
			foreach (Touch touch in Input.touches)
			{
				switch (touch.phase)
				{
				case TouchPhase.Began :
					/* this is a new touch */
					isSwipe = true;
					fingerStartTime = Time.time;
					fingerStartPos = touch.position;
					break;

				case TouchPhase.Canceled :
					/* The touch is being canceled */
					isSwipe = false;
					break;

				case TouchPhase.Ended :

					float gestureTime = Time.time - fingerStartTime;
					float gestureDist = (touch.position - fingerStartPos).magnitude;

					if (isSwipe && gestureTime < maxSwipeTime && gestureDist > minSwipeDist)
					{
						Vector2 direction = touch.position - fingerStartPos;
						Vector2 swipeType = Vector2.zero;

						if (Mathf.Abs(direction.x) > Mathf.Abs(direction.y))
						{
							// the swipe is horizontal:
							swipeType = Vector2.right * Mathf.Sign(direction.x);
						}
						else
						{
							// the swipe is vertical:
							swipeType = Vector2.up * Mathf.Sign(direction.y);
						}

						if(swipeType.x != 0.0f)
						{
							if(swipeType.x > 0.0f)
							{
								//MOVE RIGHT
								cachedInput = CachedInput.right;
							}
							else
							{
								// MOVE LEFT
								cachedInput = CachedInput.left;

							}
						}

						if(swipeType.y != 0.0f )
						{
							if(swipeType.y > 0.0f)
							{
								// MOVE UP
								cachedInput = CachedInput.up;
							
							}
							else
							{
								// MOVE DOWN
								cachedInput = CachedInput.down;
							
							}
						}

					}

					break;
				}
			}
		}
			
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            cachedInput = CachedInput.up;
        }
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            cachedInput = CachedInput.down;
		}

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            cachedInput = CachedInput.left;
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            cachedInput = CachedInput.right;
        }
    }

	//lets you skip the tolerance to use a default value
    bool IsApproximately(float a, float b) 
    {
        return IsApproximately(a, b, 0.02f);
    }

    bool IsApproximately(float a, float b, float tolerance)
    {
        return Mathf.Abs(a - b) < tolerance;
    }
   
    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("pellet"))
        {
            gameManager.Instance.increaseScore();

            if (canAddBodyPart())
            {
                GameObject body = (GameObject)Instantiate(snakeBody, bodyParts[bodyParts.Count - 1].transform.position, Quaternion.identity);
                bodyParts.Add(body);
                scaleBodyParts();
            }
        }
        if (other.gameObject.CompareTag("body"))
        {
            died = true;
            StartCoroutine("die");
        }
    }

    bool canAddBodyPart()
    {
        if (bodyParts.Count <= maxLength)
            return true;
        else
            return false;
    }

    void scaleBodyParts()
    {
        int iter = 0;
        float scale;

        for (int i = bodyParts.Count - 1; i >= 0; i--)
        {    
            scale = .3f + (Mathf.Log10(iter+2)/2);
            iter++;
            bodyParts[i].transform.localScale = new Vector3(scale,scale,scale);
        }
    }
}
