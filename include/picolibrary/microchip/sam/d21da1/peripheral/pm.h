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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::PM interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PM_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PM_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Power Manager (PM) peripheral.
 */
class PM {
  public:
    /**
     * \brief Sleep Mode (SLEEP) register.
     *
     * This register has the following fields:
     * - Idle Mode Configuration (IDLE)
     */
    class SLEEP : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto IDLE      = std::uint_fast8_t{ 2 }; ///< IDLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 6 }; ///< RESERVED2.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto IDLE = std::uint_fast8_t{}; ///< IDLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ IDLE + Size::IDLE }; ///< RESERVED2.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto IDLE = mask<std::uint8_t>( Size::IDLE, Bit::IDLE ); ///< IDLE.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
        };

        /**
         * \brief IDLE.
         */
        enum IDLE : std::uint8_t {
            IDLE_CPU = 0x0 << Bit::IDLE, ///< The CPU clock domain is stopped.
            IDLE_AHB = 0x1 << Bit::IDLE, ///< The CPU and AHB clock domains are stopped.
            IDLE_APB = 0x2 << Bit::IDLE, ///< The CPU, AHB, and APB clock domains are stopped.
        };

        SLEEP() = delete;

        SLEEP( SLEEP && ) = delete;

        SLEEP( SLEEP const & ) = delete;

        ~SLEEP() = delete;

        auto operator=( SLEEP && ) = delete;

        auto operator=( SLEEP const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief CPU Clock Select (CPUSEL) register.
     *
     * This register has the following fields:
     * - CPU Prescaler Selection (CPUDIV)
     */
    class CPUSEL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CPUDIV    = std::uint_fast8_t{ 3 }; ///< CPUDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 5 }; ///< RESERVED3.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CPUDIV = std::uint_fast8_t{}; ///< CPUDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ CPUDIV + Size::CPUDIV }; ///< RESERVED3.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CPUDIV = mask<std::uint8_t>( Size::CPUDIV, Bit::CPUDIV ); ///< CPUDIV.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
        };

        /**
         * \brief CPUDIV.
         */
        enum CPUDIV : std::uint8_t {
            CPUDIV_DIV1   = 0x0 << Bit::CPUDIV, ///< Divide by 1.
            CPUDIV_DIV2   = 0x1 << Bit::CPUDIV, ///< Divide by 2.
            CPUDIV_DIV4   = 0x2 << Bit::CPUDIV, ///< Divide by 4.
            CPUDIV_DIV8   = 0x3 << Bit::CPUDIV, ///< Divide by 8.
            CPUDIV_DIV16  = 0x4 << Bit::CPUDIV, ///< Divide by 16.
            CPUDIV_DIV32  = 0x5 << Bit::CPUDIV, ///< Divide by 32.
            CPUDIV_DIV64  = 0x6 << Bit::CPUDIV, ///< Divide by 64.
            CPUDIV_DIV128 = 0x7 << Bit::CPUDIV, ///< Divide by 128.
        };

        CPUSEL() = delete;

        CPUSEL( CPUSEL && ) = delete;

        CPUSEL( CPUSEL const & ) = delete;

        ~CPUSEL() = delete;

        auto operator=( CPUSEL && ) = delete;

        auto operator=( CPUSEL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief APBA Clock Select (APBASEL) register.
     *
     * This register has the following fields:
     * - APBA Prescaler Selection (APBADIV)
     */
    class APBASEL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto APBADIV   = std::uint_fast8_t{ 3 }; ///< APBADIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 5 }; ///< RESERVED3.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto APBADIV = std::uint_fast8_t{}; ///< APBADIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ APBADIV + Size::APBADIV }; ///< RESERVED3.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto APBADIV = mask<std::uint8_t>( Size::APBADIV, Bit::APBADIV ); ///< APBADIV.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
        };

        /**
         * \brief APBADIV.
         */
        enum APBADIV : std::uint8_t {
            APBADIV_DIV1   = 0x0 << Bit::APBADIV, ///< Divide by 1.
            APBADIV_DIV2   = 0x1 << Bit::APBADIV, ///< Divide by 2.
            APBADIV_DIV4   = 0x2 << Bit::APBADIV, ///< Divide by 4.
            APBADIV_DIV8   = 0x3 << Bit::APBADIV, ///< Divide by 8.
            APBADIV_DIV16  = 0x4 << Bit::APBADIV, ///< Divide by 16.
            APBADIV_DIV32  = 0x5 << Bit::APBADIV, ///< Divide by 32.
            APBADIV_DIV64  = 0x6 << Bit::APBADIV, ///< Divide by 64.
            APBADIV_DIV128 = 0x7 << Bit::APBADIV, ///< Divide by 128.
        };

        APBASEL() = delete;

        APBASEL( APBASEL && ) = delete;

        APBASEL( APBASEL const & ) = delete;

        ~APBASEL() = delete;

        auto operator=( APBASEL && ) = delete;

        auto operator=( APBASEL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief APBB Clock Select (APBBSEL) register.
     *
     * This register has the following fields:
     * - APBB Prescaler Selection (APBBDIV)
     */
    class APBBSEL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto APBBDIV   = std::uint_fast8_t{ 3 }; ///< APBBDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 5 }; ///< RESERVED3.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto APBBDIV = std::uint_fast8_t{}; ///< APBBDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ APBBDIV + Size::APBBDIV }; ///< RESERVED3.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto APBBDIV = mask<std::uint8_t>( Size::APBBDIV, Bit::APBBDIV ); ///< APBBDIV.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
        };

        /**
         * \brief APBBDIV.
         */
        enum APBBDIV : std::uint8_t {
            APBBDIV_DIV1   = 0x0 << Bit::APBBDIV, ///< Divide by 1.
            APBBDIV_DIV2   = 0x1 << Bit::APBBDIV, ///< Divide by 2.
            APBBDIV_DIV4   = 0x2 << Bit::APBBDIV, ///< Divide by 4.
            APBBDIV_DIV8   = 0x3 << Bit::APBBDIV, ///< Divide by 8.
            APBBDIV_DIV16  = 0x4 << Bit::APBBDIV, ///< Divide by 16.
            APBBDIV_DIV32  = 0x5 << Bit::APBBDIV, ///< Divide by 32.
            APBBDIV_DIV64  = 0x6 << Bit::APBBDIV, ///< Divide by 64.
            APBBDIV_DIV128 = 0x7 << Bit::APBBDIV, ///< Divide by 128.
        };

        APBBSEL() = delete;

        APBBSEL( APBBSEL && ) = delete;

        APBBSEL( APBBSEL const & ) = delete;

        ~APBBSEL() = delete;

        auto operator=( APBBSEL && ) = delete;

        auto operator=( APBBSEL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief APBC Clock Select (APBCSEL) register.
     *
     * This register has the following fields:
     * - APBC Prescaler Selection (APBCDIV)
     */
    class APBCSEL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto APBCDIV   = std::uint_fast8_t{ 3 }; ///< APBCDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 5 }; ///< RESERVED3.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto APBCDIV = std::uint_fast8_t{}; ///< APBCDIV.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ APBCDIV + Size::APBCDIV }; ///< RESERVED3.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto APBCDIV = mask<std::uint8_t>( Size::APBCDIV, Bit::APBCDIV ); ///< APBCDIV.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
        };

        /**
         * \brief APBCDIV.
         */
        enum APBCDIV : std::uint8_t {
            APBCDIV_DIV1   = 0x0 << Bit::APBCDIV, ///< Divide by 1.
            APBCDIV_DIV2   = 0x1 << Bit::APBCDIV, ///< Divide by 2.
            APBCDIV_DIV4   = 0x2 << Bit::APBCDIV, ///< Divide by 4.
            APBCDIV_DIV8   = 0x3 << Bit::APBCDIV, ///< Divide by 8.
            APBCDIV_DIV16  = 0x4 << Bit::APBCDIV, ///< Divide by 16.
            APBCDIV_DIV32  = 0x5 << Bit::APBCDIV, ///< Divide by 32.
            APBCDIV_DIV64  = 0x6 << Bit::APBCDIV, ///< Divide by 64.
            APBCDIV_DIV128 = 0x7 << Bit::APBCDIV, ///< Divide by 128.
        };

        APBCSEL() = delete;

        APBCSEL( APBCSEL && ) = delete;

        APBCSEL( APBCSEL const & ) = delete;

        ~APBCSEL() = delete;

        auto operator=( APBCSEL && ) = delete;

        auto operator=( APBCSEL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief AHB Mask (AHBMASK) register.
     *
     * This register has the following fields:
     * - HPB0 AHB Clock Mask (HPB0)
     * - HPB1 AHB Clock Mask (HPB1)
     * - HPB2 AHB Clock Mask (HPB2)
     * - DUS AHB Clock Mask (DSU)
     * - NVMCTRL AHB Clock Mask (NVMCTRL)
     * - DMAC AHB Clock Mask (DMAC)
     * - USB AHB Clock Mask (USB)
     */
    class AHBMASK : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto HPB0      = std::uint_fast8_t{ 1 };  ///< HPB0.
            static constexpr auto HPB1      = std::uint_fast8_t{ 1 };  ///< HPB1.
            static constexpr auto HPB2      = std::uint_fast8_t{ 1 };  ///< HPB2.
            static constexpr auto DSU       = std::uint_fast8_t{ 1 };  ///< DSU.
            static constexpr auto NVMCTRL   = std::uint_fast8_t{ 1 };  ///< NVMCTRL.
            static constexpr auto DMAC      = std::uint_fast8_t{ 1 };  ///< DMAC.
            static constexpr auto USB       = std::uint_fast8_t{ 1 };  ///< USB.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto HPB0 = std::uint_fast8_t{}; ///< HPB0.
            static constexpr auto HPB1 = std::uint_fast8_t{ HPB0 + Size::HPB0 }; ///< HPB1.
            static constexpr auto HPB2 = std::uint_fast8_t{ HPB1 + Size::HPB1 }; ///< HPB2.
            static constexpr auto DSU  = std::uint_fast8_t{ HPB2 + Size::HPB2 }; ///< DSU.
            static constexpr auto NVMCTRL = std::uint_fast8_t{ DSU + Size::DSU }; ///< NVMCTRL.
            static constexpr auto DMAC = std::uint_fast8_t{ NVMCTRL + Size::NVMCTRL }; ///< DMAC.
            static constexpr auto USB = std::uint_fast8_t{ DMAC + Size::DMAC }; ///< USB.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ USB + Size::USB }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto HPB0 = mask<std::uint32_t>( Size::HPB0, Bit::HPB0 ); ///< HPB0.
            static constexpr auto HPB1 = mask<std::uint32_t>( Size::HPB1, Bit::HPB1 ); ///< HPB1.
            static constexpr auto HPB2 = mask<std::uint32_t>( Size::HPB2, Bit::HPB2 ); ///< HPB2.
            static constexpr auto DSU = mask<std::uint32_t>( Size::DSU, Bit::DSU ); ///< DSU.
            static constexpr auto NVMCTRL = mask<std::uint32_t>( Size::NVMCTRL, Bit::NVMCTRL ); ///< NVMCTRL.
            static constexpr auto DMAC = mask<std::uint32_t>( Size::DMAC, Bit::DMAC ); ///< DMAC.
            static constexpr auto USB = mask<std::uint32_t>( Size::USB, Bit::USB ); ///< USB.
            static constexpr auto RESERVED7 = mask<std::uint32_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
        };

        AHBMASK() = delete;

        AHBMASK( AHBMASK && ) = delete;

        AHBMASK( AHBMASK const & ) = delete;

        ~AHBMASK() = delete;

        auto operator=( AHBMASK && ) = delete;

        auto operator=( AHBMASK const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief APBA Mask (APBAMASK) register.
     *
     * This register has the following fields:
     * - PAC0 APB Clock Enable (PAC0)
     * - PM APB Clock Enable (PM)
     * - SYSCTRL APB Clock Enable (SYSCTRL)
     * - GCLK APB Clock Enable (GCLK)
     * - WDT APB Clock Enable (WDT)
     * - RTC APB Clock Enable (RTC)
     * - EIC APB Clock Enable (EIC)
     */
    class APBAMASK : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto PAC0      = std::uint_fast8_t{ 1 };  ///< PAC0.
            static constexpr auto PM        = std::uint_fast8_t{ 1 };  ///< PM.
            static constexpr auto SYSCTRL   = std::uint_fast8_t{ 1 };  ///< SYSCTRL.
            static constexpr auto GCLK      = std::uint_fast8_t{ 1 };  ///< GCLK.
            static constexpr auto WDT       = std::uint_fast8_t{ 1 };  ///< WDT.
            static constexpr auto RTC       = std::uint_fast8_t{ 1 };  ///< RTC.
            static constexpr auto EIC       = std::uint_fast8_t{ 1 };  ///< EIC.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto PAC0 = std::uint_fast8_t{}; ///< PAC0.
            static constexpr auto PM   = std::uint_fast8_t{ PAC0 + Size::PAC0 }; ///< PM.
            static constexpr auto SYSCTRL = std::uint_fast8_t{ PM + Size::PM }; ///< SYSCTRL.
            static constexpr auto GCLK = std::uint_fast8_t{ SYSCTRL + Size::SYSCTRL }; ///< GCLK.
            static constexpr auto WDT = std::uint_fast8_t{ GCLK + Size::GCLK }; ///< WDT.
            static constexpr auto RTC = std::uint_fast8_t{ WDT + Size::WDT };   ///< RTC.
            static constexpr auto EIC = std::uint_fast8_t{ RTC + Size::RTC };   ///< EIC.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ EIC + Size::EIC }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto PAC0 = mask<std::uint32_t>( Size::PAC0, Bit::PAC0 ); ///< PAC0.
            static constexpr auto PM = mask<std::uint32_t>( Size::PM, Bit::PM ); ///< PM.
            static constexpr auto SYSCTRL = mask<std::uint32_t>( Size::SYSCTRL, Bit::SYSCTRL ); ///< SYSCTRL.
            static constexpr auto GCLK = mask<std::uint32_t>( Size::GCLK, Bit::GCLK ); ///< GCLK.
            static constexpr auto WDT = mask<std::uint32_t>( Size::WDT, Bit::WDT ); ///< WDT.
            static constexpr auto RTC = mask<std::uint32_t>( Size::RTC, Bit::RTC ); ///< RTC.
            static constexpr auto EIC = mask<std::uint32_t>( Size::EIC, Bit::EIC ); ///< EIC.
            static constexpr auto RESERVED7 = mask<std::uint32_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
        };

        APBAMASK() = delete;

        APBAMASK( APBAMASK && ) = delete;

        APBAMASK( APBAMASK const & ) = delete;

        ~APBAMASK() = delete;

        auto operator=( APBAMASK && ) = delete;

        auto operator=( APBAMASK const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief APBB Mask (APBBMASK) register.
     *
     * This register has the following fields:
     * - PAC1 APB Clock Enable (PAC1)
     * - DSU APB Clock Enable (DSU)
     * - NVMCTRL APB Clock Enable (NVMCTRL)
     * - PORT APB Clock Enable (PORT)
     * - DMAC APB Clock Enable (DMAC)
     * - USB APB Clock Enable (USB)
     * - RESERVED6 APB Clock Enable (RESERVED6)
     */
    class APBBMASK : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto PAC1      = std::uint_fast8_t{ 1 };  ///< PAC1.
            static constexpr auto DSU       = std::uint_fast8_t{ 1 };  ///< DSU.
            static constexpr auto NVMCTRL   = std::uint_fast8_t{ 1 };  ///< NVMCTRL.
            static constexpr auto PORT      = std::uint_fast8_t{ 1 };  ///< PORT.
            static constexpr auto DMAC      = std::uint_fast8_t{ 1 };  ///< DMAC.
            static constexpr auto USB       = std::uint_fast8_t{ 1 };  ///< USB.
            static constexpr auto RESERVED6 = std::uint_fast8_t{ 26 }; ///< RESERVED6.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto PAC1 = std::uint_fast8_t{}; ///< PAC1.
            static constexpr auto DSU  = std::uint_fast8_t{ PAC1 + Size::PAC1 }; ///< DSU.
            static constexpr auto NVMCTRL = std::uint_fast8_t{ DSU + Size::DSU }; ///< NVMCTRL.
            static constexpr auto PORT = std::uint_fast8_t{ NVMCTRL + Size::NVMCTRL }; ///< PORT.
            static constexpr auto DMAC = std::uint_fast8_t{ PORT + Size::PORT }; ///< DMAC.
            static constexpr auto USB  = std::uint_fast8_t{ DMAC + Size::DMAC }; ///< USB.
            static constexpr auto RESERVED6 = std::uint_fast8_t{ USB + Size::USB }; ///< RESERVED6.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto PAC1 = mask<std::uint32_t>( Size::PAC1, Bit::PAC1 ); ///< PAC1.
            static constexpr auto DSU = mask<std::uint32_t>( Size::DSU, Bit::DSU ); ///< DSU.
            static constexpr auto NVMCTRL = mask<std::uint32_t>( Size::NVMCTRL, Bit::NVMCTRL ); ///< NVMCTRL.
            static constexpr auto PORT = mask<std::uint32_t>( Size::PORT, Bit::PORT ); ///< PORT.
            static constexpr auto DMAC = mask<std::uint32_t>( Size::DMAC, Bit::DMAC ); ///< DMAC.
            static constexpr auto USB = mask<std::uint32_t>( Size::USB, Bit::USB ); ///< USB.
            static constexpr auto RESERVED6 = mask<std::uint32_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
        };

        APBBMASK() = delete;

        APBBMASK( APBBMASK && ) = delete;

        APBBMASK( APBBMASK const & ) = delete;

        ~APBBMASK() = delete;

        auto operator=( APBBMASK && ) = delete;

        auto operator=( APBBMASK const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief APBC Mask (APBCMASK) register.
     *
     * This register has the following fields:
     * - PAC2 APB Clock Enable (PAC2)
     * - EVSYS APB Clock Enable (EVSYS)
     * - SERCOM0 APB Clock Enable (SERCOM0)
     * - SERCOM1 APB Clock Enable (SERCOM1)
     * - SERCOM2 APB Clock Enable (SERCOM2)
     * - SERCOM3 APB Clock Enable (SERCOM3)
     * - SERCOM4 APB Clock Enable (SERCOM4)
     * - SERCOM5 APB Clock Enable (SERCOM5)
     * - TCC0 APB Clock Enable (TCC0)
     * - TCC1 APB Clock Enable (TCC1)
     * - TCC2 APB Clock Enable (TCC2)
     * - TC3 APB Clock Enable (TC3)
     * - TC4 APB Clock Enable (TC4)
     * - TC5 APB Clock Enable (TC5)
     * - TC6 APB Clock Enable (TC6)
     * - TC7 APB Clock Enable (TC7)
     * - ADC APB Clock Enable (ADC)
     * - AC APB Clock Enable (AC)
     * - DAC APB Clock Enable (DAC)
     * - PTC APB Clock Enable (PTC)
     * - I2S APB Clock Enable (I2S)
     * - AC1 APB Clock Enable (AC1)
     * - TCC3 APB Clock Enable (TCC3)
     */
    class APBCMASK : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto PAC2       = std::uint_fast8_t{ 1 }; ///< PAC2.
            static constexpr auto EVSYS      = std::uint_fast8_t{ 1 }; ///< EVSYS.
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
            static constexpr auto ADC        = std::uint_fast8_t{ 1 }; ///< ADC.
            static constexpr auto AC         = std::uint_fast8_t{ 1 }; ///< AC.
            static constexpr auto DAC        = std::uint_fast8_t{ 1 }; ///< DAC.
            static constexpr auto PTC        = std::uint_fast8_t{ 1 }; ///< PTC.
            static constexpr auto I2S        = std::uint_fast8_t{ 1 }; ///< I2S.
            static constexpr auto AC1        = std::uint_fast8_t{ 1 }; ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 2 }; ///< RESERVED22.
            static constexpr auto TCC3       = std::uint_fast8_t{ 1 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ 7 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto PAC2 = std::uint_fast8_t{}; ///< PAC2.
            static constexpr auto EVSYS = std::uint_fast8_t{ PAC2 + Size::PAC2 }; ///< EVSYS.
            static constexpr auto SERCOM0 = std::uint_fast8_t{ EVSYS + Size::EVSYS }; ///< SERCOM0.
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
            static constexpr auto ADC  = std::uint_fast8_t{ TC7 + Size::TC7 };   ///< ADC.
            static constexpr auto AC   = std::uint_fast8_t{ ADC + Size::ADC };   ///< AC.
            static constexpr auto DAC  = std::uint_fast8_t{ AC + Size::AC };     ///< DAC.
            static constexpr auto PTC  = std::uint_fast8_t{ DAC + Size::DAC };   ///< PTC.
            static constexpr auto I2S  = std::uint_fast8_t{ PTC + Size::PTC };   ///< I2S.
            static constexpr auto AC1  = std::uint_fast8_t{ I2S + Size::I2S };   ///< AC1.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ AC1 + Size::AC1 }; ///< RESERVED22.
            static constexpr auto TCC3 = std::uint_fast8_t{ RESERVED22 + Size::RESERVED22 }; ///< TCC3.
            static constexpr auto RESERVED25 = std::uint_fast8_t{ TCC3 + Size::TCC3 }; ///< RESERVED25.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto PAC2 = mask<std::uint32_t>( Size::PAC2, Bit::PAC2 ); ///< PAC2.
            static constexpr auto EVSYS = mask<std::uint32_t>( Size::EVSYS, Bit::EVSYS ); ///< EVSYS.
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
            static constexpr auto ADC = mask<std::uint32_t>( Size::ADC, Bit::ADC ); ///< ADC.
            static constexpr auto AC = mask<std::uint32_t>( Size::AC, Bit::AC ); ///< AC.
            static constexpr auto DAC = mask<std::uint32_t>( Size::DAC, Bit::DAC ); ///< DAC.
            static constexpr auto PTC = mask<std::uint32_t>( Size::PTC, Bit::PTC ); ///< PTC.
            static constexpr auto I2S = mask<std::uint32_t>( Size::I2S, Bit::I2S ); ///< I2S.
            static constexpr auto AC1 = mask<std::uint32_t>( Size::AC1, Bit::AC1 ); ///< AC1.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
            static constexpr auto TCC3 = mask<std::uint32_t>( Size::TCC3, Bit::TCC3 ); ///< TCC3.
            static constexpr auto RESERVED25 = mask<std::uint32_t>( Size::RESERVED25, Bit::RESERVED25 ); ///< RESERVED25.
        };

        APBCMASK() = delete;

        APBCMASK( APBCMASK && ) = delete;

        APBCMASK( APBCMASK const & ) = delete;

        ~APBCMASK() = delete;

        auto operator=( APBCMASK && ) = delete;

        auto operator=( APBCMASK const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Clear (INTENCLR) register.
     *
     * This register has the following fields:
     * - Clock Ready Interrupt Enable (CKRDY)
     */
    class INTENCLR : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CKRDY     = std::uint_fast8_t{ 1 }; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CKRDY = std::uint_fast8_t{}; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ CKRDY + Size::CKRDY }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CKRDY = mask<std::uint8_t>( Size::CKRDY, Bit::CKRDY ); ///< CKRDY.
            static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
        };

        INTENCLR() = delete;

        INTENCLR( INTENCLR && ) = delete;

        INTENCLR( INTENCLR const & ) = delete;

        ~INTENCLR() = delete;

        auto operator=( INTENCLR && ) = delete;

        auto operator=( INTENCLR const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Set (INTENSET) register.
     *
     * This register has the following fields:
     * - Clock Ready Interrupt Enable (CKRDY)
     */
    class INTENSET : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CKRDY     = std::uint_fast8_t{ 1 }; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CKRDY = std::uint_fast8_t{}; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ CKRDY + Size::CKRDY }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CKRDY = mask<std::uint8_t>( Size::CKRDY, Bit::CKRDY ); ///< CKRDY.
            static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
        };

        INTENSET() = delete;

        INTENSET( INTENSET && ) = delete;

        INTENSET( INTENSET const & ) = delete;

        ~INTENSET() = delete;

        auto operator=( INTENSET && ) = delete;

        auto operator=( INTENSET const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Interrupt Flag Status and Clear (INTFLAG) register.
     *
     * This register has the following fields:
     * - Clock Ready (CKRDY)
     */
    class INTFLAG : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CKRDY     = std::uint_fast8_t{ 1 }; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CKRDY = std::uint_fast8_t{}; ///< CKRDY.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ CKRDY + Size::CKRDY }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CKRDY = mask<std::uint8_t>( Size::CKRDY, Bit::CKRDY ); ///< CKRDY.
            static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
        };

        INTFLAG() = delete;

        INTFLAG( INTFLAG && ) = delete;

        INTFLAG( INTFLAG const & ) = delete;

        ~INTFLAG() = delete;

        auto operator=( INTFLAG && ) = delete;

        auto operator=( INTFLAG const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Reset Cause (RCAUSE) register.
     *
     * This register has the following fields:
     * - Power On Reset (POR)
     * - Brown Out 12 Detector Reset (BOD12)
     * - Brown Out 33 Detector Reset (BOD33)
     * - External Reset (EXT)
     * - Watchdog Reset (WDT)
     * - System Reset Request (SYST)
     */
    class RCAUSE : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto POR       = std::uint_fast8_t{ 1 }; ///< POR.
            static constexpr auto BOD12     = std::uint_fast8_t{ 1 }; ///< BOD12.
            static constexpr auto BOD33     = std::uint_fast8_t{ 1 }; ///< BOD33.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 1 }; ///< RESERVED3.
            static constexpr auto EXT       = std::uint_fast8_t{ 1 }; ///< EXT.
            static constexpr auto WDT       = std::uint_fast8_t{ 1 }; ///< WDT.
            static constexpr auto SYST      = std::uint_fast8_t{ 1 }; ///< SYST.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 1 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto POR   = std::uint_fast8_t{};                  ///< POR.
            static constexpr auto BOD12 = std::uint_fast8_t{ POR + Size::POR }; ///< BOD12.
            static constexpr auto BOD33 = std::uint_fast8_t{ BOD12 + Size::BOD12 }; ///< BOD33.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ BOD33 + Size::BOD33 }; ///< RESERVED3.
            static constexpr auto EXT = std::uint_fast8_t{ RESERVED3 + Size::RESERVED3 }; ///< EXT.
            static constexpr auto WDT  = std::uint_fast8_t{ EXT + Size::EXT }; ///< WDT.
            static constexpr auto SYST = std::uint_fast8_t{ WDT + Size::WDT }; ///< SYST.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ SYST + Size::SYST }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto POR = mask<std::uint8_t>( Size::POR, Bit::POR ); ///< POR.
            static constexpr auto BOD12 = mask<std::uint8_t>( Size::BOD12, Bit::BOD12 ); ///< BOD12.
            static constexpr auto BOD33 = mask<std::uint8_t>( Size::BOD33, Bit::BOD33 ); ///< BOD33.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
            static constexpr auto EXT = mask<std::uint8_t>( Size::EXT, Bit::EXT ); ///< EXT.
            static constexpr auto WDT = mask<std::uint8_t>( Size::WDT, Bit::WDT ); ///< WDT.
            static constexpr auto SYST = mask<std::uint8_t>( Size::SYST, Bit::SYST ); ///< SYST.
            static constexpr auto RESERVED7 = mask<std::uint8_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
        };

        RCAUSE() = delete;

        RCAUSE( RCAUSE && ) = delete;

        RCAUSE( RCAUSE const & ) = delete;

        ~RCAUSE() = delete;

        auto operator=( RCAUSE && ) = delete;

        auto operator=( RCAUSE const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Control (CTRL) register.
     */
    Register<std::uint8_t> ctrl;

    /**
     * \brief SLEEP.
     */
    SLEEP sleep;

    /**
     * \brief Reserved registers (offset 0x02-0x07).
     */
    Reserved_Register<std::uint8_t> const reserved_0x02_0x07[ ( 0x07 - 0x02 ) + 1 ];

    /**
     * \brief CPUSEL.
     */
    CPUSEL cpusel;

    /**
     * \brief APBASEL.
     */
    APBASEL apbasel;

    /**
     * \brief APBBSEL.
     */
    APBBSEL apbbsel;

    /**
     * \brief APBCSEL.
     */
    APBCSEL apbcsel;

    /**
     * \brief Reserved registers (offset 0x0C-0x13).
     */
    Reserved_Register<std::uint8_t> const reserved_0x0C_0x13[ ( 0x13 - 0x0C ) + 1 ];

    /**
     * \brief AHBMASK.
     */
    AHBMASK ahbmask;

    /**
     * \brief APBAMASK.
     */
    APBAMASK apbamask;

    /**
     * \brief APBBMASK.
     */
    APBBMASK apbbmask;

    /**
     * \brief APBCMASK.
     */
    APBCMASK apbcmask;

    /**
     * \brief Reserved registers (offset 0x24-0x33).
     */
    Reserved_Register<std::uint8_t> const reserved_0x24_0x33[ ( 0x33 - 0x24 ) + 1 ];

    /**
     * \brief INTENCLR.
     */
    INTENCLR intenclr;

    /**
     * \brief INTENSET.
     */
    INTENSET intenset;

    /**
     * \brief INTFLAG.
     */
    INTFLAG intflag;

    /**
     * \brief Reserved registers (offset 0x37-0x37).
     */
    Reserved_Register<std::uint8_t> const reserved_0x37_0x37[ ( 0x37 - 0x37 ) + 1 ];

    /**
     * \brief RCAUSE.
     */
    RCAUSE const rcause;

    PM() = delete;

    PM( PM && ) = delete;

    PM( PM const & ) = delete;

    ~PM() = delete;

    auto operator=( PM && ) = delete;

    auto operator=( PM const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PM_H
