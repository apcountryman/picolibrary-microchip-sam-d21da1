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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::WDT interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_WDT_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_WDT_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Watchdog Timer (WDT) peripheral.
 */
class WDT {
  public:
    /**
     * \brief Control (CTRL) register.
     *
     * This register has the following fields:
     * - Enable (ENABLE)
     * - Watchdog Timer Window Mode Enable (WEN)
     * - Always-On (ALWAYSON)
     */
    class CTRL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE    = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto WEN       = std::uint_fast8_t{ 1 }; ///< WEN.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 4 }; ///< RESERVED3.
            static constexpr auto ALWAYSON  = std::uint_fast8_t{ 1 }; ///< ALWAYSON.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto WEN = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< WEN.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ WEN + Size::WEN }; ///< RESERVED3.
            static constexpr auto ALWAYSON = std::uint_fast8_t{ RESERVED3 + Size::RESERVED3 }; ///< ALWAYSON.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint8_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint8_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto WEN = mask<std::uint8_t>( Size::WEN, Bit::WEN ); ///< WEN.
            static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
            static constexpr auto ALWAYSON = mask<std::uint8_t>( Size::ALWAYSON, Bit::ALWAYSON ); ///< ALWAYSON.
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
     * \brief Configuration (CONFIG) register.
     *
     * This register has the following fields:
     * - Time-Out Period (PER)
     * - Window Mode Time-Out Period (WINDOW)
     */
    class CONFIG : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto PER    = std::uint_fast8_t{ 4 }; ///< PER.
            static constexpr auto WINDOW = std::uint_fast8_t{ 4 }; ///< WINDOW.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto PER    = std::uint_fast8_t{};                  ///< PER.
            static constexpr auto WINDOW = std::uint_fast8_t{ PER + Size::PER }; ///< WINDOW.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto PER = mask<std::uint8_t>( Size::PER, Bit::PER ); ///< PER.
            static constexpr auto WINDOW = mask<std::uint8_t>( Size::WINDOW, Bit::WINDOW ); ///< WINDOW.
        };

        CONFIG() = delete;

        CONFIG( CONFIG && ) = delete;

        CONFIG( CONFIG const & ) = delete;

        ~CONFIG() = delete;

        auto operator=( CONFIG && ) = delete;

        auto operator=( CONFIG const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Early Warning Interrupt Control (EWCTRL) register.
     *
     * This register has the following fields:
     * - Early Warning Interrupt Time Offset (EWOFFSET)
     */
    class EWCTRL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EWOFFSET  = std::uint_fast8_t{ 4 }; ///< EWOFFSET.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ 4 }; ///< RESERVED4.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EWOFFSET = std::uint_fast8_t{}; ///< EWOFFSET.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ EWOFFSET + Size::EWOFFSET }; ///< RESERVED4.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EWOFFSET = mask<std::uint8_t>( Size::EWOFFSET, Bit::EWOFFSET ); ///< EWOFFSET.
            static constexpr auto RESERVED4 = mask<std::uint8_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
        };

        EWCTRL() = delete;

        EWCTRL( EWCTRL && ) = delete;

        EWCTRL( EWCTRL const & ) = delete;

        ~EWCTRL() = delete;

        auto operator=( EWCTRL && ) = delete;

        auto operator=( EWCTRL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Clear (INTENCLR) register.
     *
     * This register has the following fields:
     * - Early Warning Interrupt Enable (EW)
     */
    class INTENCLR : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EW        = std::uint_fast8_t{ 1 }; ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EW        = std::uint_fast8_t{};                ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ EW + Size::EW }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EW = mask<std::uint8_t>( Size::EW, Bit::EW ); ///< EW.
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
     * - Early Warning Interrupt Enable (EW)
     */
    class INTENSET : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EW        = std::uint_fast8_t{ 1 }; ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EW        = std::uint_fast8_t{};                ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ EW + Size::EW }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EW = mask<std::uint8_t>( Size::EW, Bit::EW ); ///< EW.
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
     * - Early Warning (EW)
     */
    class INTFLAG : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EW        = std::uint_fast8_t{ 1 }; ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EW        = std::uint_fast8_t{};                ///< EW.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ EW + Size::EW }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EW = mask<std::uint8_t>( Size::EW, Bit::EW ); ///< EW.
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
     * \brief (STATUS) register.
     *
     * This register has the following fields:
     * - Synchronization Busy (SYNCBUSY)
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
     * \brief CTRL.
     */
    CTRL ctrl;

    /**
     * \brief CONFIG.
     */
    CONFIG config;

    /**
     * \brief EWCTRL.
     */
    EWCTRL ewctrl;

    /**
     * \brief Reserved registers (offset 0x03-0x03).
     */
    Reserved_Register<std::uint8_t> const reserved_0x03_0x03[ ( 0x03 - 0x03 ) + 1 ];

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
     * \brief STATUS.
     */
    STATUS const status;

    /**
     * \brief Clear (CLEAR) register.
     */
    Register<std::uint8_t> clear;

    WDT() = delete;

    WDT( WDT && ) = delete;

    WDT( WDT const & ) = delete;

    ~WDT() = delete;

    auto operator=( WDT && ) = delete;

    auto operator=( WDT const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_WDT_H
