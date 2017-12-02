#======================================================================
# CMakeLists.txt
# QPF - Prototype of QLA Processing Framework
# General Project File
#======================================================================
# Author: J C Gonzalez - 2015-2017
# Copyright (C) 2015-2017 Euclid SOC Team at ESAC
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 NEW)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

link_directories (filetools rwc vos)

