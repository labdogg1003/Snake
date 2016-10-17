using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityStandardAssets.ImageEffects;

public class UIManager : MonoBehaviour 
{
    public enum UIState {main,inGame, endGame};
    public GameObject mainMenu;
    public GameObject inGame;
    public GameObject endScreen;
    public UIState gameState;
    public GameObject mainCamera;

	public Text lblBest;
    public Text lblScore;
    public Text lblScoreEndGame;
	public int highScore;

    public Button btnPause;
    public Sprite play;
	public Sprite pause;

    // Static singleton property
    public static UIManager Instance { get; private set; }

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
    }

	// Use this for initialization
	void Start () 
    {
        gameState = UIState.inGame;
		highScore = PlayerPrefs.GetInt ("highscore");
	}
	
	// Update is called once per frame
	void Update () 
    {
        switch (gameState)
        {
            case UIState.main:
                mainMenu.gameObject.SetActive(true);
                inGame.gameObject.SetActive(false);
                endScreen.gameObject.SetActive(false);
                gameManager.Instance.paused = true;

                break;
            case UIState.inGame:
                mainMenu.gameObject.SetActive(false);
                inGame.gameObject.SetActive(true);
                endScreen.gameObject.SetActive(false);
                break;
            case UIState.endGame:
                mainMenu.gameObject.SetActive(false);
                inGame.gameObject.SetActive(false);
                endScreen.gameObject.SetActive(true);

                lblScoreEndGame.text = gameManager.Instance.score.ToString();

				if(PlayerPrefs.GetInt ("highscore") != null)
				{
					lblBest.text = PlayerPrefs.GetInt ("highscore").ToString();
				}
                break;
        }
	}

    public void restartGame()
    {
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        setState();
    }

    public void quitGame()
    {
        SceneManager.LoadScene("Title");
    }
        
    public void btnPauseGame()
    {
        bool paused = gameManager.Instance.pauseGame();

        if (paused)
        {
			btnPause.GetComponent<Image>().sprite = play;
        }
        else
        {
            btnPause.GetComponent<Image>().sprite = pause;
        }
    }

    public void setState()
    {
        this.gameState = UIState.inGame;
    }
}
