#======================================================================
# filetools - Simple file-related tools
#======================================================================
# Library project file
# Author: J C Gonzalez - 2015-2017
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 OLD)

include (../common.cmake)

project (filetools)

set (filetoolsLib_hdr
  filetools.h)

set (filetoolsLib_src
  filetools.cpp)

find_package(CURL REQUIRED)

add_library (filetools SHARED ${filetoolsLib_src})
set_target_properties (filetools PROPERTIES LINKER_LANGUAGE CXX)
include_directories(. ${CURL_INCLUDE_DIR})


install (TARGETS filetools
         RUNTIME DESTINATION bin
         ARCHIVE DESTINATION lib
         LIBRARY DESTINATION lib)

