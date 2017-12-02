#======================================================================
# VOS - VOSpace Handling tools
#======================================================================
# Library project file
# Author: J C Gonzalez - 2015-2017
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 OLD)

include (../../common.cmake)

project (vosex)

set (vosex_src
  vos_example.cpp)

find_package(CURL REQUIRED)

add_executable (vosex ${vosex_src})
set_target_properties (vosex PROPERTIES LINKER_LANGUAGE CXX)
include_directories(. ../../filetools ../../rwc ../../vos ${CURL_INCLUDE_DIR})
target_include_directories (vosex PUBLIC . ../../filetools ../../rwc ../../vos)
target_link_libraries(vosex curl filetools rwc vos)
install (TARGETS vosex
         RUNTIME DESTINATION bin
         ARCHIVE DESTINATION lib
         LIBRARY DESTINATION lib)

