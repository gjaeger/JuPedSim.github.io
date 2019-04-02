# JuPedSim

This repository contains the documentation of `JuPedSim`.

Markdown files from `jpscore` and `jpsreport` repositories are also used.

These files are converted *automatically* by jekyll to produce the website http://jupedsim.org.

Furthermore, pdf-guide can be produced. Here are the steps to follow:

### Directory structure:

Your directory tree should look like:
```.
├── JuPedSim.github.io
├── jpscore
└── jpsreport
```

The repositories `jpscore` and `jpsreport` have to be cloned on the same directory level as this repository.

In both repositories (`jpscore` and `jpsreport`) change to the branches `gh-pages`.


### Requirements

To create the pdf file the following requirements are needed:

- [kramdown](https://github.com/kramdown)
- [kramdown-parser-gfm](https://github.com/kramdown/parser-gfm)
- Xelatex
- Python


### Steps to PDF

The pdf file is created by converting the markdown files to tex files.
These are processed by `xelatex` to a single file called `JuPedSim.pdf`.

- clean repository i.e.,
  - `git push` if you have any changes,
  -  `git pull` to be up to date.
- `cd jps_guide`
- `python make_guide.py`
  This script performs the following actions:
  - create `_tex`-directory
  - convert md-files to tex-files
  - cleanup tex-files by removing md-header
  - make sure post-commit hook is copied in the right place and made executable
  - run `git checkout master` to produce titlepage
  - run `make` to produce pdf file




#### Credits: Beautiful Jekyll

The website uses the theme Beautiful Jekyll
> *Copyright 2016 [Dean Attali](http://deanattali.com). Licensed under the MIT license.*
