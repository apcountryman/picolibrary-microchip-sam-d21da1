# picolibrary-microchip-sam-d21da1
#
# Copyright 2023-2024, Andrew Countryman <apcountryman@gmail.com> and the
# picolibrary-microchip-sam-d21da1 contributors
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
# file except in compliance with the License. You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software distributed under
# the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied. See the License for the specific language governing
# permissions and limitations under the License.

# Description: picolibrary-microchip-sam-d21da1 core CMake rules.

cmake_minimum_required( VERSION 3.16.3 )
project(
    picolibrary-microchip-sam-d21da1
    LANGUAGES CXX
)

# general project configuration
option(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING
    "picolibrary-microchip-sam-d21da1: enable interactive testing"
    OFF
)

# load additional CMake modules
list(
    APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules/apcountryman-cmake-utilities"
    "${CMAKE_CURRENT_SOURCE_DIR}/toolchain-arm-none-eabi-gcc"
)

# configure compilation and linking
if( "${PROJECT_SOURCE_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}" )
    set( CMAKE_CXX_STANDARD 17 )
    set( CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE )
    add_compile_options(
        -mcpu=cortex-m0plus
        -mthumb
        -Werror -Wall -Wextra
        -Wcast-align=strict
        -Wcast-qual
        -Wduplicated-cond
        -Wextra-semi
        -Wfloat-equal
        -Wimplicit-fallthrough=5
        -Wlogical-op
        -Wmissing-field-initializers
        -Wmissing-include-dirs
        -Wold-style-cast
        -Wplacement-new=2
        -Wpointer-arith
        -Wshadow
        -Wunsafe-loop-optimizations
        -fno-exceptions
        -fno-threadsafe-statics
        -ffile-prefix-map=${CMAKE_CURRENT_SOURCE_DIR}/=
        -ffile-prefix-map=${CMAKE_CURRENT_SOURCE_DIR}/picolibrary/=
    )

    if( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} )
        set(
            PICOLIBRARY_MICROCHIP_SAM_D21DA1_TESTING_INTERACTIVE_LINKER_SCRIPT
            "" CACHE STRING
            "picolibrary-microchip-sam-d21da1: interactive testing linker script"
        )

        add_link_options(
            -mcpu=cortex-m0plus
            -mthumb
            --specs=nano.specs
            --specs=nosys.specs
            -T "${PICOLIBRARY_MICROCHIP_SAM_D21DA1_TESTING_INTERACTIVE_LINKER_SCRIPT}"
        )
    endif( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} )
endif( "${PROJECT_SOURCE_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}" )

# configure picolibrary and picolibrary-arm-cortex-m0plus
option(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS
    "picolibrary-microchip-sam-d21da1: use parent project's picolibrary-arm-cortex-m0plus"
    ON
)

if( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS} )
    set( PICOLIBRARY_ENABLE_AUTOMATED_TESTING OFF CACHE INTERNAL "" )

    set( PICOLIBRARY_ENABLE_INTERACTIVE_TESTING "${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING}" CACHE INTERNAL "" )

    set( PICOLIBRARY_ARM_CORTEX_M0PLUS_USE_PARENT_PROJECT_PICOLIBRARY OFF CACHE INTERNAL "" )

    set( PICOLIBRARY_ARM_CORTEX_M0PLUS_IMPLEMENTATION_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include" CACHE INTERNAL "" )
endif( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS} )

if( ${PICOLIBRARY_ENABLE_AUTOMATED_TESTING} )
    message( FATAL_ERROR "PICOLIBRARY_ENABLE_AUTOMATED_TESTING must be OFF" )
endif( ${PICOLIBRARY_ENABLE_AUTOMATED_TESTING} )

if( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} AND NOT ${PICOLIBRARY_ENABLE_INTERACTIVE_TESTING} )
    message( FATAL_ERROR "PICOLIBRARY_ENABLE_INTERACTIVE_TESTING must be ON if PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING is ON" )
endif( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} AND NOT ${PICOLIBRARY_ENABLE_INTERACTIVE_TESTING} )

if( NOT "${PICOLIBRARY_ARM_CORTEX_M0PLUS_IMPLEMENTATION_INCLUDE_DIR}" STREQUAL "${PROJECT_SOURCE_DIR}/include" )
    message( FATAL_ERROR "PICOLIBRARY_ARM_CORTEX_M0PLUS_IMPLEMENTATION_INCLUDE_DIR must be ${PROJECT_SOURCE_DIR}/include" )
endif( NOT "${PICOLIBRARY_ARM_CORTEX_M0PLUS_IMPLEMENTATION_INCLUDE_DIR}" STREQUAL "${PROJECT_SOURCE_DIR}/include" )

if( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS} )
    add_subdirectory( picolibrary-arm-cortex-m0plus )
endif( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS} )

# capture project version information
include( git-utilities )
execute_git_command(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_VERSION
    COMMAND describe --match=none --always --dirty --broken
)

# configure OpenOCD
if( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} )
    include( openocd-utilities )

    set(
        PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_SEARCH_PATH
        "" CACHE STRING
        "picolibrary-microchip-sam-d21da1: OpenOCD configuration files and scripts search paths"
    )
    set(
        PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_FILES
        "" CACHE STRING
        "picolibrary-microchip-sam-d21da1: OpenOCD configuration files to load and scripts to execute"
    )
    set(
        PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_DEBUG_LEVEL
        "" CACHE STRING
        "picolibrary-microchip-sam-d21da1: OpenOCD debug level"
    )
    set(
        PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_COMMANDS
        "" CACHE STRING
        "picolibrary-microchip-sam-d21da1: OpenOCD commands to execute on server startup"
    )
endif( ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING} )

# library
add_subdirectory( source )

# library tests
add_subdirectory( test )
