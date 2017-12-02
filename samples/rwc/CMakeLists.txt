#======================================================================
# RWC - Requests With Curl library
#======================================================================
# Library project file
# Author: J C Gonzalez - 2015-2017
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 OLD)

include (../../common.cmake)

project (rwcex)

set (rwcex_src
  rwc_example.cpp)

find_package(CURL REQUIRED)

add_executable (rwcex ${rwcex_src})
set_target_properties (rwcex PROPERTIES LINKER_LANGUAGE CXX)
include_directories(. ../../filetools ../../rwc ${CURL_INCLUDE_DIR})
target_include_directories (rwcex PUBLIC . ../../rwc ../../filetools)
target_link_libraries(rwcex curl filetools rwc)
install (TARGETS rwcex
         RUNTIME DESTINATION bin
         ARCHIVE DESTINATION lib
         LIBRARY DESTINATION lib)

