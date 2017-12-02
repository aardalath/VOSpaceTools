#======================================================================
# CMakeLists.txt
# QPF - Prototype of QLA Processing Framework
# General Project File
#======================================================================
# Author: J C Gonzalez - 2015-2017
# Copyright (C) 2015-2017 Euclid SOC Team at ESAC
#======================================================================
cmake_minimum_required(VERSION 2.8)
cmake_policy (SET CMP0015 OLD)

include (common.cmake)

project (VOSpaceTools)

#== Define subprojects

add_subdirectory (filetools)
add_subdirectory (rwc)
add_subdirectory (vos)

#add_subdirectory (tests)
add_subdirectory (samples)

#== CPack configuration
set (CPACK_PACKAGE_VERSION_MAJOR 0)
set (CPACK_PACKAGE_VERSION_MINOR 1)
set (CPACK_PACKAGE_VERSION_PATCH 0)
set (CPACK_GENERATOR "TGZ")
set (CPACK_PACKAGING_INSTALL_PREFIX "")
include (CPack)
