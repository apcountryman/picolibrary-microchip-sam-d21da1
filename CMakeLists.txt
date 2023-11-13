# picolibrary-microchip-sam-d21da1
#
# Copyright 2023, Andrew Countryman <apcountryman@gmail.com> and the
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

# configure compilation and linking
option(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS
    "picolibrary-microchip-sam-d21da1: use parent project's build flags"
    ON
)
if( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS} )
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
    )
endif( NOT ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS} )
