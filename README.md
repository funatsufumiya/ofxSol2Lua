# ofxSol2Lua

Lua with [Sol2](https://github.com/ThePhD/sol2) for openFrameworks

**WARNING**: Currently this addon just provides libraries and minimal example (with no oF specific binding or no oF specific instructions), but now planning to provide more. (If you need full binding now, consider [ofxLua](https://github.com/danomatika/ofxLua). You can probably also use sol2 by copying `sol2.hpp` 
 in [releases](https://github.com/ThePhD/sol2/releases/) into your code.)

- Lua version: currently using LuaJIT 2.1 binary, but you can use Lua [v5.4.7](https://github.com/lua/lua/tree/v5.4.7) (included sources)
    - **WARNING**: Currently containing LuaJIT win_x64/mac_x64/mac_arm64/linux_x64 binaries, but not other platforms.
- Sol2 version: currently using [v3.3.0](https://github.com/ThePhD/sol2/releases/tag/v3.3.0)
- Tested with oF 0.12.0 (win_x64/mac_arm64/linux_x64)

## LICENSE

- lua: [MIT License](https://www.lua.org/license.html)
- sol2: [MIT License](https://github.com/ThePhD/sol2/blob/develop/LICENSE.txt)

NOTE: No specific copyright is claimed for this repository changes (for oF binding), but the [Apache License 2.0](LICENSE_APACHE) or [MIT License](LICENSE_MIT) can be applied if necessary.
