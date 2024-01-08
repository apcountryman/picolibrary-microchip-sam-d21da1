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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PAC_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PAC_H

#include <cstdint>

#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Peripheral Access Controller (PAC) peripheral.
 */
class PAC {
  public:
    /**
     * \brief Write Protect Clear (WPCLR) register.
     */
    Register<std::uint32_t> wpclr;

    /**
     * \brief Write Protect Set (WPSET) register.
     */
    Register<std::uint32_t> wpset;

    PAC() = delete;

    PAC( PAC && ) = delete;

    PAC( PAC const & ) = delete;

    ~PAC() = delete;

    auto operator=( PAC && ) = delete;

    auto operator=( PAC const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PAC_H
