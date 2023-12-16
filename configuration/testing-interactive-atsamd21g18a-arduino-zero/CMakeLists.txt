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

# Description: picolibrary-microchip-sam-d21da1 ATSAMD21G18A Arduino Zero interactive
#       testing configuration.

# build configuration
set( CMAKE_BUILD_TYPE              "MinSizeRel" CACHE INTERNAL "" )
set( CMAKE_EXPORT_COMPILE_COMMANDS ON           CACHE INTERNAL "" )

# picolibrary aand picolibrary-arm-cortex-m0plus configuration
set( PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS OFF CACHE INTERNAL "" )
set( PICOLIBRARY_SUPPRESS_ASSERTION_FAILURE_LOCATION_INFORMATION                       OFF CACHE INTERNAL "" )
set( PICOLIBRARY_SUPPRESS_HUMAN_READABLE_ERROR_INFORMATION                             OFF CACHE INTERNAL "" )
set( PICOLIBRARY_SUPPRESS_HUMAN_READABLE_EVENT_INFORMATION                             OFF CACHE INTERNAL "" )

# interactive testing configuration
set( PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING        ON                                                            CACHE INTERNAL "" )
set( PICOLIBRARY_MICROCHIP_SAM_D21DA1_TESTING_INTERACTIVE_LINKER_SCRIPT "${CMAKE_CURRENT_LIST_DIR}/atsamd21g18a-arduino-zero-edbg.ld" CACHE INTERNAL "" )

# OpenOCD configuration
set(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_FILES
    ""
    CACHE INTERNAL ""
)
set(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_COMMANDS
    "source [find interface/cmsis-dap.cfg]"
    "set CHIPNAME at91samd21g18"
    "set ENDIAN little"
    "source [find target/at91samdXX.cfg]"
    CACHE INTERNAL ""
)
