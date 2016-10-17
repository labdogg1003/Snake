using UnityEngine;
using System.Collections;
using UnityEngine.Advertisements;

public class AdManager : MonoBehaviour 
{
	[SerializeField] string gameID = "";
	[SerializeField] bool enableTestMode = true;
	Coroutine AdRoutine;

	// Static singleton property
	public static AdManager Instance { get; private set; }

	void Awake()
	{
		if(Instance == null)
		{
			Instance = this;
		}
		else
		{
			Destroy(this);
		}

		Advertisement.Initialize(gameID, enableTestMode);

		//Run setup for tracking ads
		AdSetup();
	}

	public void showAd()
	{
		#if UNITY_EDITOR
			StartCoroutine(waitForAd());
		#endif

		if(Advertisement.IsReady())
		{
			Debug.Log("Showing Ad");
			Advertisement.Show();
		}
	}

	//Pause game time while ad is playing
	IEnumerator waitForAd()
	{
		float currentTimeScale = Time.timeScale;
		Time.timeScale = 0;
		yield return null;

		while(Advertisement.isShowing)
		{
			yield return null;
		}

		Time.timeScale = currentTimeScale;
	}

	//This sets up the ad counter if this is the first time playing
	public void AdSetup()
	{
		if(!PlayerPrefs.HasKey("NextAd"))
		{
			int AdCountdown = Random.Range(4,8);
			PlayerPrefs.SetInt("NextAd", AdCountdown);
		}
		else
		{
			//Woohoo! were already setup
		}
	}


	public void ResetAdCounter()
	{
		int AdCountdown = Random.Range(4,8);
		PlayerPrefs.SetInt("NextAd", AdCountdown);
	}

	//This will get called after each time the player dies.
	public IEnumerator DecrementAdCounter()
	{
		//Get the counter for when we should show the next ad
		int adCounter = PlayerPrefs.GetInt("NextAd");
		Debug.Log("Next ad in : " + adCounter);

		//If we are at zero then show our next ad and reset our countdown otherwise decrement our counter
		if(adCounter <= 0)
		{
			showAd();
			ResetAdCounter();
		}
		else
		{
			adCounter --;
			PlayerPrefs.SetInt("NextAd", adCounter);
		}

		yield return null;

	}

	//This is used to make sure the decrement coroutine
	public void AdHelper()
	{
		if (AdRoutine == null)
		{
			AdRoutine = StartCoroutine(DecrementAdCounter());
		}
		else
		{
			StopCoroutine (AdRoutine);
		}
	}
}
