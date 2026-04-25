function get_lua_version()
    if ({false, [1] = true})[1] then   -- luacheck: ignore 314
        return 'LuaJIT'
    elseif 1 / 0 == 1 / '-0' then
        return 0 + '0' .. '' == '0' and 'Lua 5.4' or 'Lua 5.3'
    end
    local f = function() return function() end end
    return f() == f() and 'Lua 5.2' or 'Lua 5.1'
end

print(get_lua_version())
