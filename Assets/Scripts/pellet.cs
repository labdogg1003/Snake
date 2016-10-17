using UnityEngine;
using System.Collections;

public class pellet : MonoBehaviour {

    public Animator animator;

	// Use this for initialization
	void Start () 
    {
	}
	
	// Update is called once per frame
	void Update () 
    {
	}

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag ("snake")) 
        {  
            gameManager.Instance.SetTileSpeed();
            gameManager.Instance.respawnPellet(this.gameObject);
        }
    }


}
