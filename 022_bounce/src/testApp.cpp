#include "testApp.h"

/**************
 *	In this application
 *	1. Introduce "vectors" in the mathematical sense
 */

//--------------------------------------------------------------
void testApp::setup(){

	ofSetFrameRate(24);
	ofBackground(255, 255, 255);
	ofEnableSmoothing();
	
	radius = 20;
	pos.x = ofGetWidth()/2.0;
	pos.y = 20;
	
	vel.x = ofRandom(-26, 26);
	vel.y = ofRandom(-26, 26);

}

//--------------------------------------------------------------
void testApp::update(){
	vel += acceleration;
	pos += vel;
	
	
	// Bounce
	if(pos.y >= ofGetHeight()-radius || pos.y <= radius) {
		vel.y *= -1.0;
		pos += vel;
	}
	
	if(pos.x >= ofGetWidth()-radius || pos.x <= radius) {
		vel.x *= -1.0;
		pos += vel;
	}
	

	 // gravity
	if(pos.y >= ofGetHeight()-radius) {
		pos.y = ofGetHeight()-radius;
		acceleration.y = 0;
		vel.y = 0;
	}

}

//--------------------------------------------------------------
void testApp::draw(){

	ofFill();
	ofSetColor(0, 0, 0);
	ofCircle(pos.x, pos.y, radius);
	
	
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

