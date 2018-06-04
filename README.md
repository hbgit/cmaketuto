# cmaketuto
A cmake Tutorial - https://cmake.org/

# What is CMAKE?

*https://cmake.org/

CMake is an open-source, cross-platform family of tools designed to build, test and package software. CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice. The suite of CMake tools were created by Kitware in response to the need for a powerful, cross-platform build environment for open-source projects such as ITK and VTK.

CMake is part of Kitware’s collection of commercially supported open-source platforms for software development.



*https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html

CMake is a build system that uses a single script (defined in a CMakeLists.txt file) to generate appropriate platform-specific build scripts. For example, on Windows, CMake can generate files targeting Microsoft Visual Studio and the MSBuild system, whereas on other operating system it can target various MAKE variants. 

The first command you typically encounter in the root CMakeLists.txt file is the specification of the minimum required CMake version, cmake_minimum_required(VERSION x.x.x). 


# Installation

* To install CMake in Linux, just simply do on your terminal

> For Ubuntu

$ sudo apt-get install cmake

> For Redhat

$ yum install cmake

> For Mac OS X with Macports

$ sudo port install cmake

# Overview

Based on https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html

Following the minimum required version we have the project() directive which defines the name of the project. A project is simply a collection of files that are all somehow related. You declare the name of the project like so

> project(MyProject)

CMake lets you create text variables. For this purpose, the set() command is used. For instance, to create a variable MY_VAR with the value "hello", we write:

> set (MY_VAR "hello")

To refer to a variable later on, simply enclose it in the round braces prepended by a dollar sign:

> set (OTHER_VAR "${MY_VAR} world!")

The compiler searches the headers in several predefined locations that are specific to the operating system being used. In addition, you can specify further directories with header files using CMake’s include_directories() command:

>include_directories( ${MY_SOURCE_DIR}/src )

To enable a particular language standard, specify the desired standard in CMAKE_CXX_VARIABLE, as follows:

>set(CMAKE_CXX_STANDARD 11)  # enable C++11 standard

If you want to set up additional compiler-related settings, specify them in CMAKE_CXX_FLAGS:

>set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")

A build target defines an executable or a library that the CMake script helps you build. A script can have more than one build target. To create an executable binary, you use the add_executable() command, i.e.,

>add_executable (my_executable my_source1.cpp my_source2.cpp)

where my_executable is the target name and *.cpp files are the source files needed to construct the final executable.

If you want to build a library instead, you can use the add_library() command:

>add_library (my_library STATIC|SHARED|MODULE my_source.cpp)

The Boost libraries are the most popular C++ library set. While many libraries are header-only (meaning you don’t need to perform any linking, just include a few files), some libraries do, in fact, require compilation and linking.

> 
find_package(Boost)
IF (Boost_FOUND)
include_directories(${Boost_INCLUDE_DIR})
endif()

set (Boost_USE_STATIC_LIBS OFF) # enable dynamic linking
set (Boost_USE_MULTITHREAD ON)  # enable multithreading
find_package (Boost COMPONENTS REQUIRED chrono filesystem)



