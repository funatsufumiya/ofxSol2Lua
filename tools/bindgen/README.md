# bindgen

Python script using libclang

## Generate

```bash
$ pip install uv
$ uv sync
$ uv run main.py -of ../../../../ ../../../../libs/openFrameworks/ofMain.h
$ cp of_generated.cpp ../../src/generated
```

## Known Issues

- Currently mac os won't generate proper types (because some essential include is missing. Need to fix main.py)