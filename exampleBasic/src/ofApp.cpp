#include "ofApp.h"

#define SOL_LUAJIT 1
#include <sol/sol.hpp>

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogToConsole();
    
    lua = ofx_sol2lua.getLuaState();
    
//    lua.script("print(_VERSION)");
    lua->script_file(ofToDataPath("lua_version.lua"));
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    lua->script("ofDrawBitmapString('hello world', 20, 20, 0)");
    lua->script("ofDrawRectangle(20, 50, 100, 100)");
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
