using UnityEngine;
using System.Collections;

public class BasicTragetMover : MonoBehaviour {

	public float spinSpeed = 180.0f;
	public float motionMagnitude = 0.1f;
	public bool doSpain = true;
	public bool doMoation = false;
	
	// Update is called once per frame
	void Update () {

		if (doSpain) {
			// Rotate around yield axsis
			gameObject.transform.Rotate (Vector3.up * spinSpeed * Time.deltaTime);
		}

		if (doMoation) {

			// move object
			gameObject.transform.Translate (Vector3.up * Mathf.Cos (Time.timeSinceLevelLoad) * motionMagnitude);
		}
	}
}
