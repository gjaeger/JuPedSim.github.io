---
layout: post
title: Quick start
subtitle: Compiling the code
permalink: 2016-11-02-quickstart.html
---

## Windows

See [this tutorial with VS](http://www.jupedsim.org/jpscore/2018-10-21-windows)

## Linux and MacOS
To compile `JuPedSim` there are three steps to follow:

- Get the code
  ```bash
   git clone https://github.com/JuPedSim/JuPedSim.git
   cd JuPedSim
   git submodule update --init --recursive
  ```

- Check the requirements
  Some packages and libraries are required to get `JuPedSim` compiled. See also [requirements](2016-11-03-requirements.html).

  You can check your system with
  ```bash
   make -f Makefile.cmake check
  ```
  `CMake` will eventually report any missing packages. Please fix these errors/warnings first **before** proceeding with the compilation of `JuPedSim`.

- Compile the code
  If the two first steps succeed then you can proceed with the compilation
  ```bash
   make -f Makefile.cmake
  ```
In case of successful compilation,  the executables will be located in the directory `bin/`.

Alternatively, you can try to compile the different modules separately, which allows more control on the process and helps tackle eventual compilation problems easily.

## Homebrew installation

Homebrew users can install all packages with the following commands:


### Add tap

First, add jupedsim's tap

```bash
brew tap JuPedSim/jps
```
(this is done once)

### (optional) Check dependencies

First check the dependencies of the packages you want to install

```shell
brew info <pkg>
```

with `<pkg>` is one of the available modules:

- `jpseditor`: geometry editor
- `jpscore`: simulation
- `jpsreport`: analysis
- `jpsvis`: visualisation

### Install

then install with

```shell
brew install --HEAD <pkg>
```

### (optional) Test modules

```shell
brew test  <pkg>
```

### Update module

To update the installed packages use

```shell
brew upgrade <pkg>
```

or reinstall it with

```shell
brew reinstall <pkg>
```

```bach
brew install --HEAD jpsvis
```


## JPScore
Following options for `cmake` can be defined

- `-DCMAKE_CXX_COMPILER=compiler` (e.g. clang++ or g++)
- `-DCMAKE_BUILD_TYPE=Debug` (default: Release)
- `-DCMAKE_VERBOSE_MAKEFILE=ON` (default: OFF)
- `-DBUILD_TESTING=ON` (default: OFF) include python tests
- `-DBUILD_CPPUNIT_TEST=ON` (default: OFF) include unit tests
- `-DUSE_DUAL_ABI=ON` (default: OFF) [using dual abi](https://gcc.gnu.org/onlinedocs/libstdc++/manual/using_dual_abi.html)
- `-D Boost_NO_SYSTEM_PATHS=true` (default: false)
- `-D BOOST_ROOT=PATH_where_to_find_boost` (should be used with the above option)
- `-D AIROUTER` (default: false) use the AIROUTER (still experimental) and needs CGAL to be installed
