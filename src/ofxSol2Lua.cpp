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

std::shared_ptr<sol::state> ofxSol2Lua::getLuaState(){
    std::shared_ptr<sol::state> lua = std::make_shared<sol::state>();

    lua->open_libraries(
        sol::lib::jit, // please comment out this if you don't use LuaJIT
        sol::lib::base,
        sol::lib::math,
        sol::lib::string,
        sol::lib::table
    );

    setBindings(lua);

    return lua;
}

void ofxSol2Lua::setBindings(const std::shared_ptr<sol::state>& lua){
    // setOFGeneratedBindings(lua);
    // setTypeBindings(lua);
    // setConstBindings(lua);
    // setColorConstBindings(lua);
    setMathBindings(lua);
}

void ofxSol2Lua::setMathBindings(const std::shared_ptr<sol::state>& lua){
    auto&& l = *lua;
    lua->set_function("sin", [](float v){ return sin(v); });
    lua->set_function("cos", [](float v){ return cos(v); });
    lua->set_function("tan", [](float v){ return tan(v); });
    lua->set_function("atan", [](float v){ return atan(v); });
    lua->set_function("atan2", [](float a, float b){ return atan2(a, b); });
    lua->set_function("atanh", [](float v){ return atanh(v); });
    lua->set_function("sqrt", [](float v){ return sqrt(v); });
    lua->set_function("tanh", [](float v){ return tanh(v); });
    lua->set_function("acos", [](float v){ return acos(v); });
    lua->set_function("asin", [](float v){ return asin(v); });

    lua->set_function("exp", [](float v){ return exp(v); });
    lua->set_function("exp2", [](float v){ return exp2(v); });
    lua->set_function("abs", [](float v){ return fabs(v); });

    lua->set_function("log", [](float v){ return log(v); });
    lua->set_function("log2", [](float v){ return log2(v); });
    lua->set_function("log10", [](float v){ return log10(v); });

    lua->set_function("ceil", [](float v){ return ceil(v); });
    lua->set_function("floor", [](float v){ return floor(v); });
    lua->set_function("round", [](float v){ return round(v); });
    lua->set_function("trunc", [](float v){ return trunc(v); });

    lua->set_function("pow", [](float a, float b){ return pow(a, b); });
    lua->set_function("remainder", [](float a, float b){ return remainder(a, b); });

    lua->set_function("fmod", [](float a, float b){ return fmod(a, b); });
    lua->set_function("max", [](float a, float b){ return std::max(a, b); });
    lua->set_function("min", [](float a, float b){ return std::min(a, b); });
}

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#pragma clang diagnostic pop
#endif // #ifndef _MSC_VER