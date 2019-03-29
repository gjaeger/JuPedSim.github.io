---
layout: post
title: Quick start
subtitle: Compiling the code
permalink: 2016-11-02-quickstart.html
---

## Windows

We recommend to use Visual Studio 2017. See [this tutorial with VS](http://www.jupedsim.org/jpscore/2018-10-21-windows)

## Linux and MacOS

Before compilation check the [requirements](2016-11-03-requirements.html).

`JPScore` and `JPSreport` use some functionalities of C++17.
Therefore you need a compiler that supports C++17.

For `JPSvis` under MacOSX it is necessary to use `AppleClang`.

- Git clone the code of the package you want to compile, e.g., `jpsvis`

 ```shell
  git clone https://gitlab.version.fz-juelich.de/jupedsim/jpsvis
 ```
- Run cmake:

 ```shell
  cd jpsvis
  mkdir build
  cd build
  cmake ..
 ```

 <div class="alert alert-info">
 <strong>Note: </strong> JPScore and JPSreport use some functionalities of C++17. Therefore you need a compiler   that supports C++17. Eventually you may need to call cmake as follows:
  </div>

 ```shell
  cmake -DCMAKE_CXX_COMPILER=g++-8 ..
 ```

 or you can point `cmake` to an appropriate compiler supporting C++17.

 `JPSvis` however, under MacOSX needs to be compiled with the native `AppleClang`.



- If cmake runs without errors, compile

 ```shell
  make
 ```

 An executable will be found in `./bin`


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



###  JPScore
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
