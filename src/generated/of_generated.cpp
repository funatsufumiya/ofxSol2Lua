
// WARNING: This file is auto-generated!

#include "ofxSol2Lua.h"
#include "ofMain.h"

#include "sol/sol.hpp"

// WORKAROUND: to support deprecated functions in lua
#ifndef _MSC_VER
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif // #ifndef _MSC_VER

void ofxSol2Lua::setOFGeneratedBindings(const std::shared_ptr<sol::state>& lua){

    // ofMath.h, LINE 33
    // ofMath.h, LINE 50
    lua->set_function("ofRandom", sol::overload(
        [](float max){ return ofRandom(max); },
        [](float val0, float val1){ return ofRandom(val0, val1); }
    ));
    // ofMath.h, LINE 57
    lua->set_function("ofRandomf", [](){ return ofRandomf(); });
    // ofMath.h, LINE 64
    lua->set_function("ofRandomuf", [](){ return ofRandomuf(); });
    // ofMath.h, LINE 74
    lua->set_function("ofRandomWidth", [](){ return ofRandomWidth(); });
    // ofMath.h, LINE 83
    lua->set_function("ofRandomHeight", [](){ return ofRandomHeight(); });
    // ofMath.h, LINE 91
    lua->set_function("ofSetRandomSeed", [](unsigned long new_seed){  ofSetRandomSeed(new_seed); });
    // ofMath.h, LINE 97
    // ofMath.h, LINE 106
    lua->set_function("ofSeedRandom", sol::overload(
        [](){  ofSeedRandom(); },
        [](int val){  ofSeedRandom(val); }
    ));
    // ofMath.h, LINE 124
    lua->set_function("ofNormalize", [](float value, float min, float max){ return ofNormalize(value, min, max); });
    // ofMath.h, LINE 157
    lua->set_function("ofMap", [](float value, float inputMin, float inputMax, float outputMin, float outputMax, bool clamp){ return ofMap(value, inputMin, inputMax, outputMin, outputMax, clamp); });
    // ofMath.h, LINE 178
    lua->set_function("ofClamp", [](float value, float min, float max){ return ofClamp(value, min, max); });
    // ofMath.h, LINE 185
    lua->set_function("ofInRange", [](float t, float min, float max){ return ofInRange(t, min, max); });
    // ofMath.h, LINE 209
    lua->set_function("ofLerp", [](float start, float stop, float amt){ return ofLerp(start, stop, amt); });
    // ofMath.h, LINE 226
    // ofMath.h, LINE 239
    lua->set_function("ofDist", sol::overload(
        [](float x1, float y1, float x2, float y2){ return ofDist(x1, y1, x2, y2); },
        [](float x1, float y1, float z1, float x2, float y2, float z2){ return ofDist(x1, y1, z1, x2, y2, z2); }
    ));
    // ofMath.h, LINE 252
    // ofMath.h, LINE 267
    lua->set_function("ofDistSquared", sol::overload(
        [](float x1, float y1, float x2, float y2){ return ofDistSquared(x1, y1, x2, y2); },
        [](float x1, float y1, float z1, float x2, float y2, float z2){ return ofDistSquared(x1, y1, z1, x2, y2, z2); }
    ));
    // ofMath.h, LINE 284
    lua->set_function("ofRadToDeg", [](float radians){ return ofRadToDeg(radians); });
    // ofMath.h, LINE 295
    lua->set_function("ofDegToRad", [](float degrees){ return ofDegToRad(degrees); });
    // ofMath.h, LINE 307
    lua->set_function("ofLerpDegrees", [](float currentAngle, float targetAngle, float pct){ return ofLerpDegrees(currentAngle, targetAngle, pct); });
    // ofMath.h, LINE 319
    lua->set_function("ofLerpRadians", [](float currentAngle, float targetAngle, float pct){ return ofLerpRadians(currentAngle, targetAngle, pct); });
    // ofMath.h, LINE 334
    lua->set_function("ofAngleDifferenceDegrees", [](float currentAngle, float targetAngle){ return ofAngleDifferenceDegrees(currentAngle, targetAngle); });
    // ofMath.h, LINE 349
    lua->set_function("ofAngleDifferenceRadians", [](float currentAngle, float targetAngle){ return ofAngleDifferenceRadians(currentAngle, targetAngle); });
    // ofMath.h, LINE 372
    lua->set_function("ofWrap", [](float value, float from, float to){ return ofWrap(value, from, to); });
    // ofMath.h, LINE 375
    lua->set_function("ofWrapRadians", [](float angle, float from, float to){ return ofWrapRadians(angle, from, to); });
    // ofMath.h, LINE 378
    lua->set_function("ofWrapDegrees", [](float angle, float from, float to){ return ofWrapDegrees(angle, from, to); });
    // ofMath.h, LINE 387
    // ofMath.h, LINE 390
    // ofMath.h, LINE 393
    // ofMath.h, LINE 396
    // ofMath.h, LINE 399
    // ofMath.h, LINE 402
    // ofMath.h, LINE 405
    lua->set_function("ofNoise", sol::overload(
        [](float x){ return ofNoise(x); },
        [](float x, float y){ return ofNoise(x, y); },
        [](const glm::vec2 & p){ return ofNoise(p); },
        [](float x, float y, float z){ return ofNoise(x, y, z); },
        [](const glm::vec3 & p){ return ofNoise(p); },
        [](float x, float y, float z, float w){ return ofNoise(x, y, z, w); },
        [](const glm::vec4 & p){ return ofNoise(p); }
    ));
    // ofMath.h, LINE 408
    // ofMath.h, LINE 411
    // ofMath.h, LINE 414
    // ofMath.h, LINE 417
    // ofMath.h, LINE 420
    // ofMath.h, LINE 423
    // ofMath.h, LINE 426
    lua->set_function("ofSignedNoise", sol::overload(
        [](float x){ return ofSignedNoise(x); },
        [](float x, float y){ return ofSignedNoise(x, y); },
        [](const glm::vec2 & p){ return ofSignedNoise(p); },
        [](float x, float y, float z){ return ofSignedNoise(x, y, z); },
        [](const glm::vec3 & p){ return ofSignedNoise(p); },
        [](float x, float y, float z, float w){ return ofSignedNoise(x, y, z, w); },
        [](const glm::vec4 & p){ return ofSignedNoise(p); }
    ));
    // ofMath.h, LINE 566
    lua->set_function("ofNextPow2", [](int a){ return ofNextPow2(a); });
    // ofMath.h, LINE 570
    lua->set_function("ofSign", [](float n){ return ofSign(n); });
    // ofLog.h, LINE 178
    // ofLog.h, LINE 211
    lua->set_function("ofSetLogLevel", sol::overload(
        [](ofLogLevel level){  ofSetLogLevel(level); },
        [](std::string module, ofLogLevel level){  ofSetLogLevel(module, level); }
    ));
    // ofLog.h, LINE 215
    // ofLog.h, LINE 220
    lua->set_function("ofGetLogLevel", sol::overload(
        [](){ return ofGetLogLevel(); },
        [](std::string module){ return ofGetLogLevel(module); }
    ));
    // ofLog.h, LINE 226
    lua->set_function("ofGetLogLevelName", [](ofLogLevel level, bool pad){ return ofGetLogLevelName(level, pad); });
    // ofLog.h, LINE 245
    lua->set_function("ofLogToConsole", [](){  ofLogToConsole(); });
    // ofLog.h, LINE 252
    lua->set_function("ofLogToDebugView", [](){  ofLogToDebugView(); });
    // ofLog.h, LINE 262
    lua->set_function("ofSetLoggerChannel", [](std::shared_ptr<ofBaseLoggerChannel> loggerChannel){  ofSetLoggerChannel(loggerChannel); });
    // ofLog.h, LINE 265
    lua->set_function("ofGetLoggerChannel", [](){ return ofGetLoggerChannel(); });
    // ofGraphics.h, LINE 39
    // ofGraphics.h, LINE 55
    // ofGraphics.h, LINE 56
    // ofGraphics.h, LINE 57
    // ofGraphics.h, LINE 58
    lua->set_function("ofSetColor", sol::overload(
        [](int r, int g, int b){  ofSetColor(r, g, b); },
        [](int r, int g, int b, int a){  ofSetColor(r, g, b, a); },
        [](const ofColor & color){  ofSetColor(color); },
        [](const ofColor & color, int _a){  ofSetColor(color, _a); },
        [](int gray){  ofSetColor(gray); },
        // NOTE: additional overloads provided by user,
        [](float r, float g, float b){  ofSetColor(r, g, b); }
    ));
    // ofGraphics.h, LINE 70
    lua->set_function("ofSetHexColor", [](int hexColor){  ofSetHexColor(hexColor); });
    // ofGraphics.h, LINE 80
    lua->set_function("ofNoFill", [](){  ofNoFill(); });
    // ofGraphics.h, LINE 90
    lua->set_function("ofFill", [](){  ofFill(); });
    // ofGraphics.h, LINE 91
    lua->set_function("ofGetFill", [](){ return ofGetFill(); });
    // ofGraphics.h, LINE 98
    lua->set_function("ofGetBackgroundColor", [](){ return ofGetBackgroundColor(); });
    // ofGraphics.h, LINE 99
    lua->set_function("ofGetBackground", [](){ return ofGetBackground(); });
    // ofGraphics.h, LINE 115
    // ofGraphics.h, LINE 116
    // ofGraphics.h, LINE 117
    lua->set_function("ofBackground", sol::overload(
        [](int r, int g, int b, int a){  ofBackground(r, g, b, a); },
        [](int brightness, int alpha){  ofBackground(brightness, alpha); },
        [](const ofColor & c){  ofBackground(c); }
    ));
    // ofGraphics.h, LINE 125
    lua->set_function("ofBackgroundHex", [](int hexColor, int alpha){  ofBackgroundHex(hexColor, alpha); });
    // ofGraphics.h, LINE 177
    lua->set_function("ofBackgroundGradient", [](const ofColor & start, const ofColor & end, ofGradientMode mode){  ofBackgroundGradient(start, end, mode); });
    // ofGraphics.h, LINE 190
    // ofGraphics.h, LINE 191
    // ofGraphics.h, LINE 192
    lua->set_function("ofSetBackgroundColor", sol::overload(
        [](int r, int g, int b, int a){  ofSetBackgroundColor(r, g, b, a); },
        [](int brightness, int alpha){  ofSetBackgroundColor(brightness, alpha); },
        [](const ofColor & c){  ofSetBackgroundColor(c); }
    ));
    // ofGraphics.h, LINE 200
    lua->set_function("ofSetBackgroundColorHex", [](int hexColor, int alpha){  ofSetBackgroundColorHex(hexColor, alpha); });
    // ofGraphics.h, LINE 217
    lua->set_function("ofSetBackgroundAuto", [](bool bManual){  ofSetBackgroundAuto(bManual); });
    // ofGraphics.h, LINE 218
    lua->set_function("ofGetBackgroundAuto", [](){ return ofGetBackgroundAuto(); });
    // ofGraphics.h, LINE 254
    // ofGraphics.h, LINE 265
    // ofGraphics.h, LINE 278
    lua->set_function("ofClear", sol::overload(
        [](float r, float g, float b, float a){  ofClear(r, g, b, a); },
        [](float brightness, float a){  ofClear(brightness, a); },
        [](const ofColor & c){  ofClear(c); },
        // NOTE: additional overloads provided by user,
        [](float r, float g, float b){  ofClear(r, g, b); }
    ));
    // ofGraphics.h, LINE 279
    lua->set_function("ofClearAlpha", [](){  ofClearAlpha(); });
    // ofGraphics.h, LINE 282
    lua->set_function("ofbClearBg", [](){ return ofbClearBg(); });
    // ofGraphics.h, LINE 294
    // ofGraphics.h, LINE 295
    // ofGraphics.h, LINE 296
    // ofGraphics.h, LINE 297
    lua->set_function("ofDrawTriangle", sol::overload(
        [](float x1, float y1, float x2, float y2, float x3, float y3){  ofDrawTriangle(x1, y1, x2, y2, x3, y3); },
        [](float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofDrawTriangle(x1, y1, z1, x2, y2, z2, x3, y3, z3); },
        [](const glm::vec3 & p1, const glm::vec3 & p2, const glm::vec3 & p3){  ofDrawTriangle(p1, p2, p3); },
        [](const glm::vec2 & p1, const glm::vec2 & p2, const glm::vec2 & p3){  ofDrawTriangle(p1, p2, p3); }
    ));
    // ofGraphics.h, LINE 310
    // ofGraphics.h, LINE 311
    // ofGraphics.h, LINE 312
    // ofGraphics.h, LINE 313
    lua->set_function("ofDrawCircle", sol::overload(
        [](float x, float y, float radius){  ofDrawCircle(x, y, radius); },
        [](float x, float y, float z, float radius){  ofDrawCircle(x, y, z, radius); },
        [](const glm::vec3 & p, float radius){  ofDrawCircle(p, radius); },
        [](const glm::vec2 & p, float radius){  ofDrawCircle(p, radius); }
    ));
    // ofGraphics.h, LINE 321
    // ofGraphics.h, LINE 322
    // ofGraphics.h, LINE 323
    // ofGraphics.h, LINE 324
    lua->set_function("ofDrawEllipse", sol::overload(
        [](float x, float y, float width, float height){  ofDrawEllipse(x, y, width, height); },
        [](float x, float y, float z, float width, float height){  ofDrawEllipse(x, y, z, width, height); },
        [](const glm::vec3 & p, float width, float height){  ofDrawEllipse(p, width, height); },
        [](const glm::vec2 & p, float width, float height){  ofDrawEllipse(p, width, height); }
    ));
    // ofGraphics.h, LINE 332
    // ofGraphics.h, LINE 333
    // ofGraphics.h, LINE 334
    // ofGraphics.h, LINE 335
    lua->set_function("ofDrawLine", sol::overload(
        [](float x1, float y1, float x2, float y2){  ofDrawLine(x1, y1, x2, y2); },
        [](float x1, float y1, float z1, float x2, float y2, float z2){  ofDrawLine(x1, y1, z1, x2, y2, z2); },
        [](const glm::vec3 & p1, const glm::vec3 & p2){  ofDrawLine(p1, p2); },
        [](const glm::vec2 & p1, const glm::vec2 & p2){  ofDrawLine(p1, p2); }
    ));
    // ofGraphics.h, LINE 343
    // ofGraphics.h, LINE 358
    // ofGraphics.h, LINE 371
    // ofGraphics.h, LINE 372
    // ofGraphics.h, LINE 381
    lua->set_function("ofDrawRectangle", sol::overload(
        [](float x1, float y1, float w, float h){  ofDrawRectangle(x1, y1, w, h); },
        [](const ofRectangle & r){  ofDrawRectangle(r); },
        [](const glm::vec3 & p, float w, float h){  ofDrawRectangle(p, w, h); },
        [](const glm::vec2 & p, float w, float h){  ofDrawRectangle(p, w, h); },
        [](float x, float y, float z, float w, float h){  ofDrawRectangle(x, y, z, w, h); }
    ));
    // ofGraphics.h, LINE 397
    // ofGraphics.h, LINE 409
    // ofGraphics.h, LINE 410
    // ofGraphics.h, LINE 421
    // ofGraphics.h, LINE 432
    // ofGraphics.h, LINE 443
    // ofGraphics.h, LINE 447
    // ofGraphics.h, LINE 467
    // ofGraphics.h, LINE 480
    lua->set_function("ofDrawRectRounded", sol::overload(
        [](const ofRectangle & b, float r){  ofDrawRectRounded(b, r); },
        [](const glm::vec3 & p, float w, float h, float r){  ofDrawRectRounded(p, w, h, r); },
        [](const glm::vec2 & p, float w, float h, float r){  ofDrawRectRounded(p, w, h, r); },
        [](float x, float y, float w, float h, float r){  ofDrawRectRounded(x, y, w, h, r); },
        [](float x, float y, float z, float w, float h, float r){  ofDrawRectRounded(x, y, z, w, h, r); },
        [](const glm::vec3 & p, float w, float h, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofDrawRectRounded(p, w, h, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); },
        [](const glm::vec2 & p, float w, float h, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofDrawRectRounded(p, w, h, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); },
        [](const ofRectangle & b, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofDrawRectRounded(b, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); },
        [](float x, float y, float z, float w, float h, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofDrawRectRounded(x, y, z, w, h, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); }
    ));
    // ofGraphics.h, LINE 487
    // ofGraphics.h, LINE 491
    lua->set_function("ofDrawCurve", sol::overload(
        [](float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3){  ofDrawCurve(x0, y0, x1, y1, x2, y2, x3, y3); },
        [](float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofDrawCurve(x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
    ));
    // ofGraphics.h, LINE 492
    // ofGraphics.h, LINE 493
    lua->set_function("ofDrawBezier", sol::overload(
        [](float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3){  ofDrawBezier(x0, y0, x1, y1, x2, y2, x3, y3); },
        [](float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofDrawBezier(x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
    ));
    // ofGraphics.h, LINE 495
    // ofGraphics.h, LINE 496
    // ofGraphics.h, LINE 497
    lua->set_function("ofTriangle", sol::overload(
        [](float x1, float y1, float x2, float y2, float x3, float y3){  ofTriangle(x1, y1, x2, y2, x3, y3); },
        [](float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofTriangle(x1, y1, z1, x2, y2, z2, x3, y3, z3); },
        [](const glm::vec3 & p1, const glm::vec3 & p2, const glm::vec3 & p3){  ofTriangle(p1, p2, p3); }
    ));
    // ofGraphics.h, LINE 499
    // ofGraphics.h, LINE 500
    // ofGraphics.h, LINE 501
    lua->set_function("ofCircle", sol::overload(
        [](float x, float y, float radius){  ofCircle(x, y, radius); },
        [](float x, float y, float z, float radius){  ofCircle(x, y, z, radius); },
        [](const glm::vec3 & p, float radius){  ofCircle(p, radius); }
    ));
    // ofGraphics.h, LINE 503
    // ofGraphics.h, LINE 504
    // ofGraphics.h, LINE 505
    lua->set_function("ofEllipse", sol::overload(
        [](float x, float y, float width, float height){  ofEllipse(x, y, width, height); },
        [](float x, float y, float z, float width, float height){  ofEllipse(x, y, z, width, height); },
        [](const glm::vec3 & p, float width, float height){  ofEllipse(p, width, height); }
    ));
    // ofGraphics.h, LINE 507
    // ofGraphics.h, LINE 508
    // ofGraphics.h, LINE 509
    lua->set_function("ofLine", sol::overload(
        [](float x1, float y1, float x2, float y2){  ofLine(x1, y1, x2, y2); },
        [](float x1, float y1, float z1, float x2, float y2, float z2){  ofLine(x1, y1, z1, x2, y2, z2); },
        [](const glm::vec3 & p1, const glm::vec3 & p2){  ofLine(p1, p2); }
    ));
    // ofGraphics.h, LINE 511
    // ofGraphics.h, LINE 512
    // ofGraphics.h, LINE 513
    // ofGraphics.h, LINE 514
    lua->set_function("ofRect", sol::overload(
        [](float x1, float y1, float w, float h){  ofRect(x1, y1, w, h); },
        [](const ofRectangle & r){  ofRect(r); },
        [](const glm::vec3 & p, float w, float h){  ofRect(p, w, h); },
        [](float x, float y, float z, float w, float h){  ofRect(x, y, z, w, h); }
    ));
    // ofGraphics.h, LINE 516
    // ofGraphics.h, LINE 517
    // ofGraphics.h, LINE 518
    // ofGraphics.h, LINE 519
    // ofGraphics.h, LINE 522
    // ofGraphics.h, LINE 527
    // ofGraphics.h, LINE 532
    lua->set_function("ofRectRounded", sol::overload(
        [](const ofRectangle & b, float r){  ofRectRounded(b, r); },
        [](const glm::vec3 & p, float w, float h, float r){  ofRectRounded(p, w, h, r); },
        [](float x, float y, float w, float h, float r){  ofRectRounded(x, y, w, h, r); },
        [](float x, float y, float z, float w, float h, float r){  ofRectRounded(x, y, z, w, h, r); },
        [](const glm::vec3 & p, float w, float h, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofRectRounded(p, w, h, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); },
        [](const ofRectangle & b, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofRectRounded(b, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); },
        [](float x, float y, float z, float w, float h, float topLeftRadius, float topRightRadius, float bottomRightRadius, float bottomLeftRadius){  ofRectRounded(x, y, z, w, h, topLeftRadius, topRightRadius, bottomRightRadius, bottomLeftRadius); }
    ));
    // ofGraphics.h, LINE 537
    // ofGraphics.h, LINE 538
    lua->set_function("ofCurve", sol::overload(
        [](float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3){  ofCurve(x0, y0, x1, y1, x2, y2, x3, y3); },
        [](float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofCurve(x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
    ));
    // ofGraphics.h, LINE 539
    // ofGraphics.h, LINE 540
    lua->set_function("ofBezier", sol::overload(
        [](float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3){  ofBezier(x0, y0, x1, y1, x2, y2, x3, y3); },
        [](float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofBezier(x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
    ));
    // ofGraphics.h, LINE 563
    lua->set_function("ofBeginShape", [](){  ofBeginShape(); });
    // ofGraphics.h, LINE 567
    // ofGraphics.h, LINE 568
    // ofGraphics.h, LINE 569
    // ofGraphics.h, LINE 570
    lua->set_function("ofVertex", sol::overload(
        [](float x, float y){  ofVertex(x, y); },
        [](float x, float y, float z){  ofVertex(x, y, z); },
        [](const glm::vec3 & p){  ofVertex(p); },
        [](const glm::vec2 & p){  ofVertex(p); }
    ));
    // ofGraphics.h, LINE 582
    // ofGraphics.h, LINE 583
    // ofGraphics.h, LINE 584
    // ofGraphics.h, LINE 585
    lua->set_function("ofCurveVertex", sol::overload(
        [](float x, float y){  ofCurveVertex(x, y); },
        [](float x, float y, float z){  ofCurveVertex(x, y, z); },
        [](const glm::vec3 & p){  ofCurveVertex(p); },
        [](const glm::vec2 & p){  ofCurveVertex(p); }
    ));
    // ofGraphics.h, LINE 596
    // ofGraphics.h, LINE 597
    // ofGraphics.h, LINE 598
    // ofGraphics.h, LINE 599
    lua->set_function("ofBezierVertex", sol::overload(
        [](float x1, float y1, float x2, float y2, float x3, float y3){  ofBezierVertex(x1, y1, x2, y2, x3, y3); },
        [](const glm::vec3 & p1, const glm::vec3 & p2, const glm::vec3 & p3){  ofBezierVertex(p1, p2, p3); },
        [](const glm::vec2 & p1, const glm::vec2 & p2, const glm::vec2 & p3){  ofBezierVertex(p1, p2, p3); },
        [](float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){  ofBezierVertex(x1, y1, z1, x2, y2, z2, x3, y3, z3); }
    ));
    // ofGraphics.h, LINE 614
    lua->set_function("ofEndShape", [](bool bClose){  ofEndShape(bClose); });
    // ofGraphics.h, LINE 622
    lua->set_function("ofNextContour", [](bool bClose){  ofNextContour(bClose); });
    // ofGraphics.h, LINE 647
    lua->set_function("ofSetDrawBitmapMode", [](ofDrawBitmapMode mode){  ofSetDrawBitmapMode(mode); });
    // ofGraphics.h, LINE 687
    // ofGraphics.h, LINE 689
    // ofGraphics.h, LINE 691
    lua->set_function("ofDrawBitmapString", sol::overload(
        [](const std::string & textString, const glm::vec3 & p){  ofDrawBitmapString(textString, p); },
        [](const std::string & textString, const glm::vec2 & p){  ofDrawBitmapString(textString, p); },
        [](const std::string & textString, float x, float y, float z){  ofDrawBitmapString(textString, x, y, z); }
    ));
    // ofGraphics.h, LINE 692
    // ofGraphics.h, LINE 693
    // ofGraphics.h, LINE 694
    lua->set_function("ofDrawBitmapStringHighlight", sol::overload(
        [](std::string text, const glm::vec3 & position, const ofColor & background, const ofColor & foreground){  ofDrawBitmapStringHighlight(text, position, background, foreground); },
        [](std::string text, const glm::vec2 & position, const ofColor & background, const ofColor & foreground){  ofDrawBitmapStringHighlight(text, position, background, foreground); },
        [](std::string text, int x, int y, const ofColor & background, const ofColor & foreground){  ofDrawBitmapStringHighlight(text, x, y, background, foreground); }
    ));
    // ofGraphics.h, LINE 702
    lua->set_function("ofSetupGraphicDefaults", [](){  ofSetupGraphicDefaults(); });
    // ofGraphics.h, LINE 704
    lua->set_function("ofSetupScreen", [](){  ofSetupScreen(); });
    // ofGraphics.h, LINE 722
    lua->set_function("ofGetRectMode", [](){ return ofGetRectMode(); });
    // ofGraphics.h, LINE 737
    lua->set_function("ofSetCircleResolution", [](int res){  ofSetCircleResolution(res); });
    // ofGraphics.h, LINE 738
    lua->set_function("ofSetCurveResolution", [](int res){  ofSetCurveResolution(res); });
    // ofGraphics.h, LINE 750
    lua->set_function("ofSetLineWidth", [](float lineWidth){  ofSetLineWidth(lineWidth); });
    // ofGraphics.h, LINE 754
    lua->set_function("ofSetDepthTest", [](bool depthTest){  ofSetDepthTest(depthTest); });
    // ofGraphics.h, LINE 761
    lua->set_function("ofEnableDepthTest", [](){  ofEnableDepthTest(); });
    // ofGraphics.h, LINE 793
    lua->set_function("ofDisableDepthTest", [](){  ofDisableDepthTest(); });
    // ofGraphics.h, LINE 805
    lua->set_function("ofEnableBlendMode", [](ofBlendMode blendMode){  ofEnableBlendMode(blendMode); });
    // ofGraphics.h, LINE 808
    lua->set_function("ofDisableBlendMode", [](){  ofDisableBlendMode(); });
    // ofGraphics.h, LINE 815
    lua->set_function("ofEnablePointSprites", [](){  ofEnablePointSprites(); });
    // ofGraphics.h, LINE 818
    lua->set_function("ofDisablePointSprites", [](){  ofDisablePointSprites(); });
    // ofGraphics.h, LINE 833
    lua->set_function("ofEnableAlphaBlending", [](){  ofEnableAlphaBlending(); });
    // ofGraphics.h, LINE 847
    lua->set_function("ofDisableAlphaBlending", [](){  ofDisableAlphaBlending(); });
    // ofGraphics.h, LINE 849
    lua->set_function("ofEnableSmoothing", [](){  ofEnableSmoothing(); });
    // ofGraphics.h, LINE 854
    lua->set_function("ofDisableSmoothing", [](){  ofDisableSmoothing(); });
    // ofGraphics.h, LINE 857
    lua->set_function("ofEnableAntiAliasing", [](){  ofEnableAntiAliasing(); });
    // ofGraphics.h, LINE 860
    lua->set_function("ofDisableAntiAliasing", [](){  ofDisableAntiAliasing(); });
    // ofGraphics.h, LINE 863
    lua->set_function("ofGetStyle", [](){ return ofGetStyle(); });
    // ofGraphics.h, LINE 870
    lua->set_function("ofSetStyle", [](ofStyle style){  ofSetStyle(style); });
    // ofGraphics.h, LINE 890
    lua->set_function("ofPushStyle", [](){  ofPushStyle(); });
    // ofGraphics.h, LINE 895
    lua->set_function("ofPopStyle", [](){  ofPopStyle(); });
    // ofGraphics.h, LINE 906
    lua->set_function("ofSetPolyMode", [](ofPolyWindingMode mode){  ofSetPolyMode(mode); });
    // ofGraphics.h, LINE 923
    lua->set_function("ofSetRectMode", [](ofRectMode mode){  ofSetRectMode(mode); });
    // ofGraphics.h, LINE 942
    lua->set_function("ofPushMatrix", [](){  ofPushMatrix(); });
    // ofGraphics.h, LINE 947
    lua->set_function("ofPopMatrix", [](){  ofPopMatrix(); });
    // ofGraphics.h, LINE 950
    lua->set_function("ofGetCurrentMatrix", [](ofMatrixMode matrixMode){ return ofGetCurrentMatrix(matrixMode); });
    // ofGraphics.h, LINE 959
    lua->set_function("ofGetCurrentOrientationMatrix", [](){ return ofGetCurrentOrientationMatrix(); });
    // ofGraphics.h, LINE 967
    lua->set_function("ofGetCurrentNormalMatrix", [](){ return ofGetCurrentNormalMatrix(); });
    // ofGraphics.h, LINE 980
    // ofGraphics.h, LINE 982
    // ofGraphics.h, LINE 983
    lua->set_function("ofTranslate", sol::overload(
        [](float x, float y, float z){  ofTranslate(x, y, z); },
        [](const glm::vec3 & p){  ofTranslate(p); },
        [](const glm::vec2 & p){  ofTranslate(p); }
    ));
    // ofGraphics.h, LINE 985
    // ofGraphics.h, LINE 988
    // ofGraphics.h, LINE 990
    lua->set_function("ofScale", sol::overload(
        [](float xAmnt, float yAmnt, float zAmnt){  ofScale(xAmnt, yAmnt, zAmnt); },
        [](float amount){  ofScale(amount); },
        [](const glm::vec3 & p){  ofScale(p); }
    ));
    // ofGraphics.h, LINE 1007
    // ofGraphics.h, LINE 1010
    lua->set_function("ofRotate", sol::overload(
        [](float degrees, float vecX, float vecY, float vecZ){  ofRotate(degrees, vecX, vecY, vecZ); },
        [](float degrees){  ofRotate(degrees); }
    ));
    // ofGraphics.h, LINE 1021
    lua->set_function("ofRotateX", [](float degrees){  ofRotateX(degrees); });
    // ofGraphics.h, LINE 1032
    lua->set_function("ofRotateY", [](float degrees){  ofRotateY(degrees); });
    // ofGraphics.h, LINE 1043
    lua->set_function("ofRotateZ", [](float degrees){  ofRotateZ(degrees); });
    // ofGraphics.h, LINE 1060
    // ofGraphics.h, LINE 1063
    lua->set_function("ofRotateDeg", sol::overload(
        [](float degrees, float vecX, float vecY, float vecZ){  ofRotateDeg(degrees, vecX, vecY, vecZ); },
        [](float degrees){  ofRotateDeg(degrees); }
    ));
    // ofGraphics.h, LINE 1074
    lua->set_function("ofRotateXDeg", [](float degrees){  ofRotateXDeg(degrees); });
    // ofGraphics.h, LINE 1085
    lua->set_function("ofRotateYDeg", [](float degrees){  ofRotateYDeg(degrees); });
    // ofGraphics.h, LINE 1096
    lua->set_function("ofRotateZDeg", [](float degrees){  ofRotateZDeg(degrees); });
    // ofGraphics.h, LINE 1113
    // ofGraphics.h, LINE 1116
    lua->set_function("ofRotateRad", sol::overload(
        [](float radians, float vecX, float vecY, float vecZ){  ofRotateRad(radians, vecX, vecY, vecZ); },
        [](float radians){  ofRotateRad(radians); }
    ));
    // ofGraphics.h, LINE 1127
    lua->set_function("ofRotateXRad", [](float radians){  ofRotateXRad(radians); });
    // ofGraphics.h, LINE 1138
    lua->set_function("ofRotateYRad", [](float radians){  ofRotateYRad(radians); });
    // ofGraphics.h, LINE 1149
    lua->set_function("ofRotateZRad", [](float radians){  ofRotateZRad(radians); });
    // ofGraphics.h, LINE 1155
    lua->set_function("ofLoadIdentityMatrix", [](){  ofLoadIdentityMatrix(); });
    // ofGraphics.h, LINE 1156
    // ofGraphics.h, LINE 1157
    lua->set_function("ofLoadMatrix", sol::overload(
        [](const glm::mat4 & m){  ofLoadMatrix(m); },
        [](const float * m){  ofLoadMatrix(m); }
    ));
    // ofGraphics.h, LINE 1158
    // ofGraphics.h, LINE 1159
    lua->set_function("ofMultMatrix", sol::overload(
        [](const glm::mat4 & m){  ofMultMatrix(m); },
        [](const float * m){  ofMultMatrix(m); }
    ));
    // ofGraphics.h, LINE 1160
    lua->set_function("ofSetMatrixMode", [](ofMatrixMode matrixMode){  ofSetMatrixMode(matrixMode); });
    // ofGraphics.h, LINE 1161
    lua->set_function("ofLoadViewMatrix", [](const glm::mat4 & m){  ofLoadViewMatrix(m); });
    // ofGraphics.h, LINE 1162
    lua->set_function("ofMultViewMatrix", [](const glm::mat4 & m){  ofMultViewMatrix(m); });
    // ofGraphics.h, LINE 1163
    lua->set_function("ofGetCurrentViewMatrix", [](){ return ofGetCurrentViewMatrix(); });
    // ofGraphics.h, LINE 1171
    lua->set_function("ofPushView", [](){  ofPushView(); });
    // ofGraphics.h, LINE 1174
    lua->set_function("ofPopView", [](){  ofPopView(); });
    // ofGraphics.h, LINE 1177
    lua->set_function("ofIsVFlipped", [](){ return ofIsVFlipped(); });
    // ofGraphics.h, LINE 1183
    // ofGraphics.h, LINE 1190
    lua->set_function("ofViewport", sol::overload(
        [](ofRectangle viewport){  ofViewport(viewport); },
        [](float x, float y, float width, float height, bool vflip){  ofViewport(x, y, width, height, vflip); }
    ));
    // ofGraphics.h, LINE 1194
    lua->set_function("ofGetCurrentViewport", [](){ return ofGetCurrentViewport(); });
    // ofGraphics.h, LINE 1198
    lua->set_function("ofGetNativeViewport", [](){ return ofGetNativeViewport(); });
    // ofGraphics.h, LINE 1202
    lua->set_function("ofGetViewportWidth", [](){ return ofGetViewportWidth(); });
    // ofGraphics.h, LINE 1206
    lua->set_function("ofGetViewportHeight", [](){ return ofGetViewportHeight(); });
    // ofGraphics.h, LINE 1220
    lua->set_function("ofOrientationToDegrees", [](ofOrientation orientation){ return ofOrientationToDegrees(orientation); });
    // ofGraphics.h, LINE 1222
    lua->set_function("ofSetCoordHandedness", [](ofHandednessType handedness){  ofSetCoordHandedness(handedness); });
    // ofGraphics.h, LINE 1223
    lua->set_function("ofGetCoordHandedness", [](){ return ofGetCoordHandedness(); });


}

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#pragma clang diagnostic pop
#endif // #ifndef _MSC_VER
