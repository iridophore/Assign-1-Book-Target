using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class vb_action : MonoBehaviour, IVirtualButtonEventHandler
{

    public GameObject vbBtnObj;
    public GameObject RvwTextCanvas;

    public VirtualButtonBehaviour[] Behaviors;


    // Start is called before the first frame update
    void Start()
    {
        vbBtnObj = GameObject.Find("Review_VButton");
        //vbBtnObj.GetComponent<VirtualButtonBehaviour>().RegisterEventHandler(this);

        Behaviors = GetComponentsInChildren<VirtualButtonBehaviour>();
        for (int i = 0; i < Behaviors.Length; i++)
            Behaviors[i].RegisterEventHandler(this);

    }

    public void OnButtonPressed(VirtualButtonBehaviour vb)
    {
        // Show display of review text
        Debug.Log("Button Activated");
        RvwTextCanvas.SetActive(true);
    }

    public void OnButtonReleased(VirtualButtonBehaviour vb)
    {
        // Remove display of review text
        Debug.Log("Button Deactivated");
        RvwTextCanvas.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
