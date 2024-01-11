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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::GCLK interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_GCLK_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_GCLK_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Generic Clock Controller (GCLK) peripheral.
 */
class GCLK {
  public:
    /**
     * \brief Control (CTRL) register.
     *
     * This register has the following fields:
     * - Software Reset (SWRST)
     */
    class CTRL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto SWRST     = std::uint_fast8_t{ 1 }; ///< SWRST.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto SWRST = std::uint_fast8_t{}; ///< SWRST.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ SWRST + Size::SWRST }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto SWRST = mask<std::uint8_t>( Size::SWRST, Bit::SWRST ); ///< SWRST.
            static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
        };

        CTRL() = delete;

        CTRL( CTRL && ) = delete;

        CTRL( CTRL const & ) = delete;

        ~CTRL() = delete;

        auto operator=( CTRL && ) = delete;

        auto operator=( CTRL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Status (STATUS) register.
     *
     * This register has the following fields:
     * - Synchronization Busy Status (SYNCBUSY)
     */
    class STATUS : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 7 }; ///< RESERVED0.
            static constexpr auto SYNCBUSY  = std::uint_fast8_t{ 1 }; ///< SYNCBUSY.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto SYNCBUSY = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< SYNCBUSY.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint8_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto SYNCBUSY = mask<std::uint8_t>( Size::SYNCBUSY, Bit::SYNCBUSY ); ///< SYNCBUSY.
        };

        STATUS() = delete;

        STATUS( STATUS && ) = delete;

        STATUS( STATUS const & ) = delete;

        ~STATUS() = delete;

        auto operator=( STATUS && ) = delete;

        auto operator=( STATUS const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Generic Clock Control (CLKCTRL) register.
     *
     * This register has the following fields:
     * - Generic Clock Selection ID (ID)
     * - Generic Clock Generator (GEN)
     * - Clock Enable (CLKEN)
     * - Write Lock (WRTLOCK)
     */
    class CLKCTRL : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto ID         = std::uint_fast8_t{ 6 }; ///< ID.
            static constexpr auto RESERVED6  = std::uint_fast8_t{ 2 }; ///< RESERVED6.
            static constexpr auto GEN        = std::uint_fast8_t{ 4 }; ///< GEN.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 2 }; ///< RESERVED12.
            static constexpr auto CLKEN      = std::uint_fast8_t{ 1 }; ///< CLKEN.
            static constexpr auto WRTLOCK    = std::uint_fast8_t{ 1 }; ///< WRTLOCK.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto ID        = std::uint_fast8_t{};                ///< ID.
            static constexpr auto RESERVED6 = std::uint_fast8_t{ ID + Size::ID }; ///< RESERVED6.
            static constexpr auto GEN = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< GEN.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ GEN + Size::GEN }; ///< RESERVED12.
            static constexpr auto CLKEN = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< CLKEN.
            static constexpr auto WRTLOCK = std::uint_fast8_t{ CLKEN + Size::CLKEN }; ///< WRTLOCK.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto ID = mask<std::uint16_t>( Size::ID, Bit::ID ); ///< ID.
            static constexpr auto RESERVED6 = mask<std::uint16_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
            static constexpr auto GEN = mask<std::uint16_t>( Size::GEN, Bit::GEN ); ///< GEN.
            static constexpr auto RESERVED12 = mask<std::uint16_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto CLKEN = mask<std::uint16_t>( Size::CLKEN, Bit::CLKEN ); ///< CLKEN.
            static constexpr auto WRTLOCK = mask<std::uint16_t>( Size::WRTLOCK, Bit::WRTLOCK ); ///< WRTLOCK.
        };

        /**
         * \brief ID.
         */
        enum ID : std::uint16_t {
            ID_GCLK_DFLL48M_REF = 0x00 << Bit::ID, ///< DFLL48M reference.
            ID_GCLK_DPLL = 0x01 << Bit::ID, ///< FDPLL96M input clock source for reference.
            ID_GCLK_DPLL_32K         = 0x02 << Bit::ID, ///< FDPLL96M 32 kHz clock for FDPLL96M internal lock timer.
            ID_GCLK_WDT              = 0x03 << Bit::ID, ///< WDT.
            ID_GCLK_RTC              = 0x04 << Bit::ID, ///< RTC.
            ID_GCLK_EIC              = 0x05 << Bit::ID, ///< EIC.
            ID_GCLK_USB              = 0x06 << Bit::ID, ///< USB.
            ID_GCLK_EVSYS_CHANNEL_0  = 0x07 << Bit::ID, ///< EVSYS_CHANNEL_0.
            ID_GCLK_EVSYS_CHANNEL_1  = 0x08 << Bit::ID, ///< EVSYS_CHANNEL_1.
            ID_GCLK_EVSYS_CHANNEL_2  = 0x09 << Bit::ID, ///< EVSYS_CHANNEL_2.
            ID_GCLK_EVSYS_CHANNEL_3  = 0x0A << Bit::ID, ///< EVSYS_CHANNEL_3.
            ID_GCLK_EVSYS_CHANNEL_4  = 0x0B << Bit::ID, ///< EVSYS_CHANNEL_4.
            ID_GCLK_EVSYS_CHANNEL_5  = 0x0C << Bit::ID, ///< EVSYS_CHANNEL_5.
            ID_GCLK_EVSYS_CHANNEL_6  = 0x0D << Bit::ID, ///< EVSYS_CHANNEL_6.
            ID_GCLK_EVSYS_CHANNEL_7  = 0x0E << Bit::ID, ///< EVSYS_CHANNEL_7.
            ID_GCLK_EVSYS_CHANNEL_8  = 0x0F << Bit::ID, ///< EVSYS_CHANNEL_8.
            ID_GCLK_EVSYS_CHANNEL_9  = 0x10 << Bit::ID, ///< EVSYS_CHANNEL_9.
            ID_GCLK_EVSYS_CHANNEL_10 = 0x11 << Bit::ID, ///< EVSYS_CHANNEL_10.
            ID_GCLK_EVSYS_CHANNEL_11 = 0x12 << Bit::ID, ///< EVSYS_CHANNEL_11.
            ID_GCLK_SERCOMX_SLOW     = 0x13 << Bit::ID, ///< SERCOMx_SLOW
            ID_GCLK_SERCOM0_CORE     = 0x14 << Bit::ID, ///< SERCOM0_CORE.
            ID_GCLK_SERCOM1_CORE     = 0x15 << Bit::ID, ///< SERCOM1_CORE.
            ID_GCLK_SERCOM2_CORE     = 0x16 << Bit::ID, ///< SERCOM2_CORE.
            ID_GCLK_SERCOM3_CORE     = 0x17 << Bit::ID, ///< SERCOM3_CORE.
            ID_GCLK_SERCOM4_CORE     = 0x18 << Bit::ID, ///< SERCOM4_CORE.
            ID_GCLK_SERCOM5_CORE     = 0x19 << Bit::ID, ///< SERCOM5_CORE.
            ID_GCLK_TCC0_TCC1        = 0x1A << Bit::ID, ///< TCC0, TCC1.
            ID_GCLK_TCC2_TC3         = 0x1B << Bit::ID, ///< TCC2, TC3.
            ID_GCLK_TC4_TC5          = 0x1C << Bit::ID, ///< TC4, TC5.
            ID_GCLK_TC6_TC7          = 0x1D << Bit::ID, ///< TC6, TC7.
            ID_GCLK_ADC              = 0x1E << Bit::ID, ///< ADC.
            ID_GCLK_AC_DIG           = 0x1F << Bit::ID, ///< AC_DIG.
            ID_GCLK_AC_ANA           = 0x20 << Bit::ID, ///< AC_ANA.
            ID_GCLK_DAC              = 0x21 << Bit::ID, ///< DAC.
            ID_GCLK_PTC              = 0x22 << Bit::ID, ///< PTC.
            ID_GCLK_I2S_0            = 0x23 << Bit::ID, ///< I2S_0.
            ID_GCLK_I2S_1            = 0x24 << Bit::ID, ///< I2S_1.
            ID_GCLK_TCC3             = 0x25 << Bit::ID, ///< TCC3.
        };

        /**
         * \brief GEN.
         */
        enum GEN : std::uint16_t {
            GEN_GCLKGEN0 = 0x0 << Bit::GEN, ///< Generic clock generator 0.
            GEN_GCLKGEN1 = 0x1 << Bit::GEN, ///< Generic clock generator 1.
            GEN_GCLKGEN2 = 0x2 << Bit::GEN, ///< Generic clock generator 2.
            GEN_GCLKGEN3 = 0x3 << Bit::GEN, ///< Generic clock generator 3.
            GEN_GCLKGEN4 = 0x4 << Bit::GEN, ///< Generic clock generator 4.
            GEN_GCLKGEN5 = 0x5 << Bit::GEN, ///< Generic clock generator 5.
            GEN_GCLKGEN6 = 0x6 << Bit::GEN, ///< Generic clock generator 6.
            GEN_GCLKGEN7 = 0x7 << Bit::GEN, ///< Generic clock generator 7.
            GEN_GCLKGEN8 = 0x8 << Bit::GEN, ///< Generic clock generator 8.
        };

        CLKCTRL() = delete;

        CLKCTRL( CLKCTRL && ) = delete;

        CLKCTRL( CLKCTRL const & ) = delete;

        ~CLKCTRL() = delete;

        auto operator=( CLKCTRL && ) = delete;

        auto operator=( CLKCTRL const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief Generic Clock Generator Control (GENCTRL) register.
     *
     * This register has the following fields:
     * - Generic Clock Generator Selection (ID)
     * - Source Select (SRC)
     * - Generic Clock Generator Enable (GENEN)
     * - Improve Duty Cycle (IDC)
     * - Output Off Value (OOV)
     * - Output Enable (OE)
     * - Divide Selection (DIVSEL)
     * - Run in Standby (RUNSTDBY)
     */
    class GENCTRL : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto ID         = std::uint_fast8_t{ 4 };  ///< ID.
            static constexpr auto RESERVED4  = std::uint_fast8_t{ 4 };  ///< RESERVED4.
            static constexpr auto SRC        = std::uint_fast8_t{ 5 };  ///< SRC.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ 3 };  ///< RESERVED13.
            static constexpr auto GENEN      = std::uint_fast8_t{ 1 };  ///< GENEN.
            static constexpr auto IDC        = std::uint_fast8_t{ 1 };  ///< IDC.
            static constexpr auto OOV        = std::uint_fast8_t{ 1 };  ///< OOV.
            static constexpr auto OE         = std::uint_fast8_t{ 1 };  ///< OE.
            static constexpr auto DIVSEL     = std::uint_fast8_t{ 1 };  ///< DIVSEL.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 };  ///< RUNSTDBY.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 10 }; ///< RESERVED22.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto ID        = std::uint_fast8_t{};                ///< ID.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ ID + Size::ID }; ///< RESERVED4.
            static constexpr auto SRC = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< SRC.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ SRC + Size::SRC }; ///< RESERVED13.
            static constexpr auto GENEN = std::uint_fast8_t{ RESERVED13 + Size::RESERVED13 }; ///< GENEN.
            static constexpr auto IDC = std::uint_fast8_t{ GENEN + Size::GENEN }; ///< IDC.
            static constexpr auto OOV    = std::uint_fast8_t{ IDC + Size::IDC }; ///< OOV.
            static constexpr auto OE     = std::uint_fast8_t{ OOV + Size::OOV }; ///< OE.
            static constexpr auto DIVSEL = std::uint_fast8_t{ OE + Size::OE }; ///< DIVSEL.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ DIVSEL + Size::DIVSEL }; ///< RUNSTDBY.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< RESERVED22.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto ID = mask<std::uint32_t>( Size::ID, Bit::ID ); ///< ID.
            static constexpr auto RESERVED4 = mask<std::uint32_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
            static constexpr auto SRC = mask<std::uint32_t>( Size::SRC, Bit::SRC ); ///< SRC.
            static constexpr auto RESERVED13 = mask<std::uint32_t>( Size::RESERVED13, Bit::RESERVED13 ); ///< RESERVED13.
            static constexpr auto GENEN = mask<std::uint32_t>( Size::GENEN, Bit::GENEN ); ///< GENEN.
            static constexpr auto IDC = mask<std::uint32_t>( Size::IDC, Bit::IDC ); ///< IDC.
            static constexpr auto OOV = mask<std::uint32_t>( Size::OOV, Bit::OOV ); ///< OOV.
            static constexpr auto OE = mask<std::uint32_t>( Size::OE, Bit::OE ); ///< OE.
            static constexpr auto DIVSEL = mask<std::uint32_t>( Size::DIVSEL, Bit::DIVSEL ); ///< DIVSEL.
            static constexpr auto RUNSTDBY = mask<std::uint32_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
        };

        /**
         * \brief ID.
         */
        enum ID : std::uint32_t {
            ID_GCLKGEN0 = 0x0 << Bit::ID, ///< Generic clock generator 0.
            ID_GCLKGEN1 = 0x1 << Bit::ID, ///< Generic clock generator 1.
            ID_GCLKGEN2 = 0x2 << Bit::ID, ///< Generic clock generator 2.
            ID_GCLKGEN3 = 0x3 << Bit::ID, ///< Generic clock generator 3.
            ID_GCLKGEN4 = 0x4 << Bit::ID, ///< Generic clock generator 4.
            ID_GCLKGEN5 = 0x5 << Bit::ID, ///< Generic clock generator 5.
            ID_GCLKGEN6 = 0x6 << Bit::ID, ///< Generic clock generator 6.
            ID_GCLKGEN7 = 0x7 << Bit::ID, ///< Generic clock generator 7.
            ID_GCLKGEN8 = 0x8 << Bit::ID, ///< Generic clock generator 8.
        };

        /**
         * \brief SRC.
         */
        enum SRC : std::uint32_t {
            SRC_XOSC      = 0x00 << Bit::SRC, ///< XOSC oscillator output.
            SRC_GCLKIN    = 0x01 << Bit::SRC, ///< Generator input pad.
            SRC_GCLKGEN1  = 0x02 << Bit::SRC, ///< Generic clock generator 1 output.
            SRC_OSCULP32K = 0x03 << Bit::SRC, ///< OSCULP32K oscillator output.
            SRC_OSC32K    = 0x04 << Bit::SRC, ///< OSC32K oscillator output.
            SRC_XOSC32K   = 0x05 << Bit::SRC, ///< XOSC32K oscillator output.
            SRC_OSC8M     = 0x06 << Bit::SRC, ///< OSC8M oscillator output.
            SRC_DFLL48M   = 0x07 << Bit::SRC, ///< DFLL48M output.
            SRC_FDPLL96M  = 0x08 << Bit::SRC, ///< FDPLL96M output.
        };

        GENCTRL() = delete;

        GENCTRL( GENCTRL && ) = delete;

        GENCTRL( GENCTRL const & ) = delete;

        ~GENCTRL() = delete;

        auto operator=( GENCTRL && ) = delete;

        auto operator=( GENCTRL const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Generic Clock Generator Division (GENDIV) register.
     *
     * This register has the following fields:
     * - Generic Clock Generator Selection (ID)
     * - Division Factor (DIV)
     */
    class GENDIV : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto ID         = std::uint_fast8_t{ 4 };  ///< ID.
            static constexpr auto RESERVED4  = std::uint_fast8_t{ 4 };  ///< RESERVED4.
            static constexpr auto DIV        = std::uint_fast8_t{ 16 }; ///< DIV.
            static constexpr auto RESERVED24 = std::uint_fast8_t{ 8 };  ///< RESERVED24.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto ID        = std::uint_fast8_t{};                ///< ID.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ ID + Size::ID }; ///< RESERVED4.
            static constexpr auto DIV = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< DIV.
            static constexpr auto RESERVED24 = std::uint_fast8_t{ DIV + Size::DIV }; ///< RESERVED24.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto ID = mask<std::uint32_t>( Size::ID, Bit::ID ); ///< ID.
            static constexpr auto RESERVED4 = mask<std::uint32_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
            static constexpr auto DIV = mask<std::uint32_t>( Size::DIV, Bit::DIV ); ///< DIV.
            static constexpr auto RESERVED24 = mask<std::uint32_t>( Size::RESERVED24, Bit::RESERVED24 ); ///< RESERVED24.
        };

        /**
         * \brief ID.
         */
        enum ID : std::uint32_t {
            ID_GCLKGEN0 = 0x0 << Bit::ID, ///< Generic clock generator 0.
            ID_GCLKGEN1 = 0x1 << Bit::ID, ///< Generic clock generator 1.
            ID_GCLKGEN2 = 0x2 << Bit::ID, ///< Generic clock generator 2.
            ID_GCLKGEN3 = 0x3 << Bit::ID, ///< Generic clock generator 3.
            ID_GCLKGEN4 = 0x4 << Bit::ID, ///< Generic clock generator 4.
            ID_GCLKGEN5 = 0x5 << Bit::ID, ///< Generic clock generator 5.
            ID_GCLKGEN6 = 0x6 << Bit::ID, ///< Generic clock generator 6.
            ID_GCLKGEN7 = 0x7 << Bit::ID, ///< Generic clock generator 7.
            ID_GCLKGEN8 = 0x8 << Bit::ID, ///< Generic clock generator 8.
        };

        GENDIV() = delete;

        GENDIV( GENDIV && ) = delete;

        GENDIV( GENDIV const & ) = delete;

        ~GENDIV() = delete;

        auto operator=( GENDIV && ) = delete;

        auto operator=( GENDIV const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief CTRL.
     */
    CTRL ctrl;

    /**
     * \brief STATUS.
     */
    STATUS const status;

    /**
     * \brief CLKCTRL.
     */
    CLKCTRL clkctrl;

    /**
     * \brief GENCTRL.
     */
    GENCTRL genctrl;

    /**
     * \brief GENDIV.
     */
    GENDIV gendiv;

    GCLK() = delete;

    GCLK( GCLK && ) = delete;

    GCLK( GCLK const & ) = delete;

    ~GCLK() = delete;

    auto operator=( GCLK && ) = delete;

    auto operator=( GCLK const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_GCLK_H
