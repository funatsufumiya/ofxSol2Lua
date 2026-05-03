# ofxSol2Lua

Lua with [Sol2](https://github.com/ThePhD/sol2) for openFrameworks

- Lua version: currently using LuaJIT 2.1 binary, but you can use Lua [v5.4.7](https://github.com/lua/lua/tree/v5.4.7) (included sources)
    - **WARNING**: Currently containing LuaJIT win_x64/mac_x64/mac_arm64/linux_x64 binaries, but not other platforms.
- Sol2 version: currently using [v3.5.0](https://github.com/ThePhD/sol2/)
- Tested with oF 0.12.0 (win_x64/mac_arm64/linux_x64)

## Binding status

### Dones

- cmath (common ones), ofMath.h
- ofGraphics.h
- ofPrimitives.h
- of3DGraphics.h
- ofLog.h

## Known Issues

- Default values of methods are not treated perfectly now. So you may need `ofSetColor(r, g, b, a)` instead of `ofSetColor(r, g, b)`.

## Development 

### bindgen

See [tools/bindgen/README.md](./tools/bindgen/README.md) for detail.

```bash
$ cd tools/bindgen
# $ pip install uv # only first time
# $ uv sync # only first time
$ uv run main.py -of ../../../../ ../../../../libs/openFrameworks/ofMain.h
$ cp of_generated.cpp ../../src/generated
```

## LICENSE

- lua: [MIT License](https://www.lua.org/license.html)
- sol2: [MIT License](https://github.com/ThePhD/sol2/blob/develop/LICENSE.txt)

NOTE: No specific copyright is claimed for this repository changes (for oF binding), but the [Apache License 2.0](LICENSE_APACHE) or [MIT License](LICENSE_MIT) can be applied if necessary.
