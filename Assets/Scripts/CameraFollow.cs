using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour 
{
    public GameObject target;

	// Use this for initialization
	void Start () 
    {
	
	}
	
	// Update is called once per frame
	void Update () 
    {
        this.transform.position = Vector3.Lerp(this.transform.position, target.transform.position, .1f);
	}
}
