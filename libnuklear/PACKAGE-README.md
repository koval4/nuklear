# libnuklear - C immediate-mode UI library

This is a `build2` package for the [`Nuklear`](https://github.com/Immediate-Mode-UI/Nuklear)
C library. It provides minimal-state, immediate-mode graphical user interface toolkit written in ANSI C and licensed under public domain.


## Usage

To start using `libnuklear` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libnuklear ^4.12.4
```

Then import the library in your `buildfile`:

```
import libs = libnuklear%lib{nuklear}
```
