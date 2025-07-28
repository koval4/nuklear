# nuklear - C immediate-mode UI library

This is a `build2` package repository for [`Nuklear`](https://github.com/Immediate-Mode-UI/Nuklear),
a minimal-state, immediate-mode graphical user interface toolkit written in ANSI C and licensed under public domain.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`nuklear` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `nuklear` uses the standard `bdep`-based workflow.
For example:

```
git clone .../nuklear.git
cd nuklear

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
