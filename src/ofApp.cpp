#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(-1);
    ofSetVerticalSync(false);
    player.load("rain.mov");
    player.setLoopState(OF_LOOP_NORMAL);
    player.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofColor::white);
    player.draw((ofGetWidth() / 2) - (w / 2), (ofGetHeight() / 2) - (h / 2), w, h);
    ofSetColor(ofColor::black);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), 30);
    ofSetColor(ofColor::green);
    ofDrawBitmapString(ofToString(ofGetWidth()) + " x " + ofToString(ofGetHeight()), 10, 20);
    ofDrawBitmapString(ofToString((int)ofGetFrameRate()), ofGetWidth() - 40, 20);
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
