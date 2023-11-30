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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::PACA interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACA_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACA_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/microchip/sam/d21da1/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 AHB-APB Bridge A Peripheral Access Controller (PACA)
 *        peripheral.
 */
class PACA {
  public:
    /**
     * \brief Write-Protect Clear (WPCLR) register.
     *
     * This register has the following fields:
     * - Disable PM0 Write Protection (PM0)
     * - Disable SYSCTRL0 Write Protection (SYSCTRL0)
     * - Disable GCLK0 Write Protection (GCLK0)
     * - Disable WDT0 Write Protection (WDT0)
     * - Disable RTC0 Write Protection (RTC0)
     * - Disable EIC0 Write Protection (EIC0)
     */
    class WPCLR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto PM0       = std::uint_fast8_t{ 1 };  ///< PM0.
            static constexpr auto SYSCTRL0  = std::uint_fast8_t{ 1 };  ///< SYSCTRL0.
            static constexpr auto GCLK0     = std::uint_fast8_t{ 1 };  ///< GCLK0.
            static constexpr auto WDT0      = std::uint_fast8_t{ 1 };  ///< WDT0.
            static constexpr auto RTC0      = std::uint_fast8_t{ 1 };  ///< RTC0.
            static constexpr auto EIC0      = std::uint_fast8_t{ 1 };  ///< EIC0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto PM0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< PM0.
            static constexpr auto SYSCTRL0 = std::uint_fast8_t{ PM0 + Size::PM0 }; ///< SYSCTRL0.
            static constexpr auto GCLK0 = std::uint_fast8_t{ SYSCTRL0 + Size::SYSCTRL0 }; ///< GCLK0.
            static constexpr auto WDT0 = std::uint_fast8_t{ GCLK0 + Size::GCLK0 }; ///< WDT0.
            static constexpr auto RTC0 = std::uint_fast8_t{ WDT0 + Size::WDT0 }; ///< RTC0.
            static constexpr auto EIC0 = std::uint_fast8_t{ RTC0 + Size::RTC0 }; ///< EIC0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ EIC0 + Size::EIC0 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto PM0 = mask<std::uint32_t>( Size::PM0, Bit::PM0 ); ///< PM0.
            static constexpr auto SYSCTRL0 = mask<std::uint32_t>( Size::SYSCTRL0, Bit::SYSCTRL0 ); ///< SYSCTRL0.
            static constexpr auto GCLK0 = mask<std::uint32_t>( Size::GCLK0, Bit::GCLK0 ); ///< GCLK0.
            static constexpr auto WDT0 = mask<std::uint32_t>( Size::WDT0, Bit::WDT0 ); ///< WDT0.
            static constexpr auto RTC0 = mask<std::uint32_t>( Size::RTC0, Bit::RTC0 ); ///< RTC0.
            static constexpr auto EIC0 = mask<std::uint32_t>( Size::EIC0, Bit::EIC0 ); ///< EIC0.
            static constexpr auto RESERVED7 = mask<std::uint32_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
        };

        WPCLR() = delete;

        WPCLR( WPCLR && ) = delete;

        WPCLR( WPCLR const & ) = delete;

        ~WPCLR() = delete;

        auto operator=( WPCLR && ) = delete;

        auto operator=( WPCLR const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Write-Protect Set (WPSET) register.
     *
     * This register has the following fields:
     * - Enable PM0 Write Protection (PM0)
     * - Enable SYSCTRL0 Write Protection (SYSCTRL0)
     * - Enable GCLK0 Write Protection (GCLK0)
     * - Enable WDT0 Write Protection (WDT0)
     * - Enable RTC0 Write Protection (RTC0)
     * - Enable EIC0 Write Protection (EIC0)
     */
    class WPSET : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto PM0       = std::uint_fast8_t{ 1 };  ///< PM0.
            static constexpr auto SYSCTRL0  = std::uint_fast8_t{ 1 };  ///< SYSCTRL0.
            static constexpr auto GCLK0     = std::uint_fast8_t{ 1 };  ///< GCLK0.
            static constexpr auto WDT0      = std::uint_fast8_t{ 1 };  ///< WDT0.
            static constexpr auto RTC0      = std::uint_fast8_t{ 1 };  ///< RTC0.
            static constexpr auto EIC0      = std::uint_fast8_t{ 1 };  ///< EIC0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto PM0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< PM0.
            static constexpr auto SYSCTRL0 = std::uint_fast8_t{ PM0 + Size::PM0 }; ///< SYSCTRL0.
            static constexpr auto GCLK0 = std::uint_fast8_t{ SYSCTRL0 + Size::SYSCTRL0 }; ///< GCLK0.
            static constexpr auto WDT0 = std::uint_fast8_t{ GCLK0 + Size::GCLK0 }; ///< WDT0.
            static constexpr auto RTC0 = std::uint_fast8_t{ WDT0 + Size::WDT0 }; ///< RTC0.
            static constexpr auto EIC0 = std::uint_fast8_t{ RTC0 + Size::RTC0 }; ///< EIC0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ EIC0 + Size::EIC0 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto PM0 = mask<std::uint32_t>( Size::PM0, Bit::PM0 ); ///< PM0.
            static constexpr auto SYSCTRL0 = mask<std::uint32_t>( Size::SYSCTRL0, Bit::SYSCTRL0 ); ///< SYSCTRL0.
            static constexpr auto GCLK0 = mask<std::uint32_t>( Size::GCLK0, Bit::GCLK0 ); ///< GCLK0.
            static constexpr auto WDT0 = mask<std::uint32_t>( Size::WDT0, Bit::WDT0 ); ///< WDT0.
            static constexpr auto RTC0 = mask<std::uint32_t>( Size::RTC0, Bit::RTC0 ); ///< RTC0.
            static constexpr auto EIC0 = mask<std::uint32_t>( Size::EIC0, Bit::EIC0 ); ///< EIC0.
            static constexpr auto RESERVED7 = mask<std::uint32_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
        };

        WPSET() = delete;

        WPSET( WPSET && ) = delete;

        WPSET( WPSET const & ) = delete;

        ~WPSET() = delete;

        auto operator=( WPSET && ) = delete;

        auto operator=( WPSET const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief WPCLR.
     */
    WPCLR wpclr;

    /**
     * \brief WPSET.
     */
    WPSET wpset;

    PACA() = delete;

    PACA( PACA && ) = delete;

    PACA( PACA const & ) = delete;

    ~PACA() = delete;

    auto operator=( PACA && ) = delete;

    auto operator=( PACA const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACA_H
