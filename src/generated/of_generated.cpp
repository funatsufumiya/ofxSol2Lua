
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
        [](const int & p){ return ofNoise(p); },
        [](float x, float y, float z){ return ofNoise(x, y, z); },
        [](const int & p){ return ofNoise(p); },
        [](float x, float y, float z, float w){ return ofNoise(x, y, z, w); },
        [](const int & p){ return ofNoise(p); }
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
        [](const int & p){ return ofSignedNoise(p); },
        [](float x, float y, float z){ return ofSignedNoise(x, y, z); },
        [](const int & p){ return ofSignedNoise(p); },
        [](float x, float y, float z, float w){ return ofSignedNoise(x, y, z, w); },
        [](const int & p){ return ofSignedNoise(p); }
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


}

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#pragma clang diagnostic pop
#endif // #ifndef _MSC_VER
