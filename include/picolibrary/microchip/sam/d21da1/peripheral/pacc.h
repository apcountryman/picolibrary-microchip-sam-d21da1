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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::PACC interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACC_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACC_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/microchip/sam/d21da1/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 AHB-APB Bridge C Peripheral Access Controller (PACC)
 *        peripheral.
 */
class PACC {
  public:
    /**
     * \brief Write-Protect Clear (WPCLR) register.
     *
     * This register has the following fields:
     * - Disable EVSYS0 Write Protection (EVSYS0)
     * - Disable SERCOM0 Write Protection (SERCOM0)
     * - Disable SERCOM1 Write Protection (SERCOM1)
     * - Disable SERCOM2 Write Protection (SERCOM2)
     * - Disable SERCOM3 Write Protection (SERCOM3)
     * - Disable SERCOM4 Write Protection (SERCOM4)
     * - Disable SERCOM5 Write Protection (SERCOM5)
     * - Disable TCC0 Write Protection (TCC0)
     * - Disable TCC1 Write Protection (TCC1)
     * - Disable TCC2 Write Protection (TCC2)
     * - Disable TC3 Write Protection (TC3)
     * - Disable TC4 Write Protection (TC4)
     * - Disable TC5 Write Protection (TC5)
     * - Disable TC6 Write Protection (TC6)
     * - Disable TC7 Write Protection (TC7)
     * - Disable ADC0 Write Protection (ADC0)
     * - Disable AC0 Write Protection (AC0)
     * - Disable DAC0 Write Protection (DAC0)
     * - Disable PTC0 Write Protection (PTC0)
     * - Disable I2S0 Write Protection (I2S0)
     * - Disable AC1 Write Protection (AC1)
     * - Disable TCC3 Write Protection (TCC3)
     */
    class WPCLR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto EVSYS0     = std::uint_fast8_t{ 1 }; ///< EVSYS0.
            static constexpr auto SERCOM0    = std::uint_fast8_t{ 1 }; ///< SERCOM0.
            static constexpr auto SERCOM1    = std::uint_fast8_t{ 1 }; ///< SERCOM1.
            static constexpr auto SERCOM2    = std::uint_fast8_t{ 1 }; ///< SERCOM2.
            static constexpr auto SERCOM3    = std::uint_fast8_t{ 1 }; ///< SERCOM3.
            static constexpr auto SERCOM4    = std::uint_fast8_t{ 1 }; ///< SERCOM4.
            static constexpr auto SERCOM5    = std::uint_fast8_t{ 1 }; ///< SERCOM5.
            static constexpr auto TCC0       = std::uint_fast8_t{ 1 }; ///< TCC0.
            static constexpr auto TCC1       = std::uint_fast8_t{ 1 }; ///< TCC1.
            static constexpr auto TCC2       = std::uint_fast8_t{ 1 }; ///< TCC2.
            static constexpr auto TC3        = std::uint_fast8_t{ 1 }; ///< TC3.
            static constexpr auto TC4        = std::uint_fast8_t{ 1 }; ///< TC4.
            static constexpr auto TC5        = std::uint_fast8_t{ 1 }; ///< TC5.
            static constexpr auto TC6        = std::uint_fast8_t{ 1 }; ///< TC6.
            static constexpr auto TC7        = std::uint_fast8_t{ 1 }; ///< TC7.
            static constexpr auto ADC0       = std::uint_fast8_t{ 1 }; ///< ADC0.
            static constexpr auto AC0        = std::uint_fast8_t{ 1 }; ///< AC0.
            static constexpr auto DAC0       = std::uint_fast8_t{ 1 }; ///< DAC0.
            static constexpr auto PTC0       = std::uint_fast8_t{ 1 }; ///< PTC0.
            static constexpr auto I2S0       = std::uint_fast8_t{ 1 }; ///< I2S0.
            static constexpr auto AC1        = std::uint_fast8_t{ 1 }; ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 2 }; ///< RESERVED22.
            static constexpr auto TCC3       = std::uint_fast8_t{ 1 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ 7 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto EVSYS0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< EVSYS0.
            static constexpr auto SERCOM0 = std::uint_fast8_t{ EVSYS0 + Size::EVSYS0 }; ///< SERCOM0.
            static constexpr auto SERCOM1 = std::uint_fast8_t{ SERCOM0 + Size::SERCOM0 }; ///< SERCOM1.
            static constexpr auto SERCOM2 = std::uint_fast8_t{ SERCOM1 + Size::SERCOM1 }; ///< SERCOM2.
            static constexpr auto SERCOM3 = std::uint_fast8_t{ SERCOM2 + Size::SERCOM2 }; ///< SERCOM3.
            static constexpr auto SERCOM4 = std::uint_fast8_t{ SERCOM3 + Size::SERCOM3 }; ///< SERCOM4.
            static constexpr auto SERCOM5 = std::uint_fast8_t{ SERCOM4 + Size::SERCOM4 }; ///< SERCOM5.
            static constexpr auto TCC0 = std::uint_fast8_t{ SERCOM5 + Size::SERCOM5 }; ///< TCC0.
            static constexpr auto TCC1 = std::uint_fast8_t{ TCC0 + Size::TCC0 }; ///< TCC1.
            static constexpr auto TCC2 = std::uint_fast8_t{ TCC1 + Size::TCC1 }; ///< TCC2.
            static constexpr auto TC3  = std::uint_fast8_t{ TCC2 + Size::TCC2 }; ///< TC3.
            static constexpr auto TC4  = std::uint_fast8_t{ TC3 + Size::TC3 };   ///< TC4.
            static constexpr auto TC5  = std::uint_fast8_t{ TC4 + Size::TC4 };   ///< TC5.
            static constexpr auto TC6  = std::uint_fast8_t{ TC5 + Size::TC5 };   ///< TC6.
            static constexpr auto TC7  = std::uint_fast8_t{ TC6 + Size::TC6 };   ///< TC7.
            static constexpr auto ADC0 = std::uint_fast8_t{ TC7 + Size::TC7 }; ///< ADC0.
            static constexpr auto AC0  = std::uint_fast8_t{ ADC0 + Size::ADC0 }; ///< AC0.
            static constexpr auto DAC0 = std::uint_fast8_t{ AC0 + Size::AC0 }; ///< DAC0.
            static constexpr auto PTC0 = std::uint_fast8_t{ DAC0 + Size::DAC0 }; ///< PTC0.
            static constexpr auto I2S0 = std::uint_fast8_t{ PTC0 + Size::PTC0 }; ///< I2S0.
            static constexpr auto AC1  = std::uint_fast8_t{ I2S0 + Size::I2S0 }; ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ AC1 + Size::AC1 }; ///< RESERVED22.
            static constexpr auto TCC3 = std::uint_fast8_t{ RESERVED22 + Size::RESERVED22 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ TCC3 + Size::TCC3 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto EVSYS0 = mask<std::uint32_t>( Size::EVSYS0, Bit::EVSYS0 ); ///< EVSYS0.
            static constexpr auto SERCOM0 = mask<std::uint32_t>( Size::SERCOM0, Bit::SERCOM0 ); ///< SERCOM0.
            static constexpr auto SERCOM1 = mask<std::uint32_t>( Size::SERCOM1, Bit::SERCOM1 ); ///< SERCOM1.
            static constexpr auto SERCOM2 = mask<std::uint32_t>( Size::SERCOM2, Bit::SERCOM2 ); ///< SERCOM2.
            static constexpr auto SERCOM3 = mask<std::uint32_t>( Size::SERCOM3, Bit::SERCOM3 ); ///< SERCOM3.
            static constexpr auto SERCOM4 = mask<std::uint32_t>( Size::SERCOM4, Bit::SERCOM4 ); ///< SERCOM4.
            static constexpr auto SERCOM5 = mask<std::uint32_t>( Size::SERCOM5, Bit::SERCOM5 ); ///< SERCOM5.
            static constexpr auto TCC0 = mask<std::uint32_t>( Size::TCC0, Bit::TCC0 ); ///< TCC0.
            static constexpr auto TCC1 = mask<std::uint32_t>( Size::TCC1, Bit::TCC1 ); ///< TCC1.
            static constexpr auto TCC2 = mask<std::uint32_t>( Size::TCC2, Bit::TCC2 ); ///< TCC2.
            static constexpr auto TC3 = mask<std::uint32_t>( Size::TC3, Bit::TC3 ); ///< TC3.
            static constexpr auto TC4 = mask<std::uint32_t>( Size::TC4, Bit::TC4 ); ///< TC4.
            static constexpr auto TC5 = mask<std::uint32_t>( Size::TC5, Bit::TC5 ); ///< TC5.
            static constexpr auto TC6 = mask<std::uint32_t>( Size::TC6, Bit::TC6 ); ///< TC6.
            static constexpr auto TC7 = mask<std::uint32_t>( Size::TC7, Bit::TC7 ); ///< TC7.
            static constexpr auto ADC0 = mask<std::uint32_t>( Size::ADC0, Bit::ADC0 ); ///< ADC0.
            static constexpr auto AC0 = mask<std::uint32_t>( Size::AC0, Bit::AC0 ); ///< AC0.
            static constexpr auto DAC0 = mask<std::uint32_t>( Size::DAC0, Bit::DAC0 ); ///< DAC0.
            static constexpr auto PTC0 = mask<std::uint32_t>( Size::PTC0, Bit::PTC0 ); ///< PTC0.
            static constexpr auto I2S0 = mask<std::uint32_t>( Size::I2S0, Bit::I2S0 ); ///< I2S0.
            static constexpr auto AC1 = mask<std::uint32_t>( Size::AC1, Bit::AC1 ); ///< AC1.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
            static constexpr auto TCC3 = mask<std::uint32_t>( Size::TCC3, Bit::TCC3 ); ///< TCC3.
            static constexpr auto RESERVED25 = mask<std::uint32_t>( Size::RESERVED25, Bit::RESERVED25 ); ///< RESERVED25.
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
     * - Enable EVSYS0 Write Protection (EVSYS0)
     * - Enable SERCOM0 Write Protection (SERCOM0)
     * - Enable SERCOM1 Write Protection (SERCOM1)
     * - Enable SERCOM2 Write Protection (SERCOM2)
     * - Enable SERCOM3 Write Protection (SERCOM3)
     * - Enable SERCOM4 Write Protection (SERCOM4)
     * - Enable SERCOM5 Write Protection (SERCOM5)
     * - Enable TCC0 Write Protection (TCC0)
     * - Enable TCC1 Write Protection (TCC1)
     * - Enable TCC2 Write Protection (TCC2)
     * - Enable TC3 Write Protection (TC3)
     * - Enable TC4 Write Protection (TC4)
     * - Enable TC5 Write Protection (TC5)
     * - Enable TC6 Write Protection (TC6)
     * - Enable TC7 Write Protection (TC7)
     * - Enable ADC0 Write Protection (ADC0)
     * - Enable AC0 Write Protection (AC0)
     * - Enable DAC0 Write Protection (DAC0)
     * - Enable PTC0 Write Protection (PTC0)
     * - Enable I2S0 Write Protection (I2S0)
     * - Enable AC1 Write Protection (AC1)
     * - Enable TCC3 Write Protection (TCC3)
     */
    class WPSET : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto EVSYS0     = std::uint_fast8_t{ 1 }; ///< EVSYS0.
            static constexpr auto SERCOM0    = std::uint_fast8_t{ 1 }; ///< SERCOM0.
            static constexpr auto SERCOM1    = std::uint_fast8_t{ 1 }; ///< SERCOM1.
            static constexpr auto SERCOM2    = std::uint_fast8_t{ 1 }; ///< SERCOM2.
            static constexpr auto SERCOM3    = std::uint_fast8_t{ 1 }; ///< SERCOM3.
            static constexpr auto SERCOM4    = std::uint_fast8_t{ 1 }; ///< SERCOM4.
            static constexpr auto SERCOM5    = std::uint_fast8_t{ 1 }; ///< SERCOM5.
            static constexpr auto TCC0       = std::uint_fast8_t{ 1 }; ///< TCC0.
            static constexpr auto TCC1       = std::uint_fast8_t{ 1 }; ///< TCC1.
            static constexpr auto TCC2       = std::uint_fast8_t{ 1 }; ///< TCC2.
            static constexpr auto TC3        = std::uint_fast8_t{ 1 }; ///< TC3.
            static constexpr auto TC4        = std::uint_fast8_t{ 1 }; ///< TC4.
            static constexpr auto TC5        = std::uint_fast8_t{ 1 }; ///< TC5.
            static constexpr auto TC6        = std::uint_fast8_t{ 1 }; ///< TC6.
            static constexpr auto TC7        = std::uint_fast8_t{ 1 }; ///< TC7.
            static constexpr auto ADC0       = std::uint_fast8_t{ 1 }; ///< ADC0.
            static constexpr auto AC0        = std::uint_fast8_t{ 1 }; ///< AC0.
            static constexpr auto DAC0       = std::uint_fast8_t{ 1 }; ///< DAC0.
            static constexpr auto PTC0       = std::uint_fast8_t{ 1 }; ///< PTC0.
            static constexpr auto I2S0       = std::uint_fast8_t{ 1 }; ///< I2S0.
            static constexpr auto AC1        = std::uint_fast8_t{ 1 }; ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 2 }; ///< RESERVED22.
            static constexpr auto TCC3       = std::uint_fast8_t{ 1 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ 7 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto EVSYS0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< EVSYS0.
            static constexpr auto SERCOM0 = std::uint_fast8_t{ EVSYS0 + Size::EVSYS0 }; ///< SERCOM0.
            static constexpr auto SERCOM1 = std::uint_fast8_t{ SERCOM0 + Size::SERCOM0 }; ///< SERCOM1.
            static constexpr auto SERCOM2 = std::uint_fast8_t{ SERCOM1 + Size::SERCOM1 }; ///< SERCOM2.
            static constexpr auto SERCOM3 = std::uint_fast8_t{ SERCOM2 + Size::SERCOM2 }; ///< SERCOM3.
            static constexpr auto SERCOM4 = std::uint_fast8_t{ SERCOM3 + Size::SERCOM3 }; ///< SERCOM4.
            static constexpr auto SERCOM5 = std::uint_fast8_t{ SERCOM4 + Size::SERCOM4 }; ///< SERCOM5.
            static constexpr auto TCC0 = std::uint_fast8_t{ SERCOM5 + Size::SERCOM5 }; ///< TCC0.
            static constexpr auto TCC1 = std::uint_fast8_t{ TCC0 + Size::TCC0 }; ///< TCC1.
            static constexpr auto TCC2 = std::uint_fast8_t{ TCC1 + Size::TCC1 }; ///< TCC2.
            static constexpr auto TC3  = std::uint_fast8_t{ TCC2 + Size::TCC2 }; ///< TC3.
            static constexpr auto TC4  = std::uint_fast8_t{ TC3 + Size::TC3 };   ///< TC4.
            static constexpr auto TC5  = std::uint_fast8_t{ TC4 + Size::TC4 };   ///< TC5.
            static constexpr auto TC6  = std::uint_fast8_t{ TC5 + Size::TC5 };   ///< TC6.
            static constexpr auto TC7  = std::uint_fast8_t{ TC6 + Size::TC6 };   ///< TC7.
            static constexpr auto ADC0 = std::uint_fast8_t{ TC7 + Size::TC7 }; ///< ADC0.
            static constexpr auto AC0  = std::uint_fast8_t{ ADC0 + Size::ADC0 }; ///< AC0.
            static constexpr auto DAC0 = std::uint_fast8_t{ AC0 + Size::AC0 }; ///< DAC0.
            static constexpr auto PTC0 = std::uint_fast8_t{ DAC0 + Size::DAC0 }; ///< PTC0.
            static constexpr auto I2S0 = std::uint_fast8_t{ PTC0 + Size::PTC0 }; ///< I2S0.
            static constexpr auto AC1  = std::uint_fast8_t{ I2S0 + Size::I2S0 }; ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ AC1 + Size::AC1 }; ///< RESERVED22.
            static constexpr auto TCC3 = std::uint_fast8_t{ RESERVED22 + Size::RESERVED22 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ TCC3 + Size::TCC3 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto EVSYS0 = mask<std::uint32_t>( Size::EVSYS0, Bit::EVSYS0 ); ///< EVSYS0.
            static constexpr auto SERCOM0 = mask<std::uint32_t>( Size::SERCOM0, Bit::SERCOM0 ); ///< SERCOM0.
            static constexpr auto SERCOM1 = mask<std::uint32_t>( Size::SERCOM1, Bit::SERCOM1 ); ///< SERCOM1.
            static constexpr auto SERCOM2 = mask<std::uint32_t>( Size::SERCOM2, Bit::SERCOM2 ); ///< SERCOM2.
            static constexpr auto SERCOM3 = mask<std::uint32_t>( Size::SERCOM3, Bit::SERCOM3 ); ///< SERCOM3.
            static constexpr auto SERCOM4 = mask<std::uint32_t>( Size::SERCOM4, Bit::SERCOM4 ); ///< SERCOM4.
            static constexpr auto SERCOM5 = mask<std::uint32_t>( Size::SERCOM5, Bit::SERCOM5 ); ///< SERCOM5.
            static constexpr auto TCC0 = mask<std::uint32_t>( Size::TCC0, Bit::TCC0 ); ///< TCC0.
            static constexpr auto TCC1 = mask<std::uint32_t>( Size::TCC1, Bit::TCC1 ); ///< TCC1.
            static constexpr auto TCC2 = mask<std::uint32_t>( Size::TCC2, Bit::TCC2 ); ///< TCC2.
            static constexpr auto TC3 = mask<std::uint32_t>( Size::TC3, Bit::TC3 ); ///< TC3.
            static constexpr auto TC4 = mask<std::uint32_t>( Size::TC4, Bit::TC4 ); ///< TC4.
            static constexpr auto TC5 = mask<std::uint32_t>( Size::TC5, Bit::TC5 ); ///< TC5.
            static constexpr auto TC6 = mask<std::uint32_t>( Size::TC6, Bit::TC6 ); ///< TC6.
            static constexpr auto TC7 = mask<std::uint32_t>( Size::TC7, Bit::TC7 ); ///< TC7.
            static constexpr auto ADC0 = mask<std::uint32_t>( Size::ADC0, Bit::ADC0 ); ///< ADC0.
            static constexpr auto AC0 = mask<std::uint32_t>( Size::AC0, Bit::AC0 ); ///< AC0.
            static constexpr auto DAC0 = mask<std::uint32_t>( Size::DAC0, Bit::DAC0 ); ///< DAC0.
            static constexpr auto PTC0 = mask<std::uint32_t>( Size::PTC0, Bit::PTC0 ); ///< PTC0.
            static constexpr auto I2S0 = mask<std::uint32_t>( Size::I2S0, Bit::I2S0 ); ///< I2S0.
            static constexpr auto AC1 = mask<std::uint32_t>( Size::AC1, Bit::AC1 ); ///< AC1.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
            static constexpr auto TCC3 = mask<std::uint32_t>( Size::TCC3, Bit::TCC3 ); ///< TCC3.
            static constexpr auto RESERVED25 = mask<std::uint32_t>( Size::RESERVED25, Bit::RESERVED25 ); ///< RESERVED25.
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

    PACC() = delete;

    PACC( PACC && ) = delete;

    PACC( PACC const & ) = delete;

    ~PACC() = delete;

    auto operator=( PACC && ) = delete;

    auto operator=( PACC const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACC_H
