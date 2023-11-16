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
 * \brief picolibrary::Microchip::SAM::D21DA1::version() interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_VERSION_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_VERSION_H

#include "picolibrary/rom.h"

namespace picolibrary::Microchip::SAM::D21DA1 {

/**
 * \brief Get the library version.
 *
 * \attention The picolibrary-microchip-sam-d21da1 static library does not include the
 *            implementation for this function. To use this function, link with the
 *            picolibrary-microchip-sam-d21da1-version static library.
 *
 * \return The library version.
 */
auto version() noexcept -> ROM::String;

} // namespace picolibrary::Microchip::SAM::D21DA1

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_VERSION_H
