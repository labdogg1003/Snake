using UnityEngine;
using System.Collections;
using UnityEngine.Advertisements;

public class SimpleAds : MonoBehaviour 
{
	#if !UNITY_ADS // If the Ads service is not enabled...
	public string gameId; // Set this value from the inspector.
	public bool enableTestMode = true;
	#endif

	void Start () 
	{
		Advertisement.Initialize(gameId, enableTestMode);

		StartCoroutine (ShowAdWhenReady());
	}

	IEnumerator ShowAdWhenReady()
	{
		while (!Advertisement.IsReady())
			yield return null;

		Advertisement.Show ();
	}
}

