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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_RTC_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_RTC_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Real-Time Counter (RTC) peripheral.
 */
class RTC {
  public:
    /**
     * \brief 32-bit Counter (MODE0) operating mode.
     */
    class MODE0 {
      public:
        /**
         * \brief Control (CTRL) register.
         *
         * This register has the following fields:
         * - Software Reset (SWRST)
         * - Enable (ENABLE)
         * - Operating Mode (MODE)
         * - Clear on Match (MATCHCLR)
         * - Prescaler (PRESCALER)
         */
        class CTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto SWRST      = std::uint_fast8_t{ 1 }; ///< SWRST.
                static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
                static constexpr auto MODE       = std::uint_fast8_t{ 2 }; ///< MODE.
                static constexpr auto RESERVED4  = std::uint_fast8_t{ 3 }; ///< RESERVED4.
                static constexpr auto MATCHCLR   = std::uint_fast8_t{ 1 }; ///< MATCHCLR.
                static constexpr auto PRESCALER  = std::uint_fast8_t{ 4 }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ 4 }; ///< RESERVED12.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto SWRST = std::uint_fast8_t{}; ///< SWRST.
                static constexpr auto ENABLE = std::uint_fast8_t{ SWRST + Size::SWRST }; ///< ENABLE.
                static constexpr auto MODE = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< MODE.
                static constexpr auto RESERVED4 = std::uint_fast8_t{ MODE + Size::MODE }; ///< RESERVED4.
                static constexpr auto MATCHCLR = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< MATCHCLR.
                static constexpr auto PRESCALER = std::uint_fast8_t{ MATCHCLR + Size::MATCHCLR }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ PRESCALER + Size::PRESCALER }; ///< RESERVED12.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto SWRST = mask<std::uint16_t>( Size::SWRST, Bit::SWRST ); ///< SWRST.
                static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
                static constexpr auto MODE = mask<std::uint16_t>( Size::MODE, Bit::MODE ); ///< MODE.
                static constexpr auto RESERVED4 = mask<std::uint16_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
                static constexpr auto MATCHCLR = mask<std::uint16_t>( Size::MATCHCLR, Bit::MATCHCLR ); ///< MATCHCLR.
                static constexpr auto PRESCALER = mask<std::uint16_t>( Size::PRESCALER, Bit::PRESCALER ); ///< PRESCALER.
                static constexpr auto RESERVED12 = mask<std::uint16_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            };

            /**
             * \brief MODE.
             */
            enum MODE : std::uint16_t {
                MODE_COUNT32 = 0x0 << Bit::MODE, ///< 32-bit counter.
            };

            /**
             * \brief PRESCALER.
             */
            enum PRESCALER : std::uint16_t {
                PRESCALER_DIV1   = 0x0 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1.
                PRESCALER_DIV2   = 0x1 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/2.
                PRESCALER_DIV4   = 0x2 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/4.
                PRESCALER_DIV8   = 0x3 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/8.
                PRESCALER_DIV16  = 0x4 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/16.
                PRESCALER_DIV32  = 0x5 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/32.
                PRESCALER_DIV64  = 0x6 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/64.
                PRESCALER_DIV128 = 0x7 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/128.
                PRESCALER_DIV256 = 0x8 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/256.
                PRESCALER_DIV512 = 0x9 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/512.
                PRESCALER_DIV1024 = 0xA << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1024.
            };

            CTRL() = delete;

            CTRL( CTRL && ) = delete;

            CTRL( CTRL const & ) = delete;

            ~CTRL() = delete;

            auto operator=( CTRL && ) = delete;

            auto operator=( CTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Read Request (READREQ) register.
         *
         * This register has the following fields:
         * - Address (ADDR)
         * - Read Continuously (RCONT)
         * - Read Request (RREQ)
         */
        class READREQ : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ADDR      = std::uint_fast8_t{ 6 }; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ 8 }; ///< RESERVED6.
                static constexpr auto RCONT     = std::uint_fast8_t{ 1 }; ///< RCONT.
                static constexpr auto RREQ      = std::uint_fast8_t{ 1 }; ///< RREQ.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ADDR = std::uint_fast8_t{}; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ ADDR + Size::ADDR }; ///< RESERVED6.
                static constexpr auto RCONT = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< RCONT.
                static constexpr auto RREQ = std::uint_fast8_t{ RCONT + Size::RCONT }; ///< RREQ.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ADDR = mask<std::uint16_t>( Size::ADDR, Bit::ADDR ); ///< ADDR.
                static constexpr auto RESERVED6 = mask<std::uint16_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
                static constexpr auto RCONT = mask<std::uint16_t>( Size::RCONT, Bit::RCONT ); ///< RCONT.
                static constexpr auto RREQ = mask<std::uint16_t>( Size::RREQ, Bit::RREQ ); ///< RREQ.
            };

            READREQ() = delete;

            READREQ( READREQ && ) = delete;

            READREQ( READREQ const & ) = delete;

            ~READREQ() = delete;

            auto operator=( READREQ && ) = delete;

            auto operator=( READREQ const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Event Control (EVCTRL) register.
         *
         * This register has the following fields:
         * - Periodic Interval 0 Event Output Enable (PEREO0)
         * - Periodic Interval 1 Event Output Enable (PEREO1)
         * - Periodic Interval 2 Event Output Enable (PEREO2)
         * - Periodic Interval 3 Event Output Enable (PEREO3)
         * - Periodic Interval 4 Event Output Enable (PEREO4)
         * - Periodic Interval 5 Event Output Enable (PEREO5)
         * - Periodic Interval 6 Event Output Enable (PEREO6)
         * - Periodic Interval 7 Event Output Enable (PEREO7)
         * - Compare 0 Event Output Enable (CMPEO0)
         * - Overflow Event Output Enable (OVFEO)
         */
        class EVCTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto PEREO0    = std::uint_fast8_t{ 1 }; ///< PEREO0.
                static constexpr auto PEREO1    = std::uint_fast8_t{ 1 }; ///< PEREO1.
                static constexpr auto PEREO2    = std::uint_fast8_t{ 1 }; ///< PEREO2.
                static constexpr auto PEREO3    = std::uint_fast8_t{ 1 }; ///< PEREO3.
                static constexpr auto PEREO4    = std::uint_fast8_t{ 1 }; ///< PEREO4.
                static constexpr auto PEREO5    = std::uint_fast8_t{ 1 }; ///< PEREO5.
                static constexpr auto PEREO6    = std::uint_fast8_t{ 1 }; ///< PEREO6.
                static constexpr auto PEREO7    = std::uint_fast8_t{ 1 }; ///< PEREO7.
                static constexpr auto CMPEO0    = std::uint_fast8_t{ 1 }; ///< CMPEO0.
                static constexpr auto RESERVED9 = std::uint_fast8_t{ 6 }; ///< RESERVED9.
                static constexpr auto OVFEO     = std::uint_fast8_t{ 1 }; ///< OVFEO.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto PEREO0 = std::uint_fast8_t{}; ///< PEREO0.
                static constexpr auto PEREO1 = std::uint_fast8_t{ PEREO0 + Size::PEREO0 }; ///< PEREO1.
                static constexpr auto PEREO2 = std::uint_fast8_t{ PEREO1 + Size::PEREO1 }; ///< PEREO2.
                static constexpr auto PEREO3 = std::uint_fast8_t{ PEREO2 + Size::PEREO2 }; ///< PEREO3.
                static constexpr auto PEREO4 = std::uint_fast8_t{ PEREO3 + Size::PEREO3 }; ///< PEREO4.
                static constexpr auto PEREO5 = std::uint_fast8_t{ PEREO4 + Size::PEREO4 }; ///< PEREO5.
                static constexpr auto PEREO6 = std::uint_fast8_t{ PEREO5 + Size::PEREO5 }; ///< PEREO6.
                static constexpr auto PEREO7 = std::uint_fast8_t{ PEREO6 + Size::PEREO6 }; ///< PEREO7.
                static constexpr auto CMPEO0 = std::uint_fast8_t{ PEREO7 + Size::PEREO7 }; ///< CMPEO0.
                static constexpr auto RESERVED9 = std::uint_fast8_t{ CMPEO0 + Size::CMPEO0 }; ///< RESERVED9.
                static constexpr auto OVFEO = std::uint_fast8_t{ RESERVED9 + Size::RESERVED9 }; ///< OVFEO.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto PEREO0 = mask<std::uint16_t>( Size::PEREO0, Bit::PEREO0 ); ///< PEREO0.
                static constexpr auto PEREO1 = mask<std::uint16_t>( Size::PEREO1, Bit::PEREO1 ); ///< PEREO1.
                static constexpr auto PEREO2 = mask<std::uint16_t>( Size::PEREO2, Bit::PEREO2 ); ///< PEREO2.
                static constexpr auto PEREO3 = mask<std::uint16_t>( Size::PEREO3, Bit::PEREO3 ); ///< PEREO3.
                static constexpr auto PEREO4 = mask<std::uint16_t>( Size::PEREO4, Bit::PEREO4 ); ///< PEREO4.
                static constexpr auto PEREO5 = mask<std::uint16_t>( Size::PEREO5, Bit::PEREO5 ); ///< PEREO5.
                static constexpr auto PEREO6 = mask<std::uint16_t>( Size::PEREO6, Bit::PEREO6 ); ///< PEREO6.
                static constexpr auto PEREO7 = mask<std::uint16_t>( Size::PEREO7, Bit::PEREO7 ); ///< PEREO7.
                static constexpr auto CMPEO0 = mask<std::uint16_t>( Size::CMPEO0, Bit::CMPEO0 ); ///< CMPEO0.
                static constexpr auto RESERVED9 = mask<std::uint16_t>( Size::RESERVED9, Bit::RESERVED9 ); ///< RESERVED9.
                static constexpr auto OVFEO = mask<std::uint16_t>( Size::OVFEO, Bit::OVFEO ); ///< OVFEO.
            };

            EVCTRL() = delete;

            EVCTRL( EVCTRL && ) = delete;

            EVCTRL( EVCTRL const & ) = delete;

            ~EVCTRL() = delete;

            auto operator=( EVCTRL && ) = delete;

            auto operator=( EVCTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Interrupt Enable Clear (INTENCLR) register.
         *
         * This register has the following fields:
         * - Compare 0 Interrupt Enable (CMP0)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENCLR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Compare 0 Interrupt Enable (CMP0)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENSET : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Compare 0 (CMP0)
         * - Synchronization Ready (SYNCRDY)
         * - Overflow (OVF)
         */
        class INTFLAG : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * \brief Status (STATUS) register.
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
         * \brief Debug Control (DBGCTRL) register.
         *
         * This register has the following fields:
         * - Run During Debug (DBGRUN)
         */
        class DBGCTRL : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto DBGRUN    = std::uint_fast8_t{ 1 }; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto DBGRUN = std::uint_fast8_t{}; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ DBGRUN + Size::DBGRUN }; ///< RESERVED1.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto DBGRUN = mask<std::uint8_t>( Size::DBGRUN, Bit::DBGRUN ); ///< DBGRUN.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
            };

            DBGCTRL() = delete;

            DBGCTRL( DBGCTRL && ) = delete;

            DBGCTRL( DBGCTRL const & ) = delete;

            ~DBGCTRL() = delete;

            auto operator=( DBGCTRL && ) = delete;

            auto operator=( DBGCTRL const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief (FREQCORR) register.
         *
         * This register has the following fields:
         * - Correction Value (VALUE)
         * - Correction Sign (SIGN)
         */
        class FREQCORR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto VALUE = std::uint_fast8_t{ 7 }; ///< VALUE.
                static constexpr auto SIGN  = std::uint_fast8_t{ 1 }; ///< SIGN.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto VALUE = std::uint_fast8_t{}; ///< VALUE.
                static constexpr auto SIGN = std::uint_fast8_t{ VALUE + Size::VALUE }; ///< SIGN.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto VALUE = mask<std::uint8_t>( Size::VALUE, Bit::VALUE ); ///< VALUE.
                static constexpr auto SIGN = mask<std::uint8_t>( Size::SIGN, Bit::SIGN ); ///< SIGN.
            };

            FREQCORR() = delete;

            FREQCORR( FREQCORR && ) = delete;

            FREQCORR( FREQCORR const & ) = delete;

            ~FREQCORR() = delete;

            auto operator=( FREQCORR && ) = delete;

            auto operator=( FREQCORR const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief CTRL.
         */
        CTRL ctrl;

        /**
         * \brief READREQ.
         */
        READREQ readreq;

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
         * \brief Reserved registers (offset 0x09-0x09).
         */
        Reserved_Register<std::uint8_t> const reserved_0x09_0x09[ ( 0x09 - 0x09 ) + 1 ];

        /**
         * \brief STATUS.
         */
        STATUS const status;

        /**
         * \brief DBGCTRL.
         */
        DBGCTRL dbgctrl;

        /**
         * \brief FREQCORR.
         */
        FREQCORR freqcorr;

        /**
         * \brief Reserved registers (offset 0x0D-0x0F).
         */
        Reserved_Register<std::uint8_t> const reserved_0x0D_0x0F[ ( 0x0F - 0x0D ) + 1 ];

        /**
         * \brief Counter Value (COUNT) register.
         */
        Register<std::uint32_t> count;

        /**
         * \brief Reserved registers (offset 0x14-0x17).
         */
        Reserved_Register<std::uint8_t> const reserved_0x14_0x17[ ( 0x17 - 0x14 ) + 1 ];

        /**
         * \brief Compare Value (COMP) registers.
         */
        Register<std::uint32_t> comp[ 1 ];

        MODE0() = delete;

        MODE0( MODE0 && ) = delete;

        MODE0( MODE0 const & ) = delete;

        ~MODE0() = delete;

        auto operator=( MODE0 && ) = delete;

        auto operator=( MODE0 const & ) = delete;
    };

    /**
     * \brief 16-bit Counter (MODE1) operating mode.
     */
    class MODE1 {
      public:
        /**
         * \brief Control (CTRL) register.
         *
         * This register has the following fields:
         * - Software Reset (SWRST)
         * - Enable (ENABLE)
         * - Operating Mode (MODE)
         * - Prescaler (PRESCALER)
         */
        class CTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto SWRST      = std::uint_fast8_t{ 1 }; ///< SWRST.
                static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
                static constexpr auto MODE       = std::uint_fast8_t{ 2 }; ///< MODE.
                static constexpr auto RESERVED4  = std::uint_fast8_t{ 4 }; ///< RESERVED4.
                static constexpr auto PRESCALER  = std::uint_fast8_t{ 4 }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ 4 }; ///< RESERVED12.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto SWRST = std::uint_fast8_t{}; ///< SWRST.
                static constexpr auto ENABLE = std::uint_fast8_t{ SWRST + Size::SWRST }; ///< ENABLE.
                static constexpr auto MODE = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< MODE.
                static constexpr auto RESERVED4 = std::uint_fast8_t{ MODE + Size::MODE }; ///< RESERVED4.
                static constexpr auto PRESCALER = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ PRESCALER + Size::PRESCALER }; ///< RESERVED12.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto SWRST = mask<std::uint16_t>( Size::SWRST, Bit::SWRST ); ///< SWRST.
                static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
                static constexpr auto MODE = mask<std::uint16_t>( Size::MODE, Bit::MODE ); ///< MODE.
                static constexpr auto RESERVED4 = mask<std::uint16_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
                static constexpr auto PRESCALER = mask<std::uint16_t>( Size::PRESCALER, Bit::PRESCALER ); ///< PRESCALER.
                static constexpr auto RESERVED12 = mask<std::uint16_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            };

            /**
             * \brief MODE.
             */
            enum MODE : std::uint16_t {
                MODE_COUNT16 = 0x1 << Bit::MODE, ///< 16-bit counter.
            };

            /**
             * \brief PRESCALER.
             */
            enum PRESCALER : std::uint16_t {
                PRESCALER_DIV1   = 0x0 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1.
                PRESCALER_DIV2   = 0x1 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/2.
                PRESCALER_DIV4   = 0x2 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/4.
                PRESCALER_DIV8   = 0x3 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/8.
                PRESCALER_DIV16  = 0x4 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/16.
                PRESCALER_DIV32  = 0x5 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/32.
                PRESCALER_DIV64  = 0x6 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/64.
                PRESCALER_DIV128 = 0x7 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/128.
                PRESCALER_DIV256 = 0x8 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/256.
                PRESCALER_DIV512 = 0x9 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/512.
                PRESCALER_DIV1024 = 0xA << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1024.
            };

            CTRL() = delete;

            CTRL( CTRL && ) = delete;

            CTRL( CTRL const & ) = delete;

            ~CTRL() = delete;

            auto operator=( CTRL && ) = delete;

            auto operator=( CTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Read Request (READREQ) register.
         *
         * This register has the following fields:
         * - Address (ADDR)
         * - Read Continuously (RCONT)
         * - Read Request (RREQ)
         */
        class READREQ : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ADDR      = std::uint_fast8_t{ 6 }; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ 8 }; ///< RESERVED6.
                static constexpr auto RCONT     = std::uint_fast8_t{ 1 }; ///< RCONT.
                static constexpr auto RREQ      = std::uint_fast8_t{ 1 }; ///< RREQ.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ADDR = std::uint_fast8_t{}; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ ADDR + Size::ADDR }; ///< RESERVED6.
                static constexpr auto RCONT = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< RCONT.
                static constexpr auto RREQ = std::uint_fast8_t{ RCONT + Size::RCONT }; ///< RREQ.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ADDR = mask<std::uint16_t>( Size::ADDR, Bit::ADDR ); ///< ADDR.
                static constexpr auto RESERVED6 = mask<std::uint16_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
                static constexpr auto RCONT = mask<std::uint16_t>( Size::RCONT, Bit::RCONT ); ///< RCONT.
                static constexpr auto RREQ = mask<std::uint16_t>( Size::RREQ, Bit::RREQ ); ///< RREQ.
            };

            READREQ() = delete;

            READREQ( READREQ && ) = delete;

            READREQ( READREQ const & ) = delete;

            ~READREQ() = delete;

            auto operator=( READREQ && ) = delete;

            auto operator=( READREQ const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Event Control (EVCTRL) register.
         *
         * This register has the following fields:
         * - Periodic Interval 0 Event Output Enable (PEREO0)
         * - Periodic Interval 1 Event Output Enable (PEREO1)
         * - Periodic Interval 2 Event Output Enable (PEREO2)
         * - Periodic Interval 3 Event Output Enable (PEREO3)
         * - Periodic Interval 4 Event Output Enable (PEREO4)
         * - Periodic Interval 5 Event Output Enable (PEREO5)
         * - Periodic Interval 6 Event Output Enable (PEREO6)
         * - Periodic Interval 7 Event Output Enable (PEREO7)
         * - Compare 0 Event Output Enable (CMPEO0)
         * - Compare 1 Event Output Enable (CMPEO1)
         * - Overflow Event Output Enable (OVFEO)
         */
        class EVCTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto PEREO0     = std::uint_fast8_t{ 1 }; ///< PEREO0.
                static constexpr auto PEREO1     = std::uint_fast8_t{ 1 }; ///< PEREO1.
                static constexpr auto PEREO2     = std::uint_fast8_t{ 1 }; ///< PEREO2.
                static constexpr auto PEREO3     = std::uint_fast8_t{ 1 }; ///< PEREO3.
                static constexpr auto PEREO4     = std::uint_fast8_t{ 1 }; ///< PEREO4.
                static constexpr auto PEREO5     = std::uint_fast8_t{ 1 }; ///< PEREO5.
                static constexpr auto PEREO6     = std::uint_fast8_t{ 1 }; ///< PEREO6.
                static constexpr auto PEREO7     = std::uint_fast8_t{ 1 }; ///< PEREO7.
                static constexpr auto CMPEO0     = std::uint_fast8_t{ 1 }; ///< CMPEO0.
                static constexpr auto CMPEO1     = std::uint_fast8_t{ 1 }; ///< CMPEO1.
                static constexpr auto RESERVED10 = std::uint_fast8_t{ 1 }; ///< RESERVED10.
                static constexpr auto OVFEO      = std::uint_fast8_t{ 1 }; ///< OVFEO.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto PEREO0 = std::uint_fast8_t{}; ///< PEREO0.
                static constexpr auto PEREO1 = std::uint_fast8_t{ PEREO0 + Size::PEREO0 }; ///< PEREO1.
                static constexpr auto PEREO2 = std::uint_fast8_t{ PEREO1 + Size::PEREO1 }; ///< PEREO2.
                static constexpr auto PEREO3 = std::uint_fast8_t{ PEREO2 + Size::PEREO2 }; ///< PEREO3.
                static constexpr auto PEREO4 = std::uint_fast8_t{ PEREO3 + Size::PEREO3 }; ///< PEREO4.
                static constexpr auto PEREO5 = std::uint_fast8_t{ PEREO4 + Size::PEREO4 }; ///< PEREO5.
                static constexpr auto PEREO6 = std::uint_fast8_t{ PEREO5 + Size::PEREO5 }; ///< PEREO6.
                static constexpr auto PEREO7 = std::uint_fast8_t{ PEREO6 + Size::PEREO6 }; ///< PEREO7.
                static constexpr auto CMPEO0 = std::uint_fast8_t{ PEREO7 + Size::PEREO7 }; ///< CMPEO0.
                static constexpr auto CMPEO1 = std::uint_fast8_t{ CMPEO0 + Size::CMPEO0 }; ///< CMPEO1.
                static constexpr auto RESERVED10 = std::uint_fast8_t{ CMPEO1 + Size::CMPEO1 }; ///< RESERVED10.
                static constexpr auto OVFEO = std::uint_fast8_t{ RESERVED10 + Size::RESERVED10 }; ///< OVFEO.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto PEREO0 = mask<std::uint16_t>( Size::PEREO0, Bit::PEREO0 ); ///< PEREO0.
                static constexpr auto PEREO1 = mask<std::uint16_t>( Size::PEREO1, Bit::PEREO1 ); ///< PEREO1.
                static constexpr auto PEREO2 = mask<std::uint16_t>( Size::PEREO2, Bit::PEREO2 ); ///< PEREO2.
                static constexpr auto PEREO3 = mask<std::uint16_t>( Size::PEREO3, Bit::PEREO3 ); ///< PEREO3.
                static constexpr auto PEREO4 = mask<std::uint16_t>( Size::PEREO4, Bit::PEREO4 ); ///< PEREO4.
                static constexpr auto PEREO5 = mask<std::uint16_t>( Size::PEREO5, Bit::PEREO5 ); ///< PEREO5.
                static constexpr auto PEREO6 = mask<std::uint16_t>( Size::PEREO6, Bit::PEREO6 ); ///< PEREO6.
                static constexpr auto PEREO7 = mask<std::uint16_t>( Size::PEREO7, Bit::PEREO7 ); ///< PEREO7.
                static constexpr auto CMPEO0 = mask<std::uint16_t>( Size::CMPEO0, Bit::CMPEO0 ); ///< CMPEO0.
                static constexpr auto CMPEO1 = mask<std::uint16_t>( Size::CMPEO1, Bit::CMPEO1 ); ///< CMPEO1.
                static constexpr auto RESERVED10 = mask<std::uint16_t>( Size::RESERVED10, Bit::RESERVED10 ); ///< RESERVED10.
                static constexpr auto OVFEO = mask<std::uint16_t>( Size::OVFEO, Bit::OVFEO ); ///< OVFEO.
            };

            EVCTRL() = delete;

            EVCTRL( EVCTRL && ) = delete;

            EVCTRL( EVCTRL const & ) = delete;

            ~EVCTRL() = delete;

            auto operator=( EVCTRL && ) = delete;

            auto operator=( EVCTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Interrupt Enable Clear (INTENCLR) register.
         *
         * This register has the following fields:
         * - Compare 0 Interrupt Enable (CMP0)
         * - Compare 1 Interrupt Enable (CMP1)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENCLR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto CMP1      = std::uint_fast8_t{ 1 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ 4 }; ///< RESERVED2.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto CMP1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ CMP1 + Size::CMP1 }; ///< RESERVED2.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto CMP1 = mask<std::uint8_t>( Size::CMP1, Bit::CMP1 ); ///< CMP1.
                static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Compare 0 Interrupt Enable (CMP0)
         * - Compare 1 Interrupt Enable (CMP1)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENSET : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto CMP1      = std::uint_fast8_t{ 1 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ 4 }; ///< RESERVED2.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto CMP1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ CMP1 + Size::CMP1 }; ///< RESERVED2.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto CMP1 = mask<std::uint8_t>( Size::CMP1, Bit::CMP1 ); ///< CMP1.
                static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Compare 0 (CMP0)
         * - Compare 1 (CMP1)
         * - Synchronization Ready (SYNCRDY)
         * - Overflow (OVF)
         */
        class INTFLAG : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto CMP0      = std::uint_fast8_t{ 1 }; ///< CMP0.
                static constexpr auto CMP1      = std::uint_fast8_t{ 1 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ 4 }; ///< RESERVED2.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto CMP0 = std::uint_fast8_t{}; ///< CMP0.
                static constexpr auto CMP1 = std::uint_fast8_t{ CMP0 + Size::CMP0 }; ///< CMP1.
                static constexpr auto RESERVED2 = std::uint_fast8_t{ CMP1 + Size::CMP1 }; ///< RESERVED2.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto CMP0 = mask<std::uint8_t>( Size::CMP0, Bit::CMP0 ); ///< CMP0.
                static constexpr auto CMP1 = mask<std::uint8_t>( Size::CMP1, Bit::CMP1 ); ///< CMP1.
                static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * \brief Status (STATUS) register.
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
         * \brief Debug Control (DBGCTRL) register.
         *
         * This register has the following fields:
         * - Run During Debug (DBGRUN)
         */
        class DBGCTRL : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto DBGRUN    = std::uint_fast8_t{ 1 }; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto DBGRUN = std::uint_fast8_t{}; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ DBGRUN + Size::DBGRUN }; ///< RESERVED1.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto DBGRUN = mask<std::uint8_t>( Size::DBGRUN, Bit::DBGRUN ); ///< DBGRUN.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
            };

            DBGCTRL() = delete;

            DBGCTRL( DBGCTRL && ) = delete;

            DBGCTRL( DBGCTRL const & ) = delete;

            ~DBGCTRL() = delete;

            auto operator=( DBGCTRL && ) = delete;

            auto operator=( DBGCTRL const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief (FREQCORR) register.
         *
         * This register has the following fields:
         * - Correction Value (VALUE)
         * - Correction Sign (SIGN)
         */
        class FREQCORR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto VALUE = std::uint_fast8_t{ 7 }; ///< VALUE.
                static constexpr auto SIGN  = std::uint_fast8_t{ 1 }; ///< SIGN.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto VALUE = std::uint_fast8_t{}; ///< VALUE.
                static constexpr auto SIGN = std::uint_fast8_t{ VALUE + Size::VALUE }; ///< SIGN.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto VALUE = mask<std::uint8_t>( Size::VALUE, Bit::VALUE ); ///< VALUE.
                static constexpr auto SIGN = mask<std::uint8_t>( Size::SIGN, Bit::SIGN ); ///< SIGN.
            };

            FREQCORR() = delete;

            FREQCORR( FREQCORR && ) = delete;

            FREQCORR( FREQCORR const & ) = delete;

            ~FREQCORR() = delete;

            auto operator=( FREQCORR && ) = delete;

            auto operator=( FREQCORR const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief CTRL.
         */
        CTRL ctrl;

        /**
         * \brief READREQ.
         */
        READREQ readreq;

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
         * \brief Reserved registers (offset 0x09-0x09).
         */
        Reserved_Register<std::uint8_t> const reserved_0x09_0x09[ ( 0x09 - 0x09 ) + 1 ];

        /**
         * \brief STATUS.
         */
        STATUS const status;

        /**
         * \brief DBGCTRL.
         */
        DBGCTRL dbgctrl;

        /**
         * \brief FREQCORR.
         */
        FREQCORR freqcorr;

        /**
         * \brief Reserved registers (offset 0x0D-0x0F).
         */
        Reserved_Register<std::uint8_t> const reserved_0x0D_0x0F[ ( 0x0F - 0x0D ) + 1 ];

        /**
         * \brief Counter Value (COUNT) register.
         */
        Register<std::uint16_t> count;

        /**
         * \brief Reserved registers (offset 0x12-0x13).
         */
        Reserved_Register<std::uint8_t> const reserved_0x12_0x13[ ( 0x13 - 0x12 ) + 1 ];

        /**
         * \brief Counter Period (PER) register.
         */
        Register<std::uint16_t> per;

        /**
         * \brief Reserved registers (offset 0x16-0x17).
         */
        Reserved_Register<std::uint8_t> const reserved_0x16_0x17[ ( 0x17 - 0x16 ) + 1 ];

        /**
         * \brief Compare Value (COMP) registers.
         */
        Register<std::uint16_t> comp[ 2 ];

        MODE1() = delete;

        MODE1( MODE1 && ) = delete;

        MODE1( MODE1 const & ) = delete;

        ~MODE1() = delete;

        auto operator=( MODE1 && ) = delete;

        auto operator=( MODE1 const & ) = delete;
    };

    /**
     * \brief Clock/Calendar (MODE2) operating mode.
     */
    class MODE2 {
      public:
        /**
         * \brief Control (CTRL) register.
         *
         * This register has the following fields:
         * - Software Reset (SWRST)
         * - Enable (ENABLE)
         * - Operating Mode (MODE)
         * - Clock Representation (CLKREP)
         * - Clear on Match (MATCHCLR)
         * - Prescaler (PRESCALER)
         */
        class CTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto SWRST      = std::uint_fast8_t{ 1 }; ///< SWRST.
                static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
                static constexpr auto MODE       = std::uint_fast8_t{ 2 }; ///< MODE.
                static constexpr auto RESERVED4  = std::uint_fast8_t{ 2 }; ///< RESERVED4.
                static constexpr auto CLKREP     = std::uint_fast8_t{ 1 }; ///< CLKREP.
                static constexpr auto MATCHCLR   = std::uint_fast8_t{ 1 }; ///< MATCHCLR.
                static constexpr auto PRESCALER  = std::uint_fast8_t{ 4 }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ 4 }; ///< RESERVED12.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto SWRST = std::uint_fast8_t{}; ///< SWRST.
                static constexpr auto ENABLE = std::uint_fast8_t{ SWRST + Size::SWRST }; ///< ENABLE.
                static constexpr auto MODE = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< MODE.
                static constexpr auto RESERVED4 = std::uint_fast8_t{ MODE + Size::MODE }; ///< RESERVED4.
                static constexpr auto CLKREP = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< CLKREP.
                static constexpr auto MATCHCLR = std::uint_fast8_t{ CLKREP + Size::CLKREP }; ///< MATCHCLR.
                static constexpr auto PRESCALER = std::uint_fast8_t{ MATCHCLR + Size::MATCHCLR }; ///< PRESCALER.
                static constexpr auto RESERVED12 = std::uint_fast8_t{ PRESCALER + Size::PRESCALER }; ///< RESERVED12.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto SWRST = mask<std::uint16_t>( Size::SWRST, Bit::SWRST ); ///< SWRST.
                static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
                static constexpr auto MODE = mask<std::uint16_t>( Size::MODE, Bit::MODE ); ///< MODE.
                static constexpr auto RESERVED4 = mask<std::uint16_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
                static constexpr auto CLKREP = mask<std::uint16_t>( Size::CLKREP, Bit::CLKREP ); ///< CLKREP.
                static constexpr auto MATCHCLR = mask<std::uint16_t>( Size::MATCHCLR, Bit::MATCHCLR ); ///< MATCHCLR.
                static constexpr auto PRESCALER = mask<std::uint16_t>( Size::PRESCALER, Bit::PRESCALER ); ///< PRESCALER.
                static constexpr auto RESERVED12 = mask<std::uint16_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            };

            /**
             * \brief MODE.
             */
            enum MODE : std::uint16_t {
                MODE_CLOCK = 0x2 << Bit::MODE, ///< Clock/calendar.
            };

            /**
             * \brief PRESCALER.
             */
            enum PRESCALER : std::uint16_t {
                PRESCALER_DIV1   = 0x0 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1.
                PRESCALER_DIV2   = 0x1 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/2.
                PRESCALER_DIV4   = 0x2 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/4.
                PRESCALER_DIV8   = 0x3 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/8.
                PRESCALER_DIV16  = 0x4 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/16.
                PRESCALER_DIV32  = 0x5 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/32.
                PRESCALER_DIV64  = 0x6 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/64.
                PRESCALER_DIV128 = 0x7 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/128.
                PRESCALER_DIV256 = 0x8 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/256.
                PRESCALER_DIV512 = 0x9 << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/512.
                PRESCALER_DIV1024 = 0xA << Bit::PRESCALER, ///< CLK_RTC_CNT = GCLK_RTC/1024.
            };

            CTRL() = delete;

            CTRL( CTRL && ) = delete;

            CTRL( CTRL const & ) = delete;

            ~CTRL() = delete;

            auto operator=( CTRL && ) = delete;

            auto operator=( CTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Read Request (READREQ) register.
         *
         * This register has the following fields:
         * - Address (ADDR)
         * - Read Continuously (RCONT)
         * - Read Request (RREQ)
         */
        class READREQ : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ADDR      = std::uint_fast8_t{ 6 }; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ 8 }; ///< RESERVED6.
                static constexpr auto RCONT     = std::uint_fast8_t{ 1 }; ///< RCONT.
                static constexpr auto RREQ      = std::uint_fast8_t{ 1 }; ///< RREQ.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ADDR = std::uint_fast8_t{}; ///< ADDR.
                static constexpr auto RESERVED6 = std::uint_fast8_t{ ADDR + Size::ADDR }; ///< RESERVED6.
                static constexpr auto RCONT = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< RCONT.
                static constexpr auto RREQ = std::uint_fast8_t{ RCONT + Size::RCONT }; ///< RREQ.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ADDR = mask<std::uint16_t>( Size::ADDR, Bit::ADDR ); ///< ADDR.
                static constexpr auto RESERVED6 = mask<std::uint16_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
                static constexpr auto RCONT = mask<std::uint16_t>( Size::RCONT, Bit::RCONT ); ///< RCONT.
                static constexpr auto RREQ = mask<std::uint16_t>( Size::RREQ, Bit::RREQ ); ///< RREQ.
            };

            READREQ() = delete;

            READREQ( READREQ && ) = delete;

            READREQ( READREQ const & ) = delete;

            ~READREQ() = delete;

            auto operator=( READREQ && ) = delete;

            auto operator=( READREQ const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Event Control (EVCTRL) register.
         *
         * This register has the following fields:
         * - Periodic Interval 0 Event Output Enable (PEREO0)
         * - Periodic Interval 1 Event Output Enable (PEREO1)
         * - Periodic Interval 2 Event Output Enable (PEREO2)
         * - Periodic Interval 3 Event Output Enable (PEREO3)
         * - Periodic Interval 4 Event Output Enable (PEREO4)
         * - Periodic Interval 5 Event Output Enable (PEREO5)
         * - Periodic Interval 6 Event Output Enable (PEREO6)
         * - Periodic Interval 7 Event Output Enable (PEREO7)
         * - Alarm 0 Event Output Enable (ALARMEO0)
         * - Overflow Event Output Enable (OVFEO)
         */
        class EVCTRL : public Register<std::uint16_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto PEREO0    = std::uint_fast8_t{ 1 }; ///< PEREO0.
                static constexpr auto PEREO1    = std::uint_fast8_t{ 1 }; ///< PEREO1.
                static constexpr auto PEREO2    = std::uint_fast8_t{ 1 }; ///< PEREO2.
                static constexpr auto PEREO3    = std::uint_fast8_t{ 1 }; ///< PEREO3.
                static constexpr auto PEREO4    = std::uint_fast8_t{ 1 }; ///< PEREO4.
                static constexpr auto PEREO5    = std::uint_fast8_t{ 1 }; ///< PEREO5.
                static constexpr auto PEREO6    = std::uint_fast8_t{ 1 }; ///< PEREO6.
                static constexpr auto PEREO7    = std::uint_fast8_t{ 1 }; ///< PEREO7.
                static constexpr auto ALARMEO0  = std::uint_fast8_t{ 1 }; ///< ALARMEO0.
                static constexpr auto RESERVED9 = std::uint_fast8_t{ 6 }; ///< RESERVED9.
                static constexpr auto OVFEO     = std::uint_fast8_t{ 1 }; ///< OVFEO.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto PEREO0 = std::uint_fast8_t{}; ///< PEREO0.
                static constexpr auto PEREO1 = std::uint_fast8_t{ PEREO0 + Size::PEREO0 }; ///< PEREO1.
                static constexpr auto PEREO2 = std::uint_fast8_t{ PEREO1 + Size::PEREO1 }; ///< PEREO2.
                static constexpr auto PEREO3 = std::uint_fast8_t{ PEREO2 + Size::PEREO2 }; ///< PEREO3.
                static constexpr auto PEREO4 = std::uint_fast8_t{ PEREO3 + Size::PEREO3 }; ///< PEREO4.
                static constexpr auto PEREO5 = std::uint_fast8_t{ PEREO4 + Size::PEREO4 }; ///< PEREO5.
                static constexpr auto PEREO6 = std::uint_fast8_t{ PEREO5 + Size::PEREO5 }; ///< PEREO6.
                static constexpr auto PEREO7 = std::uint_fast8_t{ PEREO6 + Size::PEREO6 }; ///< PEREO7.
                static constexpr auto ALARMEO0 = std::uint_fast8_t{ PEREO7 + Size::PEREO7 }; ///< ALARMEO0.
                static constexpr auto RESERVED9 = std::uint_fast8_t{ ALARMEO0 + Size::ALARMEO0 }; ///< RESERVED9.
                static constexpr auto OVFEO = std::uint_fast8_t{ RESERVED9 + Size::RESERVED9 }; ///< OVFEO.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto PEREO0 = mask<std::uint16_t>( Size::PEREO0, Bit::PEREO0 ); ///< PEREO0.
                static constexpr auto PEREO1 = mask<std::uint16_t>( Size::PEREO1, Bit::PEREO1 ); ///< PEREO1.
                static constexpr auto PEREO2 = mask<std::uint16_t>( Size::PEREO2, Bit::PEREO2 ); ///< PEREO2.
                static constexpr auto PEREO3 = mask<std::uint16_t>( Size::PEREO3, Bit::PEREO3 ); ///< PEREO3.
                static constexpr auto PEREO4 = mask<std::uint16_t>( Size::PEREO4, Bit::PEREO4 ); ///< PEREO4.
                static constexpr auto PEREO5 = mask<std::uint16_t>( Size::PEREO5, Bit::PEREO5 ); ///< PEREO5.
                static constexpr auto PEREO6 = mask<std::uint16_t>( Size::PEREO6, Bit::PEREO6 ); ///< PEREO6.
                static constexpr auto PEREO7 = mask<std::uint16_t>( Size::PEREO7, Bit::PEREO7 ); ///< PEREO7.
                static constexpr auto ALARMEO0 = mask<std::uint16_t>( Size::ALARMEO0, Bit::ALARMEO0 ); ///< ALARMEO0.
                static constexpr auto RESERVED9 = mask<std::uint16_t>( Size::RESERVED9, Bit::RESERVED9 ); ///< RESERVED9.
                static constexpr auto OVFEO = mask<std::uint16_t>( Size::OVFEO, Bit::OVFEO ); ///< OVFEO.
            };

            EVCTRL() = delete;

            EVCTRL( EVCTRL && ) = delete;

            EVCTRL( EVCTRL const & ) = delete;

            ~EVCTRL() = delete;

            auto operator=( EVCTRL && ) = delete;

            auto operator=( EVCTRL const & ) = delete;

            using Register<std::uint16_t>::operator=;
        };

        /**
         * \brief Interrupt Enable Clear (INTENCLR) register.
         *
         * This register has the following fields:
         * - Alarm 0 Interrupt Enable (ALARM0)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENCLR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ALARM0    = std::uint_fast8_t{ 1 }; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ALARM0 = std::uint_fast8_t{}; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ ALARM0 + Size::ALARM0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ALARM0 = mask<std::uint8_t>( Size::ALARM0, Bit::ALARM0 ); ///< ALARM0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Alarm 0 Interrupt Enable (ALARM0)
         * - Synchronization Ready Interrupt Enable (SYNCRDY)
         * - Overflow Interrupt Enable (OVF)
         */
        class INTENSET : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ALARM0    = std::uint_fast8_t{ 1 }; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ALARM0 = std::uint_fast8_t{}; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ ALARM0 + Size::ALARM0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ALARM0 = mask<std::uint8_t>( Size::ALARM0, Bit::ALARM0 ); ///< ALARM0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * - Alarm 0 (ALARM0)
         * - Synchronization Ready (SYNCRDY)
         * - Overflow (OVF)
         */
        class INTFLAG : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto ALARM0    = std::uint_fast8_t{ 1 }; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 5 }; ///< RESERVED1.
                static constexpr auto SYNCRDY   = std::uint_fast8_t{ 1 }; ///< SYNCRDY.
                static constexpr auto OVF       = std::uint_fast8_t{ 1 }; ///< OVF.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto ALARM0 = std::uint_fast8_t{}; ///< ALARM0.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ ALARM0 + Size::ALARM0 }; ///< RESERVED1.
                static constexpr auto SYNCRDY = std::uint_fast8_t{ RESERVED1 + Size::RESERVED1 }; ///< SYNCRDY.
                static constexpr auto OVF = std::uint_fast8_t{ SYNCRDY + Size::SYNCRDY }; ///< OVF.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto ALARM0 = mask<std::uint8_t>( Size::ALARM0, Bit::ALARM0 ); ///< ALARM0.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
                static constexpr auto SYNCRDY = mask<std::uint8_t>( Size::SYNCRDY, Bit::SYNCRDY ); ///< SYNCRDY.
                static constexpr auto OVF = mask<std::uint8_t>( Size::OVF, Bit::OVF ); ///< OVF.
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
         * \brief Status (STATUS) register.
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
         * \brief Debug Control (DBGCTRL) register.
         *
         * This register has the following fields:
         * - Run During Debug (DBGRUN)
         */
        class DBGCTRL : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto DBGRUN    = std::uint_fast8_t{ 1 }; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ 7 }; ///< RESERVED1.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto DBGRUN = std::uint_fast8_t{}; ///< DBGRUN.
                static constexpr auto RESERVED1 = std::uint_fast8_t{ DBGRUN + Size::DBGRUN }; ///< RESERVED1.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto DBGRUN = mask<std::uint8_t>( Size::DBGRUN, Bit::DBGRUN ); ///< DBGRUN.
                static constexpr auto RESERVED1 = mask<std::uint8_t>( Size::RESERVED1, Bit::RESERVED1 ); ///< RESERVED1.
            };

            DBGCTRL() = delete;

            DBGCTRL( DBGCTRL && ) = delete;

            DBGCTRL( DBGCTRL const & ) = delete;

            ~DBGCTRL() = delete;

            auto operator=( DBGCTRL && ) = delete;

            auto operator=( DBGCTRL const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief (FREQCORR) register.
         *
         * This register has the following fields:
         * - Correction Value (VALUE)
         * - Correction Sign (SIGN)
         */
        class FREQCORR : public Register<std::uint8_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto VALUE = std::uint_fast8_t{ 7 }; ///< VALUE.
                static constexpr auto SIGN  = std::uint_fast8_t{ 1 }; ///< SIGN.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto VALUE = std::uint_fast8_t{}; ///< VALUE.
                static constexpr auto SIGN = std::uint_fast8_t{ VALUE + Size::VALUE }; ///< SIGN.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto VALUE = mask<std::uint8_t>( Size::VALUE, Bit::VALUE ); ///< VALUE.
                static constexpr auto SIGN = mask<std::uint8_t>( Size::SIGN, Bit::SIGN ); ///< SIGN.
            };

            FREQCORR() = delete;

            FREQCORR( FREQCORR && ) = delete;

            FREQCORR( FREQCORR const & ) = delete;

            ~FREQCORR() = delete;

            auto operator=( FREQCORR && ) = delete;

            auto operator=( FREQCORR const & ) = delete;

            using Register<std::uint8_t>::operator=;
        };

        /**
         * \brief Clock Value (CLOCK) register.
         *
         * This register has the following fields:
         * - Second (SECOND)
         * - Minute (MINUTE)
         * - Hour (HOUR)
         * - Day (DAY)
         * - Month (MONTH)
         * - Year (YEAR)
         */
        class CLOCK : public Register<std::uint32_t> {
          public:
            /**
             * \brief Field sizes.
             */
            struct Size {
                static constexpr auto SECOND = std::uint_fast8_t{ 6 }; ///< SECOND.
                static constexpr auto MINUTE = std::uint_fast8_t{ 6 }; ///< MINUTE.
                static constexpr auto HOUR   = std::uint_fast8_t{ 5 }; ///< HOUR.
                static constexpr auto DAY    = std::uint_fast8_t{ 5 }; ///< DAY.
                static constexpr auto MONTH  = std::uint_fast8_t{ 4 }; ///< MONTH.
                static constexpr auto YEAR   = std::uint_fast8_t{ 6 }; ///< YEAR.
            };

            /**
             * \brief Field bit positions.
             */
            struct Bit {
                static constexpr auto SECOND = std::uint_fast8_t{}; ///< SECOND.
                static constexpr auto MINUTE = std::uint_fast8_t{ SECOND + Size::SECOND }; ///< MINUTE.
                static constexpr auto HOUR = std::uint_fast8_t{ MINUTE + Size::MINUTE }; ///< HOUR.
                static constexpr auto DAY = std::uint_fast8_t{ HOUR + Size::HOUR }; ///< DAY.
                static constexpr auto MONTH = std::uint_fast8_t{ DAY + Size::DAY }; ///< MONTH.
                static constexpr auto YEAR = std::uint_fast8_t{ MONTH + Size::MONTH }; ///< YEAR.
            };

            /**
             * \brief Field bit masks.
             */
            struct Mask {
                static constexpr auto SECOND = mask<std::uint32_t>( Size::SECOND, Bit::SECOND ); ///< SECOND.
                static constexpr auto MINUTE = mask<std::uint32_t>( Size::MINUTE, Bit::MINUTE ); ///< MINUTE.
                static constexpr auto HOUR = mask<std::uint32_t>( Size::HOUR, Bit::HOUR ); ///< HOUR.
                static constexpr auto DAY = mask<std::uint32_t>( Size::DAY, Bit::DAY ); ///< DAY.
                static constexpr auto MONTH = mask<std::uint32_t>( Size::MONTH, Bit::MONTH ); ///< MONTH.
                static constexpr auto YEAR = mask<std::uint32_t>( Size::YEAR, Bit::YEAR ); ///< YEAR.
            };

            CLOCK() = delete;

            CLOCK( CLOCK && ) = delete;

            CLOCK( CLOCK const & ) = delete;

            ~CLOCK() = delete;

            auto operator=( CLOCK && ) = delete;

            auto operator=( CLOCK const & ) = delete;

            using Register<std::uint32_t>::operator=;
        };

        /**
         * \brief Alarm group.
         */
        class Alarm_Group {
          public:
            /**
             * \brief Alarm Value (ALARM) register.
             *
             * This register has the following fields:
             * - Second (SECOND)
             * - Minute (MINUTE)
             * - Hour (HOUR)
             * - Day (DAY)
             * - Month (MONTH)
             * - Year (YEAR)
             */
            class ALARM : public Register<std::uint32_t> {
              public:
                /**
                 * \brief Field sizes.
                 */
                struct Size {
                    static constexpr auto SECOND = std::uint_fast8_t{ 6 }; ///< SECOND.
                    static constexpr auto MINUTE = std::uint_fast8_t{ 6 }; ///< MINUTE.
                    static constexpr auto HOUR   = std::uint_fast8_t{ 5 }; ///< HOUR.
                    static constexpr auto DAY    = std::uint_fast8_t{ 5 }; ///< DAY.
                    static constexpr auto MONTH  = std::uint_fast8_t{ 4 }; ///< MONTH.
                    static constexpr auto YEAR   = std::uint_fast8_t{ 6 }; ///< YEAR.
                };

                /**
                 * \brief Field bit positions.
                 */
                struct Bit {
                    static constexpr auto SECOND = std::uint_fast8_t{}; ///< SECOND.
                    static constexpr auto MINUTE = std::uint_fast8_t{ SECOND + Size::SECOND }; ///< MINUTE.
                    static constexpr auto HOUR = std::uint_fast8_t{ MINUTE + Size::MINUTE }; ///< HOUR.
                    static constexpr auto DAY = std::uint_fast8_t{ HOUR + Size::HOUR }; ///< DAY.
                    static constexpr auto MONTH = std::uint_fast8_t{ DAY + Size::DAY }; ///< MONTH.
                    static constexpr auto YEAR = std::uint_fast8_t{ MONTH + Size::MONTH }; ///< YEAR.
                };

                /**
                 * \brief Field bit masks.
                 */
                struct Mask {
                    static constexpr auto SECOND = mask<std::uint32_t>( Size::SECOND, Bit::SECOND ); ///< SECOND.
                    static constexpr auto MINUTE = mask<std::uint32_t>( Size::MINUTE, Bit::MINUTE ); ///< MINUTE.
                    static constexpr auto HOUR = mask<std::uint32_t>( Size::HOUR, Bit::HOUR ); ///< HOUR.
                    static constexpr auto DAY = mask<std::uint32_t>( Size::DAY, Bit::DAY ); ///< DAY.
                    static constexpr auto MONTH = mask<std::uint32_t>( Size::MONTH, Bit::MONTH ); ///< MONTH.
                    static constexpr auto YEAR = mask<std::uint32_t>( Size::YEAR, Bit::YEAR ); ///< YEAR.
                };

                ALARM() = delete;

                ALARM( ALARM && ) = delete;

                ALARM( ALARM const & ) = delete;

                ~ALARM() = delete;

                auto operator=( ALARM && ) = delete;

                auto operator=( ALARM const & ) = delete;

                using Register<std::uint32_t>::operator=;
            };

            /**
             * \brief Alarm Mask (MASK) register.
             *
             * This register has the following fields:
             * - Alarm Mask Selection (SEL)
             */
            class MASK : public Register<std::uint8_t> {
              public:
                /**
                 * \brief Field sizes.
                 */
                struct Size {
                    static constexpr auto SEL       = std::uint_fast8_t{ 3 }; ///< SEL.
                    static constexpr auto RESERVED3 = std::uint_fast8_t{ 5 }; ///< RESERVED3.
                };

                /**
                 * \brief Field bit positions.
                 */
                struct Bit {
                    static constexpr auto SEL = std::uint_fast8_t{}; ///< SEL.
                    static constexpr auto RESERVED3 = std::uint_fast8_t{ SEL + Size::SEL }; ///< RESERVED3.
                };

                /**
                 * \brief Field bit masks.
                 */
                struct Mask {
                    static constexpr auto SEL = mask<std::uint8_t>( Size::SEL, Bit::SEL ); ///< SEL.
                    static constexpr auto RESERVED3 = mask<std::uint8_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
                };

                /**
                 * \brief SEL.
                 */
                enum SEL : std::uint8_t {
                    SEL_OFF  = 0x0 << Bit::SEL, ///< Alarm disabled.
                    SEL_SS   = 0x1 << Bit::SEL, ///< Match seconds only.
                    SEL_MMSS = 0x2 << Bit::SEL, ///< Match seconds and minutes only.
                    SEL_HHMMSS = 0x3 << Bit::SEL, ///< Match seconds, minutes, and hours only.
                    SEL_DDHHMMSS = 0x4 << Bit::SEL, ///< Match seconds, minutes, hours, and days only.
                    SEL_MMDDHHMMSS   = 0x5 << Bit::SEL, ///< Match seconds, minutes, hours, days, and months only.
                    SEL_YYMMDDHHMMSS = 0x6 << Bit::SEL, ///< Match seconds, minutes, hours, days, months, and years.
                };

                MASK() = delete;

                MASK( MASK && ) = delete;

                MASK( MASK const & ) = delete;

                ~MASK() = delete;

                auto operator=( MASK && ) = delete;

                auto operator=( MASK const & ) = delete;

                using Register<std::uint8_t>::operator=;
            };

            /**
             * \brief ALARM.
             */
            ALARM alarm;

            /**
             * \brief MASK.
             */
            MASK mask;

            Alarm_Group() = delete;

            Alarm_Group( Alarm_Group && ) = delete;

            Alarm_Group( Alarm_Group const & ) = delete;

            ~Alarm_Group() = delete;

            auto operator=( Alarm_Group && ) = delete;

            auto operator=( Alarm_Group const & ) = delete;
        };

        /**
         * \brief CTRL.
         */
        CTRL ctrl;

        /**
         * \brief READREQ.
         */
        READREQ readreq;

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
         * \brief Reserved registers (offset 0x09-0x09).
         */
        Reserved_Register<std::uint8_t> const reserved_0x09_0x09[ ( 0x09 - 0x09 ) + 1 ];

        /**
         * \brief STATUS.
         */
        STATUS const status;

        /**
         * \brief DBGCTRL.
         */
        DBGCTRL dbgctrl;

        /**
         * \brief FREQCORR.
         */
        FREQCORR freqcorr;

        /**
         * \brief Reserved registers (offset 0x0D-0x0F).
         */
        Reserved_Register<std::uint8_t> const reserved_0x0D_0x0F[ ( 0x0F - 0x0D ) + 1 ];

        /**
         * \brief CLOCK.
         */
        CLOCK clock;

        /**
         * \brief Reserved registers (offset 0x14-0x17).
         */
        Reserved_Register<std::uint8_t> const reserved_0x14_0x17[ ( 0x17 - 0x14 ) + 1 ];

        /**
         * \brief Alarm groups.
         */
        Alarm_Group alarm_group[ 1 ];

        MODE2() = delete;

        MODE2( MODE2 && ) = delete;

        MODE2( MODE2 const & ) = delete;

        ~MODE2() = delete;

        auto operator=( MODE2 && ) = delete;

        auto operator=( MODE2 const & ) = delete;
    };

    union {
        /**
         * \brief MODE0.
         */
        MODE0 mode0;

        /**
         * \brief MODE1.
         */
        MODE1 mode1;

        /**
         * \brief MODE2.
         */
        MODE2 mode2;
    };

    RTC() = delete;

    RTC( RTC && ) = delete;

    RTC( RTC const & ) = delete;

    ~RTC() = delete;

    auto operator=( RTC && ) = delete;

    auto operator=( RTC const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_RTC_H
