---
layout: post
title: About
subtitle: Jülich pedestrian simulator
permalink: 2016-11-01-introduction.html
---

Open source framework for simulating, analyzing and visualizing  pedestrian dynamics. 
[![DOI](https://zenodo.org/badge/13744388.svg)](https://zenodo.org/badge/latestdoi/13744388)
![logo](https://github.com/JuPedSim/JuPedSim/raw/master/doc/logo/jupedsim_small.png)


## Goal

The primary goal of `JuPedSim` is to provide students and researchers with a framework to investigate pedestrian dynamics
and  focus on research, i.e. development and validation of new models or model features, analysis of experiments and proper visualization of results. 

`JuPedSim` is currently focusing on evacuation, but is easily extendable to cover other areas 
e.g. passengers exchange, commuter traffic in railway stations etc.


<!-- We are developing some standards and benchmark scenarios for evaluation pedestrian simulations based on a large experimental database,  -->
<!-- which was established over the last years. See for example  -->

<!-- - [Jülich database](http://www.fz-juelich.de/ias/jsc/EN/Research/ModellingSimulation/CivilSecurityTraffic/PedestrianDynamics/Activities/database/databaseNode.html) -->
<!-- - [Wuppertal database](http://www.asim.uni-wuppertal.de/datenbank.html) -->


## Organization of the code

`JuPedSim` consists of four modules which are loosely coupled and can be used independently at the moment. These are:


1. `jpscore`: the core module computing the trajectories. See [list](http://www.jupedsim.org/jpscore/2016-11-01-operativ) of implemented models.
2. `jpsreport`: a tool for analyzing the trajectories and validating the model. 
   It implements a couple of measurement methods including the [Voronoi-method](http://dx.doi.org/10.1016/j.physa.2009.12.015) for calculating the density.
3. `jpsvis`: a tool for visualizing the input (geometry) and output (trajectories) data.
4.  `jpseditor`: a tool for creating and editing geometry files with dxf import/export capabilities.

![structure]({{ site.baseurl }}/img/structure.png)


## Showcase and tutorials

To highlight some features of `JuPedSim` we have uploaded some videos and tutorials on
our [YouTube channel](https://www.youtube.com/channel/UCKS8w8CUClHEeN4K1SUSMBA).


## Install

To install `JuPedSim` there is a [Quick Guide](2016-11-02-quickstart.html).



## Support 

We are heavily working on this project which means that:

- It’s not done. We will be releasing new enhancements, bug fixes etc.
- We love your support. If you find any errors or have suggestions, please write an issue in our [issue-tracker](https://gitlab.version.fz-juelich.de/jupedsim/jpscore/issues). We will try hard to fix it.
- Be patient. We are scientists and PhD/master students. Therefore, we primarily care about our research and theses. 

## Contact

info at jupedsim dot org
