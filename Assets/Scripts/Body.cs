using UnityEngine;
using System.Collections;

public class Body : MonoBehaviour
{
    public Vector3 lastKnownPosition;

	// Use this for initialization
	void Start () 
    {
       lastKnownPosition = this.transform.position;
	}
	
	// Update is called once per frame
	void Update () 
    {
        if(checkWholeNumber(this.transform.position.x))
        {
            if (checkWholeNumber(this.transform.position.z))
            {
                lastKnownPosition = this.transform.position;
            }
        }
	}

    private bool checkWholeNumber(float myFloat)
    {
        return IsApproximately(myFloat, Mathf.RoundToInt(myFloat));
    }

    bool IsApproximately(float a, float b) 
    //lets you skip the tolerance to use a default value
    {
        return IsApproximately(a, b, 0.05f);
    }

    bool IsApproximately(float a, float b, float tolerance)
    {
        return Mathf.Abs(a - b) < tolerance;
    }

    void StoreHighscore(int newHighscore)
    {
        int oldHighscore = PlayerPrefs.GetInt("highscore", 0);    
        if(newHighscore > oldHighscore)
            PlayerPrefs.SetInt("highscore", newHighscore);
    }
}
