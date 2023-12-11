# PGE Template

# Building

## Local
```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
$ bin/game_name
```

## Emscripten
```bash
$ mkdir em_build
$ cd em_build
$ emcmake cmake ..
$ make
$ emrun bin/name_name.html
```

## Itch Deploy
Make the itch page and set it up. Then set the variables in `push_to_itch.bash` and run it