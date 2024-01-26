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

# Description: picolibrary-microchip-sam-d21da1 CMake rules.

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/picolibrary/microchip/sam/d21da1/version.cc.in"
    "${CMAKE_CURRENT_BINARY_DIR}/picolibrary/microchip/sam/d21da1/version.cc"
    @ONLY
)

set(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_SOURCE_FILES
    "picolibrary/microchip/sam/d21da1.cc"
    "picolibrary/microchip/sam/d21da1/interrupt.cc"
    "picolibrary/microchip/sam/d21da1/peripheral.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/eic.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/gclk.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/pac.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/pm.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/rtc.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/sysctrl.cc"
    "picolibrary/microchip/sam/d21da1/peripheral/wdt.cc"
)
set(
    PICOLIBRARY_MICROCHIP_SAM_D21DA1_LINK_LIBRARIES
    "picolibrary"
    "picolibrary-arm-cortex-m0plus"
)

add_library(
    picolibrary-microchip-sam-d21da1
    ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_SOURCE_FILES}
)
target_include_directories(
    picolibrary-microchip-sam-d21da1
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
target_link_libraries(
    picolibrary-microchip-sam-d21da1
    ${PICOLIBRARY_MICROCHIP_SAM_D21DA1_LINK_LIBRARIES}
)

add_library(
    picolibrary-microchip-sam-d21da1-interrupt-default_vector_table OBJECT
    "picolibrary/microchip/sam/d21da1/interrupt/default_vector_table.cc"
)
target_include_directories(
    picolibrary-microchip-sam-d21da1-interrupt-default_vector_table
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
target_link_libraries(
    picolibrary-microchip-sam-d21da1-interrupt-default_vector_table
    picolibrary-arm-cortex-m0plus
    picolibrary-microchip-sam-d21da1
)

add_library(
    picolibrary-microchip-sam-d21da1-version
    "${CMAKE_CURRENT_BINARY_DIR}/picolibrary/microchip/sam/d21da1/version.cc"
)
target_include_directories(
    picolibrary-microchip-sam-d21da1-version
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
target_link_libraries(
    picolibrary-microchip-sam-d21da1-version
    picolibrary
)
