#include "ofApp.h"

ofVec2f circlePosition;
ofVec2f circleVelocity;
int radius;
float friction;

//--------------------------------------------------------------
void ofApp::setup(){
    circlePosition.set(ofGetWidth()/2, ofGetHeight()/2);
    radius = 50;

}

//--------------------------------------------------------------
void ofApp::update(){

    
  

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofColor colorOne(0,200,200);
    ofColor colorTwo(250,250,250);

    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);

    
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    ofSetCircleResolution(100);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 't'){
         ofDrawEllipse(10,10,50,30);
    } else if (key == 's'){
 ofDrawTriangle(50,10,10,40,90,40);
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    ofSetColor(0,0,0);
    ofFill();
    ofDrawRectangle(10,10,100,100);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
