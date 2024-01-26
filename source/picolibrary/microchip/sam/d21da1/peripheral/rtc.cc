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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC implementation.
 */

#include "picolibrary/microchip/sam/d21da1/peripheral/rtc.h"

#include "picolibrary/algorithm.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

static_assert( sizeof( RTC::MODE0 ) == 0x18 + 4 );
static_assert( sizeof( RTC::MODE1 ) == 0x1A + 2 );
static_assert( sizeof( RTC::MODE2 ) == 0x1C + 1 );
static_assert( sizeof( RTC ) == max( max( sizeof( RTC::MODE0 ), sizeof( RTC::MODE1 ) ), sizeof( RTC::MODE2 ) ) );

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral
