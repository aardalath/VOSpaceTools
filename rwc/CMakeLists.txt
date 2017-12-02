#======================================================================
# RWC - Requests With Curl library
#======================================================================
# Library project file
# Author: J C Gonzalez - 2015-2017
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 OLD)

include (../common.cmake)

project (rwc)

set (rwcLib_hdr
  rwc.h
  scopeexit.h)

set (rwcLib_src
  rwc.cpp)

find_package(CURL REQUIRED)

add_library (rwc SHARED ${rwcLib_src})
set_target_properties (rwc PROPERTIES LINKER_LANGUAGE CXX)
include_directories(. ../filetools ${CURL_INCLUDE_DIR})
target_include_directories (rwc PUBLIC . ../filetools)
target_link_libraries(rwc curl filetools)
install (TARGETS rwc
         RUNTIME DESTINATION bin
         ARCHIVE DESTINATION lib
         LIBRARY DESTINATION lib)

