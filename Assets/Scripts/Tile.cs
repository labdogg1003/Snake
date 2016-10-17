using UnityEngine;
using System.Collections;

//
//
//

[RequireComponent (typeof (Rigidbody))]
public class Tile : MonoBehaviour 
{
	public float dropTimer = 2.0f;
    float dropMultiplier = 1f;
    float dropMultOffset = .1f;
    float baseWaitTime;
    float baseReturnTime;
    float pelletOffset = 1.2f;
    public float returnTime;
    public float waitTime;
    public Vector3 startingPosition;
    public Vector3 pelletLocation;
	Rigidbody rigidBody;

	// Use this for initialization
	void Awake () 
	{
        baseWaitTime = Random.Range(3f, 10f);
        baseReturnTime = Random.Range(1f, 3f);
        waitTime = baseWaitTime;
        returnTime = baseReturnTime;
		rigidBody = this.GetComponent<Rigidbody>();
        startingPosition = this.transform.position;
        pelletLocation = startingPosition + new Vector3(0,pelletOffset,0);
	}
	
	// Update is called once per frame
	void Update () 
	{
		
	}

	IEnumerator DropTile()
	{
        yield return new WaitForSeconds (1f);
		rigidBody.isKinematic = false;

        yield return new WaitForSeconds (waitTime);
        StartCoroutine(FadeOut(startingPosition, returnTime));

	}

	void OnTriggerEnter(Collider other)
	{
        if (other.gameObject.CompareTag ("snake") || other.gameObject.CompareTag ("body")) 
		{
			StopCoroutine ("DropTile");
		}
	}

	void OnTriggerExit(Collider other)
	{
        if (other.gameObject.CompareTag ("snake") || other.gameObject.CompareTag ("body")) 
		{
			StartCoroutine ("DropTile");
		}
	}

    private IEnumerator FadeOut(Vector3 position, float time)
    {
        rigidBody.isKinematic = true;
        float elapsedTime = 0;
        Vector3 startingPos = transform.position;
        while (elapsedTime < time)
        {
            transform.position = Vector3.Lerp(startingPos, position, (elapsedTime / time));
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        this.transform.position = startingPosition;
    }

    void increaseDropMultiplier()
    {
        dropMultiplier += dropMultOffset;
    }

    public void increaseTimers()
    {
        increaseDropMultiplier();
       
        waitTime = baseWaitTime * dropMultiplier;
        returnTime = baseReturnTime * dropMultiplier;
    }

}
