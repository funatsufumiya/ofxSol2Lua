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
    setOFGeneratedBindings(lua);
    setTypeBindings(lua);
    setConstBindings(lua);
    // setColorConstBindings(lua);
    setMathBindings(lua);
}

void ofxSol2Lua::setConstBindings(const std::shared_ptr<sol::state>& lua){
    auto&& l = *lua;
    l["PI"] = PI;
    l["HALF_PI"] = HALF_PI;
    l["TWO_PI"] = TWO_PI;
    l["FOUR_PI"] = FOUR_PI;
}

void ofxSol2Lua::setTypeBindings(const std::shared_ptr<sol::state>& lua){
    using Vec2 = ofVec2f;
    using Vec3 = ofVec3f;
    using Vec4 = ofVec4f;
    using Mat4 = ofMatrix4x4;

    sol::usertype<Vec2> vec2_type = lua->new_usertype<Vec2>("ofVec2f",
        sol::constructors<Vec2(), Vec2(float, float), Vec2(const Vec2&)>(),
        sol::meta_function::addition,
        sol::overload(
           [](const Vec2& a, const Vec2& b){ return a + b; },
           [](const Vec2& a, float b){ return a + b; }
        ),
        sol::meta_function::subtraction,
        sol::overload(
           [](const Vec2& a, const Vec2& b){ return a - b; },
           [](const Vec2& a, float b){ return a - b; }
        ),
        sol::meta_function::multiplication,
        sol::overload(
           [](const Vec2& a, const Vec2& b){ return a * b; },
           [](const Vec2& a, float b){ return a * b; }
        ),
        sol::meta_function::division,
        sol::overload(
           [](const Vec2& a, const Vec2& b){ return a / b; },
           [](const Vec2& a, float b){ return a / b; }
        )
    );
    vec2_type["x"] = &Vec2::x;
    vec2_type["y"] = &Vec2::y;

    vec2_type["length"] = &Vec2::length;
    vec2_type["lengthSquared"] = &Vec2::lengthSquared;
    vec2_type["normalized"] = &Vec2::normalized;
    vec2_type["normalize"] = &Vec2::normalize;
    vec2_type["limit"] = &Vec2::limit;
    vec2_type["dot"] = &Vec2::dot;
    vec2_type["distance"] = &Vec2::distance;
    vec2_type["distanceSquared"] = &Vec2::distanceSquared;
    vec2_type["angle"] = sol::overload(
        [](Vec2& p, const Vec2& v){ return p.angle(v); }
    );
    vec2_type["rotated"] = sol::overload(
        [](Vec2& p, float a){ return p.rotated(a); },
        [](Vec2& p, float a, const Vec2& v){ return p.rotated(a, v); }
    );
    vec2_type["rotate"] = sol::overload(
        [](Vec2& p, float a){ return p.rotate(a); },
        [](Vec2& p, float a, const Vec2& v){ return p.rotate(a, v); }
    );
    vec2_type["getRotated"] = sol::overload(
        [](Vec2& p, float a){ return p.getRotated(a); },
        [](Vec2& p, float a, const Vec2& v){ return p.getRotated(a, v); }
    );
    vec2_type["perpendicular"] = &Vec2::perpendicular;

    sol::usertype<Vec3> vec3_type = lua->new_usertype<Vec3>("ofVec3f",
        sol::constructors<Vec3(), Vec3(float, float, float), Vec3(const Vec2&), Vec3(const Vec3&)>(),
        sol::meta_function::addition,
        sol::overload(
           [](const Vec3& a, const Vec3& b){ return a + b; },
           [](const Vec3& a, float b){ return a + b; }
        ),
        sol::meta_function::subtraction,
        sol::overload(
           [](const Vec3& a, const Vec3& b){ return a - b; },
           [](const Vec3& a, float b){ return a - b; }
        ),
        sol::meta_function::multiplication,
        sol::overload(
           [](const Vec3& a, const Vec3& b){ return a * b; },
           [](const Vec3& a, float b){ return a * b; }
        ),
        sol::meta_function::division,
        sol::overload(
           [](const Vec3& a, const Vec3& b){ return a / b; },
           [](const Vec3& a, float b){ return a / b; }
        )
    );
    vec3_type["x"] = &Vec3::x;
    vec3_type["y"] = &Vec3::y;
    vec3_type["z"] = &Vec3::z;

    vec3_type["length"] = &Vec3::length;
    vec3_type["lengthSquared"] = &Vec3::lengthSquared;
    vec3_type["normalized"] = &Vec3::normalized;
    vec3_type["normalize"] = &Vec3::normalize;
    vec3_type["limit"] = &Vec3::limit;
    vec3_type["dot"] = &Vec3::dot;
    vec3_type["cross"] = &Vec3::cross;
    vec3_type["distance"] = &Vec3::distance;
    vec3_type["distanceSquared"] = &Vec3::distanceSquared;

    sol::usertype<Vec4> vec4_type = lua->new_usertype<Vec4>("Vec4",
        sol::constructors<Vec4(), Vec4(float, float, float, float), Vec4(const Vec3&), Vec4(const Vec4&)>(),
        sol::meta_function::addition,
        sol::overload(
           [](const Vec4& a, const Vec4& b){ return a + b; },
           [](const Vec4& a, float b){ return a + b; }
        ),
        sol::meta_function::subtraction,
        sol::overload(
           [](const Vec4& a, const Vec4& b){ return a - b; },
           [](const Vec4& a, float b){ return a - b; }
        ),
        sol::meta_function::multiplication,
        [](const Vec4& a, float b){ return a * b; },
        sol::meta_function::division,
        [](const Vec4& a, float b){ return a / b; }
    );
    vec4_type["x"] = &Vec4::x;
    vec4_type["y"] = &Vec4::y;
    vec4_type["z"] = &Vec4::z;
    vec4_type["w"] = &Vec4::w;

    vec4_type["length"] = &Vec4::length;
    vec4_type["lengthSquared"] = &Vec4::lengthSquared;
    vec4_type["normalized"] = &Vec4::normalized;
    vec4_type["normalize"] = &Vec4::normalize;
    vec4_type["dot"] = &Vec4::dot;
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