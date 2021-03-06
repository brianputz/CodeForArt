#include "testApp.h"


/*
 IN THIS APP:
 1. Moving an element from one spot to another
 2. Moving an element smoothly
 3. Using ofPoint to represent positions
 
 
 ASSIGNMENT
 1. Use matrix transformations to move the ball.
 2. Change the ball to something
 */

//--------------------------------------------------------------
void testApp::setup(){

	ofSetFrameRate(200);
	ofBackground(255, 255, 255);
	ofEnableSmoothing();
	
	radius = 20;
	pos_x = 30;
	pos_y = ofGetHeight()/2.0;

	click_x = pos_x;
	click_y = pos_y;
}

//--------------------------------------------------------------
void testApp::update(){

	if(click_x > pos_x) 
	{
		pos_x++;
	}
	
	if(click_y > pos_y)
	{
		pos_y++;
	}
	
	if(click_x < pos_x)
	{
		pos_x--;
	}
	
	if(click_y < pos_y) 
	{
		pos_y--;
	}
}

//--------------------------------------------------------------
void testApp::draw(){

	ofFill();
	ofSetColor(0, 0, 0);
	ofCircle(pos_x, pos_y, radius);
	
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
	click_x = x;
	click_y = y;
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

