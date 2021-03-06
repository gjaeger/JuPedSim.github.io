---
layout: post2
title: Requirements
subtitle: Dependencies of JuPedSim
permalink: 2016-11-03-requirements.html
nav:
- page: Supported compilers
  permalink: 2016-11-03-requirements.html#supported-compilers
- page: Required tools and libraries
  permalink: 2016-11-03-requirements.html#required-tools-and-libraries
- page: OSX
  permalink: 2016-11-03-requirements.html#osx
- page: Linux
  permalink: 2016-11-03-requirements.html#linux
- page: Windows
  permalink: 2016-11-03-requirements.html#windows
- page: Test Boost
  permalink: 2016-11-03-requirements.html#test-boost-installation
- page: Back to top
  permalink: 2016-11-03-requirements.html#top
---


In order to compile `JuPedSim` it is necessary to first install the required libraries.

## Supported compilers

Any compiler with support for C++11.

Tested with

- `g++` (linux/osx)
- `clang` (osx)
- Visual Studio 2017 (Windows)

`JPScore` and `JPSreport` use some functionalities of C++17.
Therefore you need a compiler that supports C++17.




## Required tools and libraries

- cmake: see this [tutorial](https://www.johnlamp.net/cmake-tutorial-1-getting-started.html) for a brief overview.
- Python3 (highly recommended): needed to plot results and data manipulation.
- [Boost library](http://www.boost.org/): necessary for `jpscore` and `jpsreport`
- [CGAL](https://www.cgal.org/) (optional)
- [Qt](https://www.qt.io/): necessary for `jpseditor` and `jpsvis`
- [VTK](http://www.vtk.org/): necessary for `jpsvis`
- [Polygon3](https://www.j-raedler.de/projects/polygon/) necessary for `jpsreport`

***

Note:
`jpseditor` and `jpsvis` come with Windows executables.
Therefore, a compilation of these two packages may not be needed.

## OSX

Assuming you have [Homebrew](http://brew.sh/). Otherwise, these commands
can be slightly adapted to [MacPorts](https://www.macports.org/) users.

### Install Qt

```bash
 brew update
 brew install qt
```

It may be necessary to link `qt` as follows:

- Find the location of qmake
```bash
 find / -name qmake
```

- then export the path to `~/.bashrc`, `~/.zshrc` or `~/.bash_profile`. For example:
```bash
 echo 'export PATH=/path/to/qt/bin:$PATH"' >> ~/.bashrc
```
(or export to `~/.zshrc` if your are using zsh)


### Install VTK

```bash
 brew install vtk --with-qt --without-python --with-python3 --without-boost  --build-from-source
```

### Install CGAL
See [here](https://www.cgal.org/download/macosx.html) for CGAL installation.


### Install Boost (at least v1.59)

For `brew` users:

```bash
 brew install boost
```

And for `port` users

```bash
 sudo port install boost
```


## Linux
The instructions are for Ubuntu, Debian and Manjaro

### Install Qt and VTK

- Ubuntu (Debian)

```bash
 sudo apt-get install qt5-default
 sudo apt-get install libvtk6-dev
```

- Manjaro

```
bash
sudo pacman -Sy qt5
sudo pacman -Sy vtk
```

Alternatively, you can download the latest version of QT [here](https://www.qt.io/download/)
and the latest version of VTK [here](http://www.vtk.org/download/) and compile them manually.

### Install CGAL

See [here](https://www.cgal.org/download/linux.htmlhttps://www.cgal.org/download/linux.html) for installation instructions.

### Install Boost (at least v1.59)

You can compile boost using the following snippet:

```bash
 boost_version=1.61.0
 boost_dir=boost_1_61_0

 wget http://downloads.sourceforge.net/project/boost/boost/${boost_version}/${boost_dir}.tar.gz
 tar xfz ${boost_dir}.tar.gz
 rm ${boost_dir}.tar.gz
 cd ${boost_dir}
 ./bootstrap.sh --with-libraries=filesystem,test,system
 sudo ./b2 --without-python --prefix=/usr -j 4 link=shared runtime-link=shared install
 cd ..
 rm -rf ${boost_dir}
 sudo ldconfig
```

(download this snippet as a [script](https://gitlab.version.fz-juelich.de/jupedsim/jpscore/snippets/7)).


Note: Debian's and Ubuntu's install manager offer an old version of Boost, which is not supported by `JuPedSim`.



## Windows (10)

Installing and managing these libraries on Windows can be a real hassle.
Fortunately, there is a nice package manager for C++ libraries that you might want to try.

See [here](2018-06-05-vcpkg.html) for more details.


Otherwise, you can continue reading..

### Install Boost (at least v1.59)

```bash
 bootstrap
 b2  variant=release --build-type=complete
```

See also [Getting started on Windows](http://www.boost.org/doc/libs/1_65_1/more/getting_started/windows.html).

This [script](https://gitlab.version.fz-juelich.de/jupedsim/jpscore/snippets/18) can be useful, in case you are using
Visual Studio.

Download it and put it in the same directory as Boost. Depending on your Boost version and VS,
you may want to adapt in the script the variables `boost_dir` and `msvcver`.


## Test Boost installation

You can test your Boost installation by using this [minimal example](2016-11-04-boost.html).
