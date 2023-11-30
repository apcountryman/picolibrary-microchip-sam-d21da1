/**
 * picolibrary-microchip-sam-d21da1
 *
 * Copyright 2023, Andrew Countryman <apcountryman@gmail.com> and the
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

#include "picolibrary/microchip/sam/d21da1/peripheral/instance.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/paca.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/pacb.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/pacc.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/systick.h"

/**
 * \brief Microchip SAM D21/DA1 peripheral facilities.
 */
namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief PACA0.
 */
using PACA0 = Instance<PACA, 0x40000000>;

/**
 * \brief PACB0.
 */
using PACB0 = Instance<PACB, 0x41000000>;

/**
 * \brief PACC0.
 */
using PACC0 = Instance<PACC, 0x42000000>;

/**
 * \brief SYSTICK0.
 */
using SYSTICK0 = Instance<SYSTICK, 0xE000E010>;

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_H
