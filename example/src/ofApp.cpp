#include "ofApp.h"

#define SOL_LUAJIT 1
#include <sol/sol.hpp>

// NOTE: static is just for convenience. you can place this in ofApp.h as member variable.
static sol::state lua;

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogToConsole();
    
    lua.open_libraries(sol::lib::base);

    lua.set_function("drawBitmapString", [](const std::string& text, int x, int y) {
        ofDrawBitmapString(text, x, y);
    });
    lua.set_function("drawRectangle", [](int x, int y, int w, int h) {
        ofDrawRectangle(x, y, w, h);
    });
    
//    lua.script("print(_VERSION)");
    lua.script_file(ofToDataPath("lua_version.lua"));

    int x = 0;
    lua.set_function("beep", [&x]{ ++x; });
    lua.script("beep()");
    assert(x == 1);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    lua.script("drawBitmapString('hello world', 20, 20)");
    lua.script("drawRectangle(20, 50, 100, 100)");
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
