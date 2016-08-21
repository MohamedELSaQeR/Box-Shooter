using UnityEngine;
using System.Collections;

public class BasicControler : MonoBehaviour {

	
	// Update is called once per frame
	void Update () {
		Debug.Log ("Horizontal Input = "+Input.GetAxis("Horizontal"));
	}
}
