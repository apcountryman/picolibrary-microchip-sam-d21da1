/**
 * picolibrary-microchip-sam-d21da1
 *
 * Copyright 2023-2024, Andrew Countryman <apcountryman@gmail.com> and the
 * picolibrary-microchip-sam-d21da1 contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under
 * the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * \file
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_H

#include "picolibrary/microchip/sam/d21da1/peripheral/gclk.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/pac.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/sysctrl.h"
#include "picolibrary/peripheral.h"

/**
 * \brief Microchip SAM D21/DA1 peripheral facilities.
 */
namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief PAC0.
 */
using PAC0 = ::picolibrary::Peripheral::Instance<PAC, 0x40000000>;

/**
 * \brief SYSCTRL0.
 */
using SYSCTRL0 = ::picolibrary::Peripheral::Instance<SYSCTRL, 0x40000800>;

/**
 * \brief GCLK0.
 */
using GCLK0 = ::picolibrary::Peripheral::Instance<GCLK, 0x40000C00>;

/**
 * \brief PAC1.
 */
using PAC1 = ::picolibrary::Peripheral::Instance<PAC, 0x41000000>;

/**
 * \brief NVMCTRL0.
 */
using NVMCTRL0 = ::picolibrary::Peripheral::Instance<NVMCTRL, 0x41004000>;

/**
 * \brief PAC2.
 */
using PAC2 = ::picolibrary::Peripheral::Instance<PAC, 0x42000000>;

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_H
