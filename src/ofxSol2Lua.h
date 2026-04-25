#pragma once

#include "sol/sol.hpp"

class ofxSol2Lua {
public:
    std::shared_ptr<sol::state> getLuaState();
    void setBindings(const std::shared_ptr<sol::state>& lua);

protected:
    void setOFGeneratedBindings(const std::shared_ptr<sol::state>& lua);
    void setTypeBindings(const std::shared_ptr<sol::state>& lua);
    void setConstBindings(const std::shared_ptr<sol::state>& lua);
    void setColorConstBindings(const std::shared_ptr<sol::state>& lua);
    void setMathBindings(const std::shared_ptr<sol::state>& lua);
};