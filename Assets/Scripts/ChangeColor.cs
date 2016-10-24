using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class ChangeColor : MonoBehaviour 
{
    public GameObject Head;
    public GameObject[] bodyParts;
    public Color color;

	// Use this for initialization
	void Start () 
    {
	
	}
	
	// Update is called once per frame
	void Update () 
    {
        Head.gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", color);
        foreach (GameObject g in bodyParts)
        {
            g.gameObject.GetComponent<MeshRenderer>().sharedMaterial.SetColor("_Color", color);
        }
	}
}
