# Install script for directory: /Users/chraibi/Workspace/JuPedSim/jpsvis

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Applications")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/chraibi/Workspace/JuPedSim/jpsvis/bin/jpsvis.app" USE_SOURCE_PERMISSIONS)
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/JPSvis.app/Contents/MacOS/plugins" TYPE DIRECTORY FILES "/usr/local/Cellar/qt/4.8.7_2/plugins/imageformats")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file(WRITE "${CMAKE_INSTALL_PREFIX}/JPSvis.app/Contents/Resources/qt.conf" "")
    
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file(GLOB_RECURSE QTPLUGINS
      "${CMAKE_INSTALL_PREFIX}/JPSvis.app/Contents/MacOS/plugins/*.dylib")
    include(BundleUtilities)
    fixup_bundle("${CMAKE_INSTALL_PREFIX}/jpsvis.app" "${QTPLUGINS}" "")
    
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/chraibi/Workspace/JuPedSim/jpsvis/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
