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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::EIC interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_EIC_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_EIC_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 External Interrupt Controller (EIC) peripheral.
 */
class EIC {
  public:
    /**
     * \brief Control (CTRL) register.
     *
     * This register has the following fields:
     * - Software Reset (SWRST)
     * - Enable (ENABLE)
     */
    class CTRL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto SWRST     = std::uint_fast8_t{ 1 }; ///< SWRST.
            static constexpr auto ENABLE    = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 6 }; ///< RESERVED2.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto SWRST = std::uint_fast8_t{}; ///< SWRST.
            static constexpr auto ENABLE = std::uint_fast8_t{ SWRST + Size::SWRST }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< RESERVED2.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto SWRST = mask<std::uint8_t>( Size::SWRST, Bit::SWRST ); ///< SWRST.
            static constexpr auto ENABLE = mask<std::uint8_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
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
     * - Syncronization Busy (SYNCBUSY)
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
     * \brief Non-Maskable Interrupt Control (NMICTRL) register.
     *
     * This register has the following fields:
     * - Non-Maskable Interrupt Sense (NMISENSE)
     * - Non-Maskable Interrupt Filter Enable (NMIFILTEN)
     */
    class NMICTRL : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto NMISENSE  = std::uint_fast8_t{ 3 }; ///< NMISENSE.
            static constexpr auto NMIFILTEN = std::uint_fast8_t{ 1 }; ///< NMIFILTEN.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ 4 }; ///< RESERVED4.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto NMISENSE = std::uint_fast8_t{}; ///< NMISENSE.
            static constexpr auto NMIFILTEN = std::uint_fast8_t{ NMISENSE + Size::NMISENSE }; ///< NMIFILTEN.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ NMIFILTEN + Size::NMIFILTEN }; ///< RESERVED4.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto NMISENSE = mask<std::uint8_t>( Size::NMISENSE, Bit::NMISENSE ); ///< NMISENSE.
            static constexpr auto NMIFILTEN = mask<std::uint8_t>( Size::NMIFILTEN, Bit::NMIFILTEN ); ///< NMIFILTEN.
            static constexpr auto RESERVED4 = mask<std::uint8_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
        };

        /**
         * \brief NMISENSE.
         */
        enum NMISENSE : std::uint8_t {
            NMISENSE_NONE = 0x0 << Bit::NMISENSE, ///< No detection.
            NMISENSE_RISE = 0x1 << Bit::NMISENSE, ///< Rising-edge detection.
            NMISENSE_FALL = 0x2 << Bit::NMISENSE, ///< Falling-edge detection.
            NMISENSE_BOTH = 0x3 << Bit::NMISENSE, ///< Both-edges detection.
            NMISENSE_HIGH = 0x4 << Bit::NMISENSE, ///< High-level detection.
            NMISENSE_LOW  = 0x5 << Bit::NMISENSE, ///< Low-level detection.
        };

        NMICTRL() = delete;

        NMICTRL( NMICTRL && ) = delete;

        NMICTRL( NMICTRL const & ) = delete;

        ~NMICTRL() = delete;

        auto operator=( NMICTRL && ) = delete;

        auto operator=( NMICTRL const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Non-Maskable Interrupt Flag Status and Clear (NMIFLAG) register.
     *
     * This register has the following fields:
     * - Non-Maskable Interrupt (NMI)
     */
    class NMIFLAG : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto NMI       = std::uint_fast8_t{ 1 }; ///< NMI.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto NMI = std::uint_fast8_t{}; ///< NMI.
            static constexpr auto RESERVED1 = std::uint_fast8_t{ NMI + Size::NMI }; ///< RESERVED1.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto NMI = mask<std::uint8_t>( Size::NMI, Bit::NMI ); ///< NMI.
            static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
        };

        NMIFLAG() = delete;

        NMIFLAG( NMIFLAG && ) = delete;

        NMIFLAG( NMIFLAG const & ) = delete;

        ~NMIFLAG() = delete;

        auto operator=( NMIFLAG && ) = delete;

        auto operator=( NMIFLAG const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief Event Control (EVCTRL) register.
     *
     * This register has the following fields:
     * - External Interrupt 0 Event Output Enable (EXTINTEO0)
     * - External Interrupt 1 Event Output Enable (EXTINTEO1)
     * - External Interrupt 2 Event Output Enable (EXTINTEO2)
     * - External Interrupt 3 Event Output Enable (EXTINTEO3)
     * - External Interrupt 4 Event Output Enable (EXTINTEO4)
     * - External Interrupt 5 Event Output Enable (EXTINTEO5)
     * - External Interrupt 6 Event Output Enable (EXTINTEO6)
     * - External Interrupt 7 Event Output Enable (EXTINTEO7)
     * - External Interrupt 8 Event Output Enable (EXTINTEO8)
     * - External Interrupt 9 Event Output Enable (EXTINTEO9)
     * - External Interrupt 10 Event Output Enable (EXTINTEO10)
     * - External Interrupt 11 Event Output Enable (EXTINTEO11)
     * - External Interrupt 12 Event Output Enable (EXTINTEO12)
     * - External Interrupt 13 Event Output Enable (EXTINTEO13)
     * - External Interrupt 14 Event Output Enable (EXTINTEO14)
     * - External Interrupt 15 Event Output Enable (EXTINTEO15)
     */
    class EVCTRL : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EXTINTEO0  = std::uint_fast8_t{ 1 };  ///< EXTINTEO0.
            static constexpr auto EXTINTEO1  = std::uint_fast8_t{ 1 };  ///< EXTINTEO1.
            static constexpr auto EXTINTEO2  = std::uint_fast8_t{ 1 };  ///< EXTINTEO2.
            static constexpr auto EXTINTEO3  = std::uint_fast8_t{ 1 };  ///< EXTINTEO3.
            static constexpr auto EXTINTEO4  = std::uint_fast8_t{ 1 };  ///< EXTINTEO4.
            static constexpr auto EXTINTEO5  = std::uint_fast8_t{ 1 };  ///< EXTINTEO5.
            static constexpr auto EXTINTEO6  = std::uint_fast8_t{ 1 };  ///< EXTINTEO6.
            static constexpr auto EXTINTEO7  = std::uint_fast8_t{ 1 };  ///< EXTINTEO7.
            static constexpr auto EXTINTEO8  = std::uint_fast8_t{ 1 };  ///< EXTINTEO8.
            static constexpr auto EXTINTEO9  = std::uint_fast8_t{ 1 };  ///< EXTINTEO9.
            static constexpr auto EXTINTEO10 = std::uint_fast8_t{ 1 };  ///< EXTINTEO10.
            static constexpr auto EXTINTEO11 = std::uint_fast8_t{ 1 };  ///< EXTINTEO11.
            static constexpr auto EXTINTEO12 = std::uint_fast8_t{ 1 };  ///< EXTINTEO12.
            static constexpr auto EXTINTEO13 = std::uint_fast8_t{ 1 };  ///< EXTINTEO13.
            static constexpr auto EXTINTEO14 = std::uint_fast8_t{ 1 };  ///< EXTINTEO14.
            static constexpr auto EXTINTEO15 = std::uint_fast8_t{ 1 };  ///< EXTINTEO15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ 16 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EXTINTEO0 = std::uint_fast8_t{}; ///< EXTINTEO0.
            static constexpr auto EXTINTEO1 = std::uint_fast8_t{ EXTINTEO0 + Size::EXTINTEO0 }; ///< EXTINTEO1.
            static constexpr auto EXTINTEO2 = std::uint_fast8_t{ EXTINTEO1 + Size::EXTINTEO1 }; ///< EXTINTEO2.
            static constexpr auto EXTINTEO3 = std::uint_fast8_t{ EXTINTEO2 + Size::EXTINTEO2 }; ///< EXTINTEO3.
            static constexpr auto EXTINTEO4 = std::uint_fast8_t{ EXTINTEO3 + Size::EXTINTEO3 }; ///< EXTINTEO4.
            static constexpr auto EXTINTEO5 = std::uint_fast8_t{ EXTINTEO4 + Size::EXTINTEO4 }; ///< EXTINTEO5.
            static constexpr auto EXTINTEO6 = std::uint_fast8_t{ EXTINTEO5 + Size::EXTINTEO5 }; ///< EXTINTEO6.
            static constexpr auto EXTINTEO7 = std::uint_fast8_t{ EXTINTEO6 + Size::EXTINTEO6 }; ///< EXTINTEO7.
            static constexpr auto EXTINTEO8 = std::uint_fast8_t{ EXTINTEO7 + Size::EXTINTEO7 }; ///< EXTINTEO8.
            static constexpr auto EXTINTEO9 = std::uint_fast8_t{ EXTINTEO8 + Size::EXTINTEO8 }; ///< EXTINTEO9.
            static constexpr auto EXTINTEO10 = std::uint_fast8_t{ EXTINTEO9 + Size::EXTINTEO9 }; ///< EXTINTEO10.
            static constexpr auto EXTINTEO11 = std::uint_fast8_t{ EXTINTEO10 + Size::EXTINTEO10 }; ///< EXTINTEO11.
            static constexpr auto EXTINTEO12 = std::uint_fast8_t{ EXTINTEO11 + Size::EXTINTEO11 }; ///< EXTINTEO12.
            static constexpr auto EXTINTEO13 = std::uint_fast8_t{ EXTINTEO12 + Size::EXTINTEO12 }; ///< EXTINTEO13.
            static constexpr auto EXTINTEO14 = std::uint_fast8_t{ EXTINTEO13 + Size::EXTINTEO13 }; ///< EXTINTEO14.
            static constexpr auto EXTINTEO15 = std::uint_fast8_t{ EXTINTEO14 + Size::EXTINTEO14 }; ///< EXTINTEO15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ EXTINTEO15 + Size::EXTINTEO15 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EXTINTEO0 = mask<std::uint32_t>( Size::EXTINTEO0, Bit::EXTINTEO0 ); ///< EXTINTEO0.
            static constexpr auto EXTINTEO1 = mask<std::uint32_t>( Size::EXTINTEO1, Bit::EXTINTEO1 ); ///< EXTINTEO1.
            static constexpr auto EXTINTEO2 = mask<std::uint32_t>( Size::EXTINTEO2, Bit::EXTINTEO2 ); ///< EXTINTEO2.
            static constexpr auto EXTINTEO3 = mask<std::uint32_t>( Size::EXTINTEO3, Bit::EXTINTEO3 ); ///< EXTINTEO3.
            static constexpr auto EXTINTEO4 = mask<std::uint32_t>( Size::EXTINTEO4, Bit::EXTINTEO4 ); ///< EXTINTEO4.
            static constexpr auto EXTINTEO5 = mask<std::uint32_t>( Size::EXTINTEO5, Bit::EXTINTEO5 ); ///< EXTINTEO5.
            static constexpr auto EXTINTEO6 = mask<std::uint32_t>( Size::EXTINTEO6, Bit::EXTINTEO6 ); ///< EXTINTEO6.
            static constexpr auto EXTINTEO7 = mask<std::uint32_t>( Size::EXTINTEO7, Bit::EXTINTEO7 ); ///< EXTINTEO7.
            static constexpr auto EXTINTEO8 = mask<std::uint32_t>( Size::EXTINTEO8, Bit::EXTINTEO8 ); ///< EXTINTEO8.
            static constexpr auto EXTINTEO9 = mask<std::uint32_t>( Size::EXTINTEO9, Bit::EXTINTEO9 ); ///< EXTINTEO9.
            static constexpr auto EXTINTEO10 = mask<std::uint32_t>( Size::EXTINTEO10, Bit::EXTINTEO10 ); ///< EXTINTEO10.
            static constexpr auto EXTINTEO11 = mask<std::uint32_t>( Size::EXTINTEO11, Bit::EXTINTEO11 ); ///< EXTINTEO11.
            static constexpr auto EXTINTEO12 = mask<std::uint32_t>( Size::EXTINTEO12, Bit::EXTINTEO12 ); ///< EXTINTEO12.
            static constexpr auto EXTINTEO13 = mask<std::uint32_t>( Size::EXTINTEO13, Bit::EXTINTEO13 ); ///< EXTINTEO13.
            static constexpr auto EXTINTEO14 = mask<std::uint32_t>( Size::EXTINTEO14, Bit::EXTINTEO14 ); ///< EXTINTEO14.
            static constexpr auto EXTINTEO15 = mask<std::uint32_t>( Size::EXTINTEO15, Bit::EXTINTEO15 ); ///< EXTINTEO15.
            static constexpr auto RESERVED16 = mask<std::uint32_t>( Size::RESERVED16, Bit::RESERVED16 ); ///< RESERVED16.
        };

        EVCTRL() = delete;

        EVCTRL( EVCTRL && ) = delete;

        EVCTRL( EVCTRL const & ) = delete;

        ~EVCTRL() = delete;

        auto operator=( EVCTRL && ) = delete;

        auto operator=( EVCTRL const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Clear (INTENCLR) register.
     *
     * This register has the following fields:
     * - External Interrupt 0 Enable (EXTINT0)
     * - External Interrupt 1 Enable (EXTINT1)
     * - External Interrupt 2 Enable (EXTINT2)
     * - External Interrupt 3 Enable (EXTINT3)
     * - External Interrupt 4 Enable (EXTINT4)
     * - External Interrupt 5 Enable (EXTINT5)
     * - External Interrupt 6 Enable (EXTINT6)
     * - External Interrupt 7 Enable (EXTINT7)
     * - External Interrupt 8 Enable (EXTINT8)
     * - External Interrupt 9 Enable (EXTINT9)
     * - External Interrupt 10 Enable (EXTINT10)
     * - External Interrupt 11 Enable (EXTINT11)
     * - External Interrupt 12 Enable (EXTINT12)
     * - External Interrupt 13 Enable (EXTINT13)
     * - External Interrupt 14 Enable (EXTINT14)
     * - External Interrupt 15 Enable (EXTINT15)
     */
    class INTENCLR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EXTINT0    = std::uint_fast8_t{ 1 };  ///< EXTINT0.
            static constexpr auto EXTINT1    = std::uint_fast8_t{ 1 };  ///< EXTINT1.
            static constexpr auto EXTINT2    = std::uint_fast8_t{ 1 };  ///< EXTINT2.
            static constexpr auto EXTINT3    = std::uint_fast8_t{ 1 };  ///< EXTINT3.
            static constexpr auto EXTINT4    = std::uint_fast8_t{ 1 };  ///< EXTINT4.
            static constexpr auto EXTINT5    = std::uint_fast8_t{ 1 };  ///< EXTINT5.
            static constexpr auto EXTINT6    = std::uint_fast8_t{ 1 };  ///< EXTINT6.
            static constexpr auto EXTINT7    = std::uint_fast8_t{ 1 };  ///< EXTINT7.
            static constexpr auto EXTINT8    = std::uint_fast8_t{ 1 };  ///< EXTINT8.
            static constexpr auto EXTINT9    = std::uint_fast8_t{ 1 };  ///< EXTINT9.
            static constexpr auto EXTINT10   = std::uint_fast8_t{ 1 };  ///< EXTINT10.
            static constexpr auto EXTINT11   = std::uint_fast8_t{ 1 };  ///< EXTINT11.
            static constexpr auto EXTINT12   = std::uint_fast8_t{ 1 };  ///< EXTINT12.
            static constexpr auto EXTINT13   = std::uint_fast8_t{ 1 };  ///< EXTINT13.
            static constexpr auto EXTINT14   = std::uint_fast8_t{ 1 };  ///< EXTINT14.
            static constexpr auto EXTINT15   = std::uint_fast8_t{ 1 };  ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ 16 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EXTINT0 = std::uint_fast8_t{}; ///< EXTINT0.
            static constexpr auto EXTINT1 = std::uint_fast8_t{ EXTINT0 + Size::EXTINT0 }; ///< EXTINT1.
            static constexpr auto EXTINT2 = std::uint_fast8_t{ EXTINT1 + Size::EXTINT1 }; ///< EXTINT2.
            static constexpr auto EXTINT3 = std::uint_fast8_t{ EXTINT2 + Size::EXTINT2 }; ///< EXTINT3.
            static constexpr auto EXTINT4 = std::uint_fast8_t{ EXTINT3 + Size::EXTINT3 }; ///< EXTINT4.
            static constexpr auto EXTINT5 = std::uint_fast8_t{ EXTINT4 + Size::EXTINT4 }; ///< EXTINT5.
            static constexpr auto EXTINT6 = std::uint_fast8_t{ EXTINT5 + Size::EXTINT5 }; ///< EXTINT6.
            static constexpr auto EXTINT7 = std::uint_fast8_t{ EXTINT6 + Size::EXTINT6 }; ///< EXTINT7.
            static constexpr auto EXTINT8 = std::uint_fast8_t{ EXTINT7 + Size::EXTINT7 }; ///< EXTINT8.
            static constexpr auto EXTINT9 = std::uint_fast8_t{ EXTINT8 + Size::EXTINT8 }; ///< EXTINT9.
            static constexpr auto EXTINT10 = std::uint_fast8_t{ EXTINT9 + Size::EXTINT9 }; ///< EXTINT10.
            static constexpr auto EXTINT11 = std::uint_fast8_t{ EXTINT10 + Size::EXTINT10 }; ///< EXTINT11.
            static constexpr auto EXTINT12 = std::uint_fast8_t{ EXTINT11 + Size::EXTINT11 }; ///< EXTINT12.
            static constexpr auto EXTINT13 = std::uint_fast8_t{ EXTINT12 + Size::EXTINT12 }; ///< EXTINT13.
            static constexpr auto EXTINT14 = std::uint_fast8_t{ EXTINT13 + Size::EXTINT13 }; ///< EXTINT14.
            static constexpr auto EXTINT15 = std::uint_fast8_t{ EXTINT14 + Size::EXTINT14 }; ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ EXTINT15 + Size::EXTINT15 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EXTINT0 = mask<std::uint32_t>( Size::EXTINT0, Bit::EXTINT0 ); ///< EXTINT0.
            static constexpr auto EXTINT1 = mask<std::uint32_t>( Size::EXTINT1, Bit::EXTINT1 ); ///< EXTINT1.
            static constexpr auto EXTINT2 = mask<std::uint32_t>( Size::EXTINT2, Bit::EXTINT2 ); ///< EXTINT2.
            static constexpr auto EXTINT3 = mask<std::uint32_t>( Size::EXTINT3, Bit::EXTINT3 ); ///< EXTINT3.
            static constexpr auto EXTINT4 = mask<std::uint32_t>( Size::EXTINT4, Bit::EXTINT4 ); ///< EXTINT4.
            static constexpr auto EXTINT5 = mask<std::uint32_t>( Size::EXTINT5, Bit::EXTINT5 ); ///< EXTINT5.
            static constexpr auto EXTINT6 = mask<std::uint32_t>( Size::EXTINT6, Bit::EXTINT6 ); ///< EXTINT6.
            static constexpr auto EXTINT7 = mask<std::uint32_t>( Size::EXTINT7, Bit::EXTINT7 ); ///< EXTINT7.
            static constexpr auto EXTINT8 = mask<std::uint32_t>( Size::EXTINT8, Bit::EXTINT8 ); ///< EXTINT8.
            static constexpr auto EXTINT9 = mask<std::uint32_t>( Size::EXTINT9, Bit::EXTINT9 ); ///< EXTINT9.
            static constexpr auto EXTINT10 = mask<std::uint32_t>( Size::EXTINT10, Bit::EXTINT10 ); ///< EXTINT10.
            static constexpr auto EXTINT11 = mask<std::uint32_t>( Size::EXTINT11, Bit::EXTINT11 ); ///< EXTINT11.
            static constexpr auto EXTINT12 = mask<std::uint32_t>( Size::EXTINT12, Bit::EXTINT12 ); ///< EXTINT12.
            static constexpr auto EXTINT13 = mask<std::uint32_t>( Size::EXTINT13, Bit::EXTINT13 ); ///< EXTINT13.
            static constexpr auto EXTINT14 = mask<std::uint32_t>( Size::EXTINT14, Bit::EXTINT14 ); ///< EXTINT14.
            static constexpr auto EXTINT15 = mask<std::uint32_t>( Size::EXTINT15, Bit::EXTINT15 ); ///< EXTINT15.
            static constexpr auto RESERVED16 = mask<std::uint32_t>( Size::RESERVED16, Bit::RESERVED16 ); ///< RESERVED16.
        };

        INTENCLR() = delete;

        INTENCLR( INTENCLR && ) = delete;

        INTENCLR( INTENCLR const & ) = delete;

        ~INTENCLR() = delete;

        auto operator=( INTENCLR && ) = delete;

        auto operator=( INTENCLR const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Set (INTENSET) register.
     *
     * This register has the following fields:
     * - External Interrupt 0 Enable (EXTINT0)
     * - External Interrupt 1 Enable (EXTINT1)
     * - External Interrupt 2 Enable (EXTINT2)
     * - External Interrupt 3 Enable (EXTINT3)
     * - External Interrupt 4 Enable (EXTINT4)
     * - External Interrupt 5 Enable (EXTINT5)
     * - External Interrupt 6 Enable (EXTINT6)
     * - External Interrupt 7 Enable (EXTINT7)
     * - External Interrupt 8 Enable (EXTINT8)
     * - External Interrupt 9 Enable (EXTINT9)
     * - External Interrupt 10 Enable (EXTINT10)
     * - External Interrupt 11 Enable (EXTINT11)
     * - External Interrupt 12 Enable (EXTINT12)
     * - External Interrupt 13 Enable (EXTINT13)
     * - External Interrupt 14 Enable (EXTINT14)
     * - External Interrupt 15 Enable (EXTINT15)
     */
    class INTENSET : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EXTINT0    = std::uint_fast8_t{ 1 };  ///< EXTINT0.
            static constexpr auto EXTINT1    = std::uint_fast8_t{ 1 };  ///< EXTINT1.
            static constexpr auto EXTINT2    = std::uint_fast8_t{ 1 };  ///< EXTINT2.
            static constexpr auto EXTINT3    = std::uint_fast8_t{ 1 };  ///< EXTINT3.
            static constexpr auto EXTINT4    = std::uint_fast8_t{ 1 };  ///< EXTINT4.
            static constexpr auto EXTINT5    = std::uint_fast8_t{ 1 };  ///< EXTINT5.
            static constexpr auto EXTINT6    = std::uint_fast8_t{ 1 };  ///< EXTINT6.
            static constexpr auto EXTINT7    = std::uint_fast8_t{ 1 };  ///< EXTINT7.
            static constexpr auto EXTINT8    = std::uint_fast8_t{ 1 };  ///< EXTINT8.
            static constexpr auto EXTINT9    = std::uint_fast8_t{ 1 };  ///< EXTINT9.
            static constexpr auto EXTINT10   = std::uint_fast8_t{ 1 };  ///< EXTINT10.
            static constexpr auto EXTINT11   = std::uint_fast8_t{ 1 };  ///< EXTINT11.
            static constexpr auto EXTINT12   = std::uint_fast8_t{ 1 };  ///< EXTINT12.
            static constexpr auto EXTINT13   = std::uint_fast8_t{ 1 };  ///< EXTINT13.
            static constexpr auto EXTINT14   = std::uint_fast8_t{ 1 };  ///< EXTINT14.
            static constexpr auto EXTINT15   = std::uint_fast8_t{ 1 };  ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ 16 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EXTINT0 = std::uint_fast8_t{}; ///< EXTINT0.
            static constexpr auto EXTINT1 = std::uint_fast8_t{ EXTINT0 + Size::EXTINT0 }; ///< EXTINT1.
            static constexpr auto EXTINT2 = std::uint_fast8_t{ EXTINT1 + Size::EXTINT1 }; ///< EXTINT2.
            static constexpr auto EXTINT3 = std::uint_fast8_t{ EXTINT2 + Size::EXTINT2 }; ///< EXTINT3.
            static constexpr auto EXTINT4 = std::uint_fast8_t{ EXTINT3 + Size::EXTINT3 }; ///< EXTINT4.
            static constexpr auto EXTINT5 = std::uint_fast8_t{ EXTINT4 + Size::EXTINT4 }; ///< EXTINT5.
            static constexpr auto EXTINT6 = std::uint_fast8_t{ EXTINT5 + Size::EXTINT5 }; ///< EXTINT6.
            static constexpr auto EXTINT7 = std::uint_fast8_t{ EXTINT6 + Size::EXTINT6 }; ///< EXTINT7.
            static constexpr auto EXTINT8 = std::uint_fast8_t{ EXTINT7 + Size::EXTINT7 }; ///< EXTINT8.
            static constexpr auto EXTINT9 = std::uint_fast8_t{ EXTINT8 + Size::EXTINT8 }; ///< EXTINT9.
            static constexpr auto EXTINT10 = std::uint_fast8_t{ EXTINT9 + Size::EXTINT9 }; ///< EXTINT10.
            static constexpr auto EXTINT11 = std::uint_fast8_t{ EXTINT10 + Size::EXTINT10 }; ///< EXTINT11.
            static constexpr auto EXTINT12 = std::uint_fast8_t{ EXTINT11 + Size::EXTINT11 }; ///< EXTINT12.
            static constexpr auto EXTINT13 = std::uint_fast8_t{ EXTINT12 + Size::EXTINT12 }; ///< EXTINT13.
            static constexpr auto EXTINT14 = std::uint_fast8_t{ EXTINT13 + Size::EXTINT13 }; ///< EXTINT14.
            static constexpr auto EXTINT15 = std::uint_fast8_t{ EXTINT14 + Size::EXTINT14 }; ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ EXTINT15 + Size::EXTINT15 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EXTINT0 = mask<std::uint32_t>( Size::EXTINT0, Bit::EXTINT0 ); ///< EXTINT0.
            static constexpr auto EXTINT1 = mask<std::uint32_t>( Size::EXTINT1, Bit::EXTINT1 ); ///< EXTINT1.
            static constexpr auto EXTINT2 = mask<std::uint32_t>( Size::EXTINT2, Bit::EXTINT2 ); ///< EXTINT2.
            static constexpr auto EXTINT3 = mask<std::uint32_t>( Size::EXTINT3, Bit::EXTINT3 ); ///< EXTINT3.
            static constexpr auto EXTINT4 = mask<std::uint32_t>( Size::EXTINT4, Bit::EXTINT4 ); ///< EXTINT4.
            static constexpr auto EXTINT5 = mask<std::uint32_t>( Size::EXTINT5, Bit::EXTINT5 ); ///< EXTINT5.
            static constexpr auto EXTINT6 = mask<std::uint32_t>( Size::EXTINT6, Bit::EXTINT6 ); ///< EXTINT6.
            static constexpr auto EXTINT7 = mask<std::uint32_t>( Size::EXTINT7, Bit::EXTINT7 ); ///< EXTINT7.
            static constexpr auto EXTINT8 = mask<std::uint32_t>( Size::EXTINT8, Bit::EXTINT8 ); ///< EXTINT8.
            static constexpr auto EXTINT9 = mask<std::uint32_t>( Size::EXTINT9, Bit::EXTINT9 ); ///< EXTINT9.
            static constexpr auto EXTINT10 = mask<std::uint32_t>( Size::EXTINT10, Bit::EXTINT10 ); ///< EXTINT10.
            static constexpr auto EXTINT11 = mask<std::uint32_t>( Size::EXTINT11, Bit::EXTINT11 ); ///< EXTINT11.
            static constexpr auto EXTINT12 = mask<std::uint32_t>( Size::EXTINT12, Bit::EXTINT12 ); ///< EXTINT12.
            static constexpr auto EXTINT13 = mask<std::uint32_t>( Size::EXTINT13, Bit::EXTINT13 ); ///< EXTINT13.
            static constexpr auto EXTINT14 = mask<std::uint32_t>( Size::EXTINT14, Bit::EXTINT14 ); ///< EXTINT14.
            static constexpr auto EXTINT15 = mask<std::uint32_t>( Size::EXTINT15, Bit::EXTINT15 ); ///< EXTINT15.
            static constexpr auto RESERVED16 = mask<std::uint32_t>( Size::RESERVED16, Bit::RESERVED16 ); ///< RESERVED16.
        };

        INTENSET() = delete;

        INTENSET( INTENSET && ) = delete;

        INTENSET( INTENSET const & ) = delete;

        ~INTENSET() = delete;

        auto operator=( INTENSET && ) = delete;

        auto operator=( INTENSET const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Interrupt Flag Status and Clear (INTFLAG) register.
     *
     * This register has the following fields:
     * - External Interrupt 0 (EXTINT0)
     * - External Interrupt 1 (EXTINT1)
     * - External Interrupt 2 (EXTINT2)
     * - External Interrupt 3 (EXTINT3)
     * - External Interrupt 4 (EXTINT4)
     * - External Interrupt 5 (EXTINT5)
     * - External Interrupt 6 (EXTINT6)
     * - External Interrupt 7 (EXTINT7)
     * - External Interrupt 8 (EXTINT8)
     * - External Interrupt 9 (EXTINT9)
     * - External Interrupt 10 (EXTINT10)
     * - External Interrupt 11 (EXTINT11)
     * - External Interrupt 12 (EXTINT12)
     * - External Interrupt 13 (EXTINT13)
     * - External Interrupt 14 (EXTINT14)
     * - External Interrupt 15 (EXTINT15)
     */
    class INTFLAG : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto EXTINT0    = std::uint_fast8_t{ 1 };  ///< EXTINT0.
            static constexpr auto EXTINT1    = std::uint_fast8_t{ 1 };  ///< EXTINT1.
            static constexpr auto EXTINT2    = std::uint_fast8_t{ 1 };  ///< EXTINT2.
            static constexpr auto EXTINT3    = std::uint_fast8_t{ 1 };  ///< EXTINT3.
            static constexpr auto EXTINT4    = std::uint_fast8_t{ 1 };  ///< EXTINT4.
            static constexpr auto EXTINT5    = std::uint_fast8_t{ 1 };  ///< EXTINT5.
            static constexpr auto EXTINT6    = std::uint_fast8_t{ 1 };  ///< EXTINT6.
            static constexpr auto EXTINT7    = std::uint_fast8_t{ 1 };  ///< EXTINT7.
            static constexpr auto EXTINT8    = std::uint_fast8_t{ 1 };  ///< EXTINT8.
            static constexpr auto EXTINT9    = std::uint_fast8_t{ 1 };  ///< EXTINT9.
            static constexpr auto EXTINT10   = std::uint_fast8_t{ 1 };  ///< EXTINT10.
            static constexpr auto EXTINT11   = std::uint_fast8_t{ 1 };  ///< EXTINT11.
            static constexpr auto EXTINT12   = std::uint_fast8_t{ 1 };  ///< EXTINT12.
            static constexpr auto EXTINT13   = std::uint_fast8_t{ 1 };  ///< EXTINT13.
            static constexpr auto EXTINT14   = std::uint_fast8_t{ 1 };  ///< EXTINT14.
            static constexpr auto EXTINT15   = std::uint_fast8_t{ 1 };  ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ 16 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto EXTINT0 = std::uint_fast8_t{}; ///< EXTINT0.
            static constexpr auto EXTINT1 = std::uint_fast8_t{ EXTINT0 + Size::EXTINT0 }; ///< EXTINT1.
            static constexpr auto EXTINT2 = std::uint_fast8_t{ EXTINT1 + Size::EXTINT1 }; ///< EXTINT2.
            static constexpr auto EXTINT3 = std::uint_fast8_t{ EXTINT2 + Size::EXTINT2 }; ///< EXTINT3.
            static constexpr auto EXTINT4 = std::uint_fast8_t{ EXTINT3 + Size::EXTINT3 }; ///< EXTINT4.
            static constexpr auto EXTINT5 = std::uint_fast8_t{ EXTINT4 + Size::EXTINT4 }; ///< EXTINT5.
            static constexpr auto EXTINT6 = std::uint_fast8_t{ EXTINT5 + Size::EXTINT5 }; ///< EXTINT6.
            static constexpr auto EXTINT7 = std::uint_fast8_t{ EXTINT6 + Size::EXTINT6 }; ///< EXTINT7.
            static constexpr auto EXTINT8 = std::uint_fast8_t{ EXTINT7 + Size::EXTINT7 }; ///< EXTINT8.
            static constexpr auto EXTINT9 = std::uint_fast8_t{ EXTINT8 + Size::EXTINT8 }; ///< EXTINT9.
            static constexpr auto EXTINT10 = std::uint_fast8_t{ EXTINT9 + Size::EXTINT9 }; ///< EXTINT10.
            static constexpr auto EXTINT11 = std::uint_fast8_t{ EXTINT10 + Size::EXTINT10 }; ///< EXTINT11.
            static constexpr auto EXTINT12 = std::uint_fast8_t{ EXTINT11 + Size::EXTINT11 }; ///< EXTINT12.
            static constexpr auto EXTINT13 = std::uint_fast8_t{ EXTINT12 + Size::EXTINT12 }; ///< EXTINT13.
            static constexpr auto EXTINT14 = std::uint_fast8_t{ EXTINT13 + Size::EXTINT13 }; ///< EXTINT14.
            static constexpr auto EXTINT15 = std::uint_fast8_t{ EXTINT14 + Size::EXTINT14 }; ///< EXTINT15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ EXTINT15 + Size::EXTINT15 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto EXTINT0 = mask<std::uint32_t>( Size::EXTINT0, Bit::EXTINT0 ); ///< EXTINT0.
            static constexpr auto EXTINT1 = mask<std::uint32_t>( Size::EXTINT1, Bit::EXTINT1 ); ///< EXTINT1.
            static constexpr auto EXTINT2 = mask<std::uint32_t>( Size::EXTINT2, Bit::EXTINT2 ); ///< EXTINT2.
            static constexpr auto EXTINT3 = mask<std::uint32_t>( Size::EXTINT3, Bit::EXTINT3 ); ///< EXTINT3.
            static constexpr auto EXTINT4 = mask<std::uint32_t>( Size::EXTINT4, Bit::EXTINT4 ); ///< EXTINT4.
            static constexpr auto EXTINT5 = mask<std::uint32_t>( Size::EXTINT5, Bit::EXTINT5 ); ///< EXTINT5.
            static constexpr auto EXTINT6 = mask<std::uint32_t>( Size::EXTINT6, Bit::EXTINT6 ); ///< EXTINT6.
            static constexpr auto EXTINT7 = mask<std::uint32_t>( Size::EXTINT7, Bit::EXTINT7 ); ///< EXTINT7.
            static constexpr auto EXTINT8 = mask<std::uint32_t>( Size::EXTINT8, Bit::EXTINT8 ); ///< EXTINT8.
            static constexpr auto EXTINT9 = mask<std::uint32_t>( Size::EXTINT9, Bit::EXTINT9 ); ///< EXTINT9.
            static constexpr auto EXTINT10 = mask<std::uint32_t>( Size::EXTINT10, Bit::EXTINT10 ); ///< EXTINT10.
            static constexpr auto EXTINT11 = mask<std::uint32_t>( Size::EXTINT11, Bit::EXTINT11 ); ///< EXTINT11.
            static constexpr auto EXTINT12 = mask<std::uint32_t>( Size::EXTINT12, Bit::EXTINT12 ); ///< EXTINT12.
            static constexpr auto EXTINT13 = mask<std::uint32_t>( Size::EXTINT13, Bit::EXTINT13 ); ///< EXTINT13.
            static constexpr auto EXTINT14 = mask<std::uint32_t>( Size::EXTINT14, Bit::EXTINT14 ); ///< EXTINT14.
            static constexpr auto EXTINT15 = mask<std::uint32_t>( Size::EXTINT15, Bit::EXTINT15 ); ///< EXTINT15.
            static constexpr auto RESERVED16 = mask<std::uint32_t>( Size::RESERVED16, Bit::RESERVED16 ); ///< RESERVED16.
        };

        INTFLAG() = delete;

        INTFLAG( INTFLAG && ) = delete;

        INTFLAG( INTFLAG const & ) = delete;

        ~INTFLAG() = delete;

        auto operator=( INTFLAG && ) = delete;

        auto operator=( INTFLAG const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Wake-Up Enable (WAKEUP) register.
     *
     * This register has the following fields:
     * - External Interrupt 0 Wake-up Enable (WAKEUPEN0)
     * - External Interrupt 1 Wake-up Enable (WAKEUPEN1)
     * - External Interrupt 2 Wake-up Enable (WAKEUPEN2)
     * - External Interrupt 3 Wake-up Enable (WAKEUPEN3)
     * - External Interrupt 4 Wake-up Enable (WAKEUPEN4)
     * - External Interrupt 5 Wake-up Enable (WAKEUPEN5)
     * - External Interrupt 6 Wake-up Enable (WAKEUPEN6)
     * - External Interrupt 7 Wake-up Enable (WAKEUPEN7)
     * - External Interrupt 8 Wake-up Enable (WAKEUPEN8)
     * - External Interrupt 9 Wake-up Enable (WAKEUPEN9)
     * - External Interrupt 10 Wake-up Enable (WAKEUPEN10)
     * - External Interrupt 11 Wake-up Enable (WAKEUPEN11)
     * - External Interrupt 12 Wake-up Enable (WAKEUPEN12)
     * - External Interrupt 13 Wake-up Enable (WAKEUPEN13)
     * - External Interrupt 14 Wake-up Enable (WAKEUPEN14)
     * - External Interrupt 15 Wake-up Enable (WAKEUPEN15)
     */
    class WAKEUP : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto WAKEUPEN0  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN0.
            static constexpr auto WAKEUPEN1  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN1.
            static constexpr auto WAKEUPEN2  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN2.
            static constexpr auto WAKEUPEN3  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN3.
            static constexpr auto WAKEUPEN4  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN4.
            static constexpr auto WAKEUPEN5  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN5.
            static constexpr auto WAKEUPEN6  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN6.
            static constexpr auto WAKEUPEN7  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN7.
            static constexpr auto WAKEUPEN8  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN8.
            static constexpr auto WAKEUPEN9  = std::uint_fast8_t{ 1 };  ///< WAKEUPEN9.
            static constexpr auto WAKEUPEN10 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN10.
            static constexpr auto WAKEUPEN11 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN11.
            static constexpr auto WAKEUPEN12 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN12.
            static constexpr auto WAKEUPEN13 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN13.
            static constexpr auto WAKEUPEN14 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN14.
            static constexpr auto WAKEUPEN15 = std::uint_fast8_t{ 1 };  ///< WAKEUPEN15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ 16 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto WAKEUPEN0 = std::uint_fast8_t{}; ///< WAKEUPEN0.
            static constexpr auto WAKEUPEN1 = std::uint_fast8_t{ WAKEUPEN0 + Size::WAKEUPEN0 }; ///< WAKEUPEN1.
            static constexpr auto WAKEUPEN2 = std::uint_fast8_t{ WAKEUPEN1 + Size::WAKEUPEN1 }; ///< WAKEUPEN2.
            static constexpr auto WAKEUPEN3 = std::uint_fast8_t{ WAKEUPEN2 + Size::WAKEUPEN2 }; ///< WAKEUPEN3.
            static constexpr auto WAKEUPEN4 = std::uint_fast8_t{ WAKEUPEN3 + Size::WAKEUPEN3 }; ///< WAKEUPEN4.
            static constexpr auto WAKEUPEN5 = std::uint_fast8_t{ WAKEUPEN4 + Size::WAKEUPEN4 }; ///< WAKEUPEN5.
            static constexpr auto WAKEUPEN6 = std::uint_fast8_t{ WAKEUPEN5 + Size::WAKEUPEN5 }; ///< WAKEUPEN6.
            static constexpr auto WAKEUPEN7 = std::uint_fast8_t{ WAKEUPEN6 + Size::WAKEUPEN6 }; ///< WAKEUPEN7.
            static constexpr auto WAKEUPEN8 = std::uint_fast8_t{ WAKEUPEN7 + Size::WAKEUPEN7 }; ///< WAKEUPEN8.
            static constexpr auto WAKEUPEN9 = std::uint_fast8_t{ WAKEUPEN8 + Size::WAKEUPEN8 }; ///< WAKEUPEN9.
            static constexpr auto WAKEUPEN10 = std::uint_fast8_t{ WAKEUPEN9 + Size::WAKEUPEN9 }; ///< WAKEUPEN10.
            static constexpr auto WAKEUPEN11 = std::uint_fast8_t{ WAKEUPEN10 + Size::WAKEUPEN10 }; ///< WAKEUPEN11.
            static constexpr auto WAKEUPEN12 = std::uint_fast8_t{ WAKEUPEN11 + Size::WAKEUPEN11 }; ///< WAKEUPEN12.
            static constexpr auto WAKEUPEN13 = std::uint_fast8_t{ WAKEUPEN12 + Size::WAKEUPEN12 }; ///< WAKEUPEN13.
            static constexpr auto WAKEUPEN14 = std::uint_fast8_t{ WAKEUPEN13 + Size::WAKEUPEN13 }; ///< WAKEUPEN14.
            static constexpr auto WAKEUPEN15 = std::uint_fast8_t{ WAKEUPEN14 + Size::WAKEUPEN14 }; ///< WAKEUPEN15.
            static constexpr auto RESERVED16 = std::uint_fast8_t{ WAKEUPEN15 + Size::WAKEUPEN15 }; ///< RESERVED16.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto WAKEUPEN0 = mask<std::uint32_t>( Size::WAKEUPEN0, Bit::WAKEUPEN0 ); ///< WAKEUPEN0.
            static constexpr auto WAKEUPEN1 = mask<std::uint32_t>( Size::WAKEUPEN1, Bit::WAKEUPEN1 ); ///< WAKEUPEN1.
            static constexpr auto WAKEUPEN2 = mask<std::uint32_t>( Size::WAKEUPEN2, Bit::WAKEUPEN2 ); ///< WAKEUPEN2.
            static constexpr auto WAKEUPEN3 = mask<std::uint32_t>( Size::WAKEUPEN3, Bit::WAKEUPEN3 ); ///< WAKEUPEN3.
            static constexpr auto WAKEUPEN4 = mask<std::uint32_t>( Size::WAKEUPEN4, Bit::WAKEUPEN4 ); ///< WAKEUPEN4.
            static constexpr auto WAKEUPEN5 = mask<std::uint32_t>( Size::WAKEUPEN5, Bit::WAKEUPEN5 ); ///< WAKEUPEN5.
            static constexpr auto WAKEUPEN6 = mask<std::uint32_t>( Size::WAKEUPEN6, Bit::WAKEUPEN6 ); ///< WAKEUPEN6.
            static constexpr auto WAKEUPEN7 = mask<std::uint32_t>( Size::WAKEUPEN7, Bit::WAKEUPEN7 ); ///< WAKEUPEN7.
            static constexpr auto WAKEUPEN8 = mask<std::uint32_t>( Size::WAKEUPEN8, Bit::WAKEUPEN8 ); ///< WAKEUPEN8.
            static constexpr auto WAKEUPEN9 = mask<std::uint32_t>( Size::WAKEUPEN9, Bit::WAKEUPEN9 ); ///< WAKEUPEN9.
            static constexpr auto WAKEUPEN10 = mask<std::uint32_t>( Size::WAKEUPEN10, Bit::WAKEUPEN10 ); ///< WAKEUPEN10.
            static constexpr auto WAKEUPEN11 = mask<std::uint32_t>( Size::WAKEUPEN11, Bit::WAKEUPEN11 ); ///< WAKEUPEN11.
            static constexpr auto WAKEUPEN12 = mask<std::uint32_t>( Size::WAKEUPEN12, Bit::WAKEUPEN12 ); ///< WAKEUPEN12.
            static constexpr auto WAKEUPEN13 = mask<std::uint32_t>( Size::WAKEUPEN13, Bit::WAKEUPEN13 ); ///< WAKEUPEN13.
            static constexpr auto WAKEUPEN14 = mask<std::uint32_t>( Size::WAKEUPEN14, Bit::WAKEUPEN14 ); ///< WAKEUPEN14.
            static constexpr auto WAKEUPEN15 = mask<std::uint32_t>( Size::WAKEUPEN15, Bit::WAKEUPEN15 ); ///< WAKEUPEN15.
            static constexpr auto RESERVED16 = mask<std::uint32_t>( Size::RESERVED16, Bit::RESERVED16 ); ///< RESERVED16.
        };

        WAKEUP() = delete;

        WAKEUP( WAKEUP && ) = delete;

        WAKEUP( WAKEUP const & ) = delete;

        ~WAKEUP() = delete;

        auto operator=( WAKEUP && ) = delete;

        auto operator=( WAKEUP const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Configuration (CONFIG) register.
     *
     * This register has the following fields:
     * - Input Sense 0 Configuration (SENSE0)
     * - Filter 0 Enable (FILTEN0)
     * - Input Sense 1 Configuration (SENSE1)
     * - Filter 1 Enable (FILTEN1)
     * - Input Sense 2 Configuration (SENSE2)
     * - Filter 2 Enable (FILTEN2)
     * - Input Sense 3 Configuration (SENSE3)
     * - Filter 3 Enable (FILTEN3)
     * - Input Sense 4 Configuration (SENSE4)
     * - Filter 4 Enable (FILTEN4)
     * - Input Sense 5 Configuration (SENSE5)
     * - Filter 5 Enable (FILTEN5)
     * - Input Sense 6 Configuration (SENSE6)
     * - Filter 6 Enable (FILTEN6)
     * - Input Sense 7 Configuration (SENSE7)
     * - Filter 7 Enable (FILTEN7)
     */
    class CONFIG : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto SENSE0  = std::uint_fast8_t{ 3 }; ///< SENSE0.
            static constexpr auto FILTEN0 = std::uint_fast8_t{ 1 }; ///< FILTEN0.
            static constexpr auto SENSE1  = std::uint_fast8_t{ 3 }; ///< SENSE1.
            static constexpr auto FILTEN1 = std::uint_fast8_t{ 1 }; ///< FILTEN1.
            static constexpr auto SENSE2  = std::uint_fast8_t{ 3 }; ///< SENSE2.
            static constexpr auto FILTEN2 = std::uint_fast8_t{ 1 }; ///< FILTEN2.
            static constexpr auto SENSE3  = std::uint_fast8_t{ 3 }; ///< SENSE3.
            static constexpr auto FILTEN3 = std::uint_fast8_t{ 1 }; ///< FILTEN3.
            static constexpr auto SENSE4  = std::uint_fast8_t{ 3 }; ///< SENSE4.
            static constexpr auto FILTEN4 = std::uint_fast8_t{ 1 }; ///< FILTEN4.
            static constexpr auto SENSE5  = std::uint_fast8_t{ 3 }; ///< SENSE5.
            static constexpr auto FILTEN5 = std::uint_fast8_t{ 1 }; ///< FILTEN5.
            static constexpr auto SENSE6  = std::uint_fast8_t{ 3 }; ///< SENSE6.
            static constexpr auto FILTEN6 = std::uint_fast8_t{ 1 }; ///< FILTEN6.
            static constexpr auto SENSE7  = std::uint_fast8_t{ 3 }; ///< SENSE7.
            static constexpr auto FILTEN7 = std::uint_fast8_t{ 1 }; ///< FILTEN7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto SENSE0 = std::uint_fast8_t{}; ///< SENSE0.
            static constexpr auto FILTEN0 = std::uint_fast8_t{ SENSE0 + Size::SENSE0 }; ///< FILTEN0.
            static constexpr auto SENSE1 = std::uint_fast8_t{ FILTEN0 + Size::FILTEN0 }; ///< SENSE1.
            static constexpr auto FILTEN1 = std::uint_fast8_t{ SENSE1 + Size::SENSE1 }; ///< FILTEN1.
            static constexpr auto SENSE2 = std::uint_fast8_t{ FILTEN1 + Size::FILTEN1 }; ///< SENSE2.
            static constexpr auto FILTEN2 = std::uint_fast8_t{ SENSE2 + Size::SENSE2 }; ///< FILTEN2.
            static constexpr auto SENSE3 = std::uint_fast8_t{ FILTEN2 + Size::FILTEN2 }; ///< SENSE3.
            static constexpr auto FILTEN3 = std::uint_fast8_t{ SENSE3 + Size::SENSE3 }; ///< FILTEN3.
            static constexpr auto SENSE4 = std::uint_fast8_t{ FILTEN3 + Size::FILTEN3 }; ///< SENSE4.
            static constexpr auto FILTEN4 = std::uint_fast8_t{ SENSE4 + Size::SENSE4 }; ///< FILTEN4.
            static constexpr auto SENSE5 = std::uint_fast8_t{ FILTEN4 + Size::FILTEN4 }; ///< SENSE5.
            static constexpr auto FILTEN5 = std::uint_fast8_t{ SENSE5 + Size::SENSE5 }; ///< FILTEN5.
            static constexpr auto SENSE6 = std::uint_fast8_t{ FILTEN5 + Size::FILTEN5 }; ///< SENSE6.
            static constexpr auto FILTEN6 = std::uint_fast8_t{ SENSE6 + Size::SENSE6 }; ///< FILTEN6.
            static constexpr auto SENSE7 = std::uint_fast8_t{ FILTEN6 + Size::FILTEN6 }; ///< SENSE7.
            static constexpr auto FILTEN7 = std::uint_fast8_t{ SENSE7 + Size::SENSE7 }; ///< FILTEN7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto SENSE0 = mask<std::uint32_t>( Size::SENSE0, Bit::SENSE0 ); ///< SENSE0.
            static constexpr auto FILTEN0 = mask<std::uint32_t>( Size::FILTEN0, Bit::FILTEN0 ); ///< FILTEN0.
            static constexpr auto SENSE1 = mask<std::uint32_t>( Size::SENSE1, Bit::SENSE1 ); ///< SENSE1.
            static constexpr auto FILTEN1 = mask<std::uint32_t>( Size::FILTEN1, Bit::FILTEN1 ); ///< FILTEN1.
            static constexpr auto SENSE2 = mask<std::uint32_t>( Size::SENSE2, Bit::SENSE2 ); ///< SENSE2.
            static constexpr auto FILTEN2 = mask<std::uint32_t>( Size::FILTEN2, Bit::FILTEN2 ); ///< FILTEN2.
            static constexpr auto SENSE3 = mask<std::uint32_t>( Size::SENSE3, Bit::SENSE3 ); ///< SENSE3.
            static constexpr auto FILTEN3 = mask<std::uint32_t>( Size::FILTEN3, Bit::FILTEN3 ); ///< FILTEN3.
            static constexpr auto SENSE4 = mask<std::uint32_t>( Size::SENSE4, Bit::SENSE4 ); ///< SENSE4.
            static constexpr auto FILTEN4 = mask<std::uint32_t>( Size::FILTEN4, Bit::FILTEN4 ); ///< FILTEN4.
            static constexpr auto SENSE5 = mask<std::uint32_t>( Size::SENSE5, Bit::SENSE5 ); ///< SENSE5.
            static constexpr auto FILTEN5 = mask<std::uint32_t>( Size::FILTEN5, Bit::FILTEN5 ); ///< FILTEN5.
            static constexpr auto SENSE6 = mask<std::uint32_t>( Size::SENSE6, Bit::SENSE6 ); ///< SENSE6.
            static constexpr auto FILTEN6 = mask<std::uint32_t>( Size::FILTEN6, Bit::FILTEN6 ); ///< FILTEN6.
            static constexpr auto SENSE7 = mask<std::uint32_t>( Size::SENSE7, Bit::SENSE7 ); ///< SENSE7.
            static constexpr auto FILTEN7 = mask<std::uint32_t>( Size::FILTEN7, Bit::FILTEN7 ); ///< FILTEN7.
        };

        /**
         * \brief SENSE0.
         */
        enum SENSE0 : std::uint32_t {
            SENSE0_NONE = 0x0 << Bit::SENSE0, ///< No detection.
            SENSE0_RISE = 0x1 << Bit::SENSE0, ///< Rising-edge detection.
            SENSE0_FALL = 0x2 << Bit::SENSE0, ///< Falling-edge detection.
            SENSE0_BOTH = 0x3 << Bit::SENSE0, ///< Both-edges detection.
            SENSE0_HIGH = 0x4 << Bit::SENSE0, ///< High-level detection.
            SENSE0_LOW  = 0x5 << Bit::SENSE0, ///< Low-level detection.
        };

        /**
         * \brief SENSE1.
         */
        enum SENSE1 : std::uint32_t {
            SENSE1_NONE = 0x0 << Bit::SENSE1, ///< No detection.
            SENSE1_RISE = 0x1 << Bit::SENSE1, ///< Rising-edge detection.
            SENSE1_FALL = 0x2 << Bit::SENSE1, ///< Falling-edge detection.
            SENSE1_BOTH = 0x3 << Bit::SENSE1, ///< Both-edges detection.
            SENSE1_HIGH = 0x4 << Bit::SENSE1, ///< High-level detection.
            SENSE1_LOW  = 0x5 << Bit::SENSE1, ///< Low-level detection.
        };

        /**
         * \brief SENSE2.
         */
        enum SENSE2 : std::uint32_t {
            SENSE2_NONE = 0x0 << Bit::SENSE2, ///< No detection.
            SENSE2_RISE = 0x1 << Bit::SENSE2, ///< Rising-edge detection.
            SENSE2_FALL = 0x2 << Bit::SENSE2, ///< Falling-edge detection.
            SENSE2_BOTH = 0x3 << Bit::SENSE2, ///< Both-edges detection.
            SENSE2_HIGH = 0x4 << Bit::SENSE2, ///< High-level detection.
            SENSE2_LOW  = 0x5 << Bit::SENSE2, ///< Low-level detection.
        };

        /**
         * \brief SENSE3.
         */
        enum SENSE3 : std::uint32_t {
            SENSE3_NONE = 0x0 << Bit::SENSE3, ///< No detection.
            SENSE3_RISE = 0x1 << Bit::SENSE3, ///< Rising-edge detection.
            SENSE3_FALL = 0x2 << Bit::SENSE3, ///< Falling-edge detection.
            SENSE3_BOTH = 0x3 << Bit::SENSE3, ///< Both-edges detection.
            SENSE3_HIGH = 0x4 << Bit::SENSE3, ///< High-level detection.
            SENSE3_LOW  = 0x5 << Bit::SENSE3, ///< Low-level detection.
        };

        /**
         * \brief SENSE4.
         */
        enum SENSE4 : std::uint32_t {
            SENSE4_NONE = 0x0 << Bit::SENSE4, ///< No detection.
            SENSE4_RISE = 0x1 << Bit::SENSE4, ///< Rising-edge detection.
            SENSE4_FALL = 0x2 << Bit::SENSE4, ///< Falling-edge detection.
            SENSE4_BOTH = 0x3 << Bit::SENSE4, ///< Both-edges detection.
            SENSE4_HIGH = 0x4 << Bit::SENSE4, ///< High-level detection.
            SENSE4_LOW  = 0x5 << Bit::SENSE4, ///< Low-level detection.
        };

        /**
         * \brief SENSE5.
         */
        enum SENSE5 : std::uint32_t {
            SENSE5_NONE = 0x0 << Bit::SENSE5, ///< No detection.
            SENSE5_RISE = 0x1 << Bit::SENSE5, ///< Rising-edge detection.
            SENSE5_FALL = 0x2 << Bit::SENSE5, ///< Falling-edge detection.
            SENSE5_BOTH = 0x3 << Bit::SENSE5, ///< Both-edges detection.
            SENSE5_HIGH = 0x4 << Bit::SENSE5, ///< High-level detection.
            SENSE5_LOW  = 0x5 << Bit::SENSE5, ///< Low-level detection.
        };

        /**
         * \brief SENSE6.
         */
        enum SENSE6 : std::uint32_t {
            SENSE6_NONE = 0x0 << Bit::SENSE6, ///< No detection.
            SENSE6_RISE = 0x1 << Bit::SENSE6, ///< Rising-edge detection.
            SENSE6_FALL = 0x2 << Bit::SENSE6, ///< Falling-edge detection.
            SENSE6_BOTH = 0x3 << Bit::SENSE6, ///< Both-edges detection.
            SENSE6_HIGH = 0x4 << Bit::SENSE6, ///< High-level detection.
            SENSE6_LOW  = 0x5 << Bit::SENSE6, ///< Low-level detection.
        };

        /**
         * \brief SENSE7.
         */
        enum SENSE7 : std::uint32_t {
            SENSE7_NONE = 0x0 << Bit::SENSE7, ///< No detection.
            SENSE7_RISE = 0x1 << Bit::SENSE7, ///< Rising-edge detection.
            SENSE7_FALL = 0x2 << Bit::SENSE7, ///< Falling-edge detection.
            SENSE7_BOTH = 0x3 << Bit::SENSE7, ///< Both-edges detection.
            SENSE7_HIGH = 0x4 << Bit::SENSE7, ///< High-level detection.
            SENSE7_LOW  = 0x5 << Bit::SENSE7, ///< Low-level detection.
        };

        CONFIG() = delete;

        CONFIG( CONFIG && ) = delete;

        CONFIG( CONFIG const & ) = delete;

        ~CONFIG() = delete;

        auto operator=( CONFIG && ) = delete;

        auto operator=( CONFIG const & ) = delete;

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
     * \brief NMICTRL.
     */
    NMICTRL nmictrl;

    /**
     * \brief NMIFLAG.
     */
    NMIFLAG nmiflag;

    /**
     * \brief EVCTRL.
     */
    EVCTRL evctrl;

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
     * \brief WAKEUP.
     */
    WAKEUP wakeup;

    /**
     * \brief CONFIG.
     */
    CONFIG config[ ( ( 0x1C - 0x18 ) + 4 ) / 4 ];

    EIC() = delete;

    EIC( EIC && ) = delete;

    EIC( EIC const & ) = delete;

    ~EIC() = delete;

    auto operator=( EIC && ) = delete;

    auto operator=( EIC const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_EIC_H
