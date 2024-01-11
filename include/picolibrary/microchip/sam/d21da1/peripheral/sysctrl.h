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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_SYSCTRL_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_SYSCTRL_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 System Controller (SYSCTRL) peripheral.
 */
class SYSCTRL {
  public:
    /**
     * \brief Interrupt Enable Clear (INTENCLR) register.
     *
     * This register has the following fields:
     * - XOSC Ready Interrupt Enable (XOSCRDY)
     * - XOSC32K Ready Interrupt Enable (XOSC32KRDY)
     * - OSC32K Ready Interrupt Enable (OSC32KRDY)
     * - OSC8M Ready Interrupt Enable (OSC8MRDY)
     * - DFLL Ready Interrupt Enable (DFLLRDY)
     * - DFLL Out Of Bounds Interrupt Enable (DFLLOOB)
     * - DFLL Lock Fine Interrupt Enable (DFLLLCKF)
     * - DFLL Lock Coarse Interrupt Enable (DFLLLCKC)
     * - DFLL Reference Clock Stopped Interrupt Enable (DFLLRCS)
     * - BOD33 Ready Interrupt Enable (BOD33RDY)
     * - BOD33 Detection Interrupt Enable (BOD33DET)
     * - BOD33 Synchronization Ready Interrupt Enable (B33SRDY)
     * - DPLL Lock Rise Interrupt Enable (DPLLLCKR)
     * - DPLL Lock Fall Interrupt Enable (DPLLLCKF)
     * - DPLL Lock Timeout Interrupt Enable (DPLLLTO)
     */
    class INTENCLR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto XOSCRDY    = std::uint_fast8_t{ 1 };  ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ 1 };  ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY  = std::uint_fast8_t{ 1 };  ///< OSC32KRDY.
            static constexpr auto OSC8MRDY   = std::uint_fast8_t{ 1 };  ///< OSC8MRDY.
            static constexpr auto DFLLRDY    = std::uint_fast8_t{ 1 };  ///< DFLLRDY.
            static constexpr auto DFLLOOB    = std::uint_fast8_t{ 1 };  ///< DFLLOOB.
            static constexpr auto DFLLLCKF   = std::uint_fast8_t{ 1 };  ///< DFLLLCKF.
            static constexpr auto DFLLLCKC   = std::uint_fast8_t{ 1 };  ///< DFLLLCKC.
            static constexpr auto DFLLRCS    = std::uint_fast8_t{ 1 };  ///< DFLLRCS.
            static constexpr auto BOD33RDY   = std::uint_fast8_t{ 1 };  ///< BOD33RDY.
            static constexpr auto BOD33DET   = std::uint_fast8_t{ 1 };  ///< BOD33DET.
            static constexpr auto B33SRDY    = std::uint_fast8_t{ 1 };  ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 3 };  ///< RESERVED12.
            static constexpr auto DPLLLCKR   = std::uint_fast8_t{ 1 };  ///< DPLLLCKR.
            static constexpr auto DPLLLCKF   = std::uint_fast8_t{ 1 };  ///< DPLLLCKF.
            static constexpr auto DPLLLTO    = std::uint_fast8_t{ 1 };  ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ 14 }; ///< RESERVED18.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto XOSCRDY = std::uint_fast8_t{}; ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ XOSCRDY + Size::XOSCRDY }; ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = std::uint_fast8_t{ XOSC32KRDY + Size::XOSC32KRDY }; ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = std::uint_fast8_t{ OSC32KRDY + Size::OSC32KRDY }; ///< OSC8MRDY.
            static constexpr auto DFLLRDY = std::uint_fast8_t{ OSC8MRDY + Size::OSC8MRDY }; ///< DFLLRDY.
            static constexpr auto DFLLOOB = std::uint_fast8_t{ DFLLRDY + Size::DFLLRDY }; ///< DFLLOOB.
            static constexpr auto DFLLLCKF = std::uint_fast8_t{ DFLLOOB + Size::DFLLOOB }; ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = std::uint_fast8_t{ DFLLLCKF + Size::DFLLLCKF }; ///< DFLLLCKC.
            static constexpr auto DFLLRCS = std::uint_fast8_t{ DFLLLCKC + Size::DFLLLCKC }; ///< DFLLRCS.
            static constexpr auto BOD33RDY = std::uint_fast8_t{ DFLLRCS + Size::DFLLRCS }; ///< BOD33RDY.
            static constexpr auto BOD33DET = std::uint_fast8_t{ BOD33RDY + Size::BOD33RDY }; ///< BOD33DET.
            static constexpr auto B33SRDY = std::uint_fast8_t{ BOD33DET + Size::BOD33DET }; ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ B33SRDY + Size::B33SRDY }; ///< RESERVED12.
            static constexpr auto DPLLLCKR = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = std::uint_fast8_t{ DPLLLCKR + Size::DPLLLCKR }; ///< DPLLLCKF.
            static constexpr auto DPLLLTO = std::uint_fast8_t{ DPLLLCKF + Size::DPLLLCKF }; ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ DPLLLTO + Size::DPLLLTO }; ///< RESERVED18.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto XOSCRDY = mask<std::uint32_t>( Size::XOSCRDY, Bit::XOSCRDY ); ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = mask<std::uint32_t>( Size::XOSC32KRDY, Bit::XOSC32KRDY ); ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = mask<std::uint32_t>( Size::OSC32KRDY, Bit::OSC32KRDY ); ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = mask<std::uint32_t>( Size::OSC8MRDY, Bit::OSC8MRDY ); ///< OSC8MRDY.
            static constexpr auto DFLLRDY = mask<std::uint32_t>( Size::DFLLRDY, Bit::DFLLRDY ); ///< DFLLRDY.
            static constexpr auto DFLLOOB = mask<std::uint32_t>( Size::DFLLOOB, Bit::DFLLOOB ); ///< DFLLOOB.
            static constexpr auto DFLLLCKF = mask<std::uint32_t>( Size::DFLLLCKF, Bit::DFLLLCKF ); ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = mask<std::uint32_t>( Size::DFLLLCKC, Bit::DFLLLCKC ); ///< DFLLLCKC.
            static constexpr auto DFLLRCS = mask<std::uint32_t>( Size::DFLLRCS, Bit::DFLLRCS ); ///< DFLLRCS.
            static constexpr auto BOD33RDY = mask<std::uint32_t>( Size::BOD33RDY, Bit::BOD33RDY ); ///< BOD33RDY.
            static constexpr auto BOD33DET = mask<std::uint32_t>( Size::BOD33DET, Bit::BOD33DET ); ///< BOD33DET.
            static constexpr auto B33SRDY = mask<std::uint32_t>( Size::B33SRDY, Bit::B33SRDY ); ///< B33SRDY.
            static constexpr auto RESERVED12 = mask<std::uint32_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto DPLLLCKR = mask<std::uint32_t>( Size::DPLLLCKR, Bit::DPLLLCKR ); ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = mask<std::uint32_t>( Size::DPLLLCKF, Bit::DPLLLCKF ); ///< DPLLLCKF.
            static constexpr auto DPLLLTO = mask<std::uint32_t>( Size::DPLLLTO, Bit::DPLLLTO ); ///< DPLLLTO.
            static constexpr auto RESERVED18 = mask<std::uint32_t>( Size::RESERVED18, Bit::RESERVED18 ); ///< RESERVED18.
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
     * - XOSC Ready Interrupt Enable (XOSCRDY)
     * - XOSC32K Ready Interrupt Enable (XOSC32KRDY)
     * - OSC32K Ready Interrupt Enable (OSC32KRDY)
     * - OSC8M Ready Interrupt Enable (OSC8MRDY)
     * - DFLL Ready Interrupt Enable (DFLLRDY)
     * - DFLL Out Of Bounds Interrupt Enable (DFLLOOB)
     * - DFLL Lock Fine Interrupt Enable (DFLLLCKF)
     * - DFLL Lock Coarse Interrupt Enable (DFLLLCKC)
     * - DFLL Reference Clock Stopped Interrupt Enable (DFLLRCS)
     * - BOD33 Ready Interrupt Enable (BOD33RDY)
     * - BOD33 Detection Interrupt Enable (BOD33DET)
     * - BOD33 Synchronization Ready Interrupt Enable (B33SRDY)
     * - DPLL Lock Rise Interrupt Enable (DPLLLCKR)
     * - DPLL Lock Fall Interrupt Enable (DPLLLCKF)
     * - DPLL Lock Timeout Interrupt Enable (DPLLLTO)
     */
    class INTENSET : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto XOSCRDY    = std::uint_fast8_t{ 1 };  ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ 1 };  ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY  = std::uint_fast8_t{ 1 };  ///< OSC32KRDY.
            static constexpr auto OSC8MRDY   = std::uint_fast8_t{ 1 };  ///< OSC8MRDY.
            static constexpr auto DFLLRDY    = std::uint_fast8_t{ 1 };  ///< DFLLRDY.
            static constexpr auto DFLLOOB    = std::uint_fast8_t{ 1 };  ///< DFLLOOB.
            static constexpr auto DFLLLCKF   = std::uint_fast8_t{ 1 };  ///< DFLLLCKF.
            static constexpr auto DFLLLCKC   = std::uint_fast8_t{ 1 };  ///< DFLLLCKC.
            static constexpr auto DFLLRCS    = std::uint_fast8_t{ 1 };  ///< DFLLRCS.
            static constexpr auto BOD33RDY   = std::uint_fast8_t{ 1 };  ///< BOD33RDY.
            static constexpr auto BOD33DET   = std::uint_fast8_t{ 1 };  ///< BOD33DET.
            static constexpr auto B33SRDY    = std::uint_fast8_t{ 1 };  ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 3 };  ///< RESERVED12.
            static constexpr auto DPLLLCKR   = std::uint_fast8_t{ 1 };  ///< DPLLLCKR.
            static constexpr auto DPLLLCKF   = std::uint_fast8_t{ 1 };  ///< DPLLLCKF.
            static constexpr auto DPLLLTO    = std::uint_fast8_t{ 1 };  ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ 14 }; ///< RESERVED18.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto XOSCRDY = std::uint_fast8_t{}; ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ XOSCRDY + Size::XOSCRDY }; ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = std::uint_fast8_t{ XOSC32KRDY + Size::XOSC32KRDY }; ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = std::uint_fast8_t{ OSC32KRDY + Size::OSC32KRDY }; ///< OSC8MRDY.
            static constexpr auto DFLLRDY = std::uint_fast8_t{ OSC8MRDY + Size::OSC8MRDY }; ///< DFLLRDY.
            static constexpr auto DFLLOOB = std::uint_fast8_t{ DFLLRDY + Size::DFLLRDY }; ///< DFLLOOB.
            static constexpr auto DFLLLCKF = std::uint_fast8_t{ DFLLOOB + Size::DFLLOOB }; ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = std::uint_fast8_t{ DFLLLCKF + Size::DFLLLCKF }; ///< DFLLLCKC.
            static constexpr auto DFLLRCS = std::uint_fast8_t{ DFLLLCKC + Size::DFLLLCKC }; ///< DFLLRCS.
            static constexpr auto BOD33RDY = std::uint_fast8_t{ DFLLRCS + Size::DFLLRCS }; ///< BOD33RDY.
            static constexpr auto BOD33DET = std::uint_fast8_t{ BOD33RDY + Size::BOD33RDY }; ///< BOD33DET.
            static constexpr auto B33SRDY = std::uint_fast8_t{ BOD33DET + Size::BOD33DET }; ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ B33SRDY + Size::B33SRDY }; ///< RESERVED12.
            static constexpr auto DPLLLCKR = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = std::uint_fast8_t{ DPLLLCKR + Size::DPLLLCKR }; ///< DPLLLCKF.
            static constexpr auto DPLLLTO = std::uint_fast8_t{ DPLLLCKF + Size::DPLLLCKF }; ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ DPLLLTO + Size::DPLLLTO }; ///< RESERVED18.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto XOSCRDY = mask<std::uint32_t>( Size::XOSCRDY, Bit::XOSCRDY ); ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = mask<std::uint32_t>( Size::XOSC32KRDY, Bit::XOSC32KRDY ); ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = mask<std::uint32_t>( Size::OSC32KRDY, Bit::OSC32KRDY ); ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = mask<std::uint32_t>( Size::OSC8MRDY, Bit::OSC8MRDY ); ///< OSC8MRDY.
            static constexpr auto DFLLRDY = mask<std::uint32_t>( Size::DFLLRDY, Bit::DFLLRDY ); ///< DFLLRDY.
            static constexpr auto DFLLOOB = mask<std::uint32_t>( Size::DFLLOOB, Bit::DFLLOOB ); ///< DFLLOOB.
            static constexpr auto DFLLLCKF = mask<std::uint32_t>( Size::DFLLLCKF, Bit::DFLLLCKF ); ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = mask<std::uint32_t>( Size::DFLLLCKC, Bit::DFLLLCKC ); ///< DFLLLCKC.
            static constexpr auto DFLLRCS = mask<std::uint32_t>( Size::DFLLRCS, Bit::DFLLRCS ); ///< DFLLRCS.
            static constexpr auto BOD33RDY = mask<std::uint32_t>( Size::BOD33RDY, Bit::BOD33RDY ); ///< BOD33RDY.
            static constexpr auto BOD33DET = mask<std::uint32_t>( Size::BOD33DET, Bit::BOD33DET ); ///< BOD33DET.
            static constexpr auto B33SRDY = mask<std::uint32_t>( Size::B33SRDY, Bit::B33SRDY ); ///< B33SRDY.
            static constexpr auto RESERVED12 = mask<std::uint32_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto DPLLLCKR = mask<std::uint32_t>( Size::DPLLLCKR, Bit::DPLLLCKR ); ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = mask<std::uint32_t>( Size::DPLLLCKF, Bit::DPLLLCKF ); ///< DPLLLCKF.
            static constexpr auto DPLLLTO = mask<std::uint32_t>( Size::DPLLLTO, Bit::DPLLLTO ); ///< DPLLLTO.
            static constexpr auto RESERVED18 = mask<std::uint32_t>( Size::RESERVED18, Bit::RESERVED18 ); ///< RESERVED18.
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
     * - XOSC Ready (XOSCRDY)
     * - XOSC32K Ready (XOSC32KRDY)
     * - OSC32K Ready (OSC32KRDY)
     * - OSC8M Ready (OSC8MRDY)
     * - DFLL Ready (DFLLRDY)
     * - DFLL Out Of Bounds (DFLLOOB)
     * - DFLL Lock Fine (DFLLLCKF)
     * - DFLL Lock Coarse (DFLLLCKC)
     * - DFLL Reference Clock Stopped (DFLLRCS)
     * - BOD33 Ready (BOD33RDY)
     * - BOD33 Detection (BOD33DET)
     * - BOD33 Synchronization Ready (B33SRDY)
     * - DPLL Lock Rise (DPLLLCKR)
     * - DPLL Lock Fall (DPLLLCKF)
     * - DPLL Lock Timeout (DPLLLTO)
     */
    class INTFLAG : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto XOSCRDY    = std::uint_fast8_t{ 1 };  ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ 1 };  ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY  = std::uint_fast8_t{ 1 };  ///< OSC32KRDY.
            static constexpr auto OSC8MRDY   = std::uint_fast8_t{ 1 };  ///< OSC8MRDY.
            static constexpr auto DFLLRDY    = std::uint_fast8_t{ 1 };  ///< DFLLRDY.
            static constexpr auto DFLLOOB    = std::uint_fast8_t{ 1 };  ///< DFLLOOB.
            static constexpr auto DFLLLCKF   = std::uint_fast8_t{ 1 };  ///< DFLLLCKF.
            static constexpr auto DFLLLCKC   = std::uint_fast8_t{ 1 };  ///< DFLLLCKC.
            static constexpr auto DFLLRCS    = std::uint_fast8_t{ 1 };  ///< DFLLRCS.
            static constexpr auto BOD33RDY   = std::uint_fast8_t{ 1 };  ///< BOD33RDY.
            static constexpr auto BOD33DET   = std::uint_fast8_t{ 1 };  ///< BOD33DET.
            static constexpr auto B33SRDY    = std::uint_fast8_t{ 1 };  ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 3 };  ///< RESERVED12.
            static constexpr auto DPLLLCKR   = std::uint_fast8_t{ 1 };  ///< DPLLLCKR.
            static constexpr auto DPLLLCKF   = std::uint_fast8_t{ 1 };  ///< DPLLLCKF.
            static constexpr auto DPLLLTO    = std::uint_fast8_t{ 1 };  ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ 14 }; ///< RESERVED18.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto XOSCRDY = std::uint_fast8_t{}; ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ XOSCRDY + Size::XOSCRDY }; ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = std::uint_fast8_t{ XOSC32KRDY + Size::XOSC32KRDY }; ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = std::uint_fast8_t{ OSC32KRDY + Size::OSC32KRDY }; ///< OSC8MRDY.
            static constexpr auto DFLLRDY = std::uint_fast8_t{ OSC8MRDY + Size::OSC8MRDY }; ///< DFLLRDY.
            static constexpr auto DFLLOOB = std::uint_fast8_t{ DFLLRDY + Size::DFLLRDY }; ///< DFLLOOB.
            static constexpr auto DFLLLCKF = std::uint_fast8_t{ DFLLOOB + Size::DFLLOOB }; ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = std::uint_fast8_t{ DFLLLCKF + Size::DFLLLCKF }; ///< DFLLLCKC.
            static constexpr auto DFLLRCS = std::uint_fast8_t{ DFLLLCKC + Size::DFLLLCKC }; ///< DFLLRCS.
            static constexpr auto BOD33RDY = std::uint_fast8_t{ DFLLRCS + Size::DFLLRCS }; ///< BOD33RDY.
            static constexpr auto BOD33DET = std::uint_fast8_t{ BOD33RDY + Size::BOD33RDY }; ///< BOD33DET.
            static constexpr auto B33SRDY = std::uint_fast8_t{ BOD33DET + Size::BOD33DET }; ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ B33SRDY + Size::B33SRDY }; ///< RESERVED12.
            static constexpr auto DPLLLCKR = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = std::uint_fast8_t{ DPLLLCKR + Size::DPLLLCKR }; ///< DPLLLCKF.
            static constexpr auto DPLLLTO = std::uint_fast8_t{ DPLLLCKF + Size::DPLLLCKF }; ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ DPLLLTO + Size::DPLLLTO }; ///< RESERVED18.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto XOSCRDY = mask<std::uint32_t>( Size::XOSCRDY, Bit::XOSCRDY ); ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = mask<std::uint32_t>( Size::XOSC32KRDY, Bit::XOSC32KRDY ); ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = mask<std::uint32_t>( Size::OSC32KRDY, Bit::OSC32KRDY ); ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = mask<std::uint32_t>( Size::OSC8MRDY, Bit::OSC8MRDY ); ///< OSC8MRDY.
            static constexpr auto DFLLRDY = mask<std::uint32_t>( Size::DFLLRDY, Bit::DFLLRDY ); ///< DFLLRDY.
            static constexpr auto DFLLOOB = mask<std::uint32_t>( Size::DFLLOOB, Bit::DFLLOOB ); ///< DFLLOOB.
            static constexpr auto DFLLLCKF = mask<std::uint32_t>( Size::DFLLLCKF, Bit::DFLLLCKF ); ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = mask<std::uint32_t>( Size::DFLLLCKC, Bit::DFLLLCKC ); ///< DFLLLCKC.
            static constexpr auto DFLLRCS = mask<std::uint32_t>( Size::DFLLRCS, Bit::DFLLRCS ); ///< DFLLRCS.
            static constexpr auto BOD33RDY = mask<std::uint32_t>( Size::BOD33RDY, Bit::BOD33RDY ); ///< BOD33RDY.
            static constexpr auto BOD33DET = mask<std::uint32_t>( Size::BOD33DET, Bit::BOD33DET ); ///< BOD33DET.
            static constexpr auto B33SRDY = mask<std::uint32_t>( Size::B33SRDY, Bit::B33SRDY ); ///< B33SRDY.
            static constexpr auto RESERVED12 = mask<std::uint32_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto DPLLLCKR = mask<std::uint32_t>( Size::DPLLLCKR, Bit::DPLLLCKR ); ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = mask<std::uint32_t>( Size::DPLLLCKF, Bit::DPLLLCKF ); ///< DPLLLCKF.
            static constexpr auto DPLLLTO = mask<std::uint32_t>( Size::DPLLLTO, Bit::DPLLLTO ); ///< DPLLLTO.
            static constexpr auto RESERVED18 = mask<std::uint32_t>( Size::RESERVED18, Bit::RESERVED18 ); ///< RESERVED18.
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
     * \brief Power and Clocks Status (PCLKSR) register.
     *
     * This register has the following fields:
     * - XOSC Ready (XOSCRDY)
     * - XOSC32K Ready (XOSC32KRDY)
     * - OSC32K Ready (OSC32KRDY)
     * - OSC8M Ready (OSC8MRDY)
     * - DFLL Ready (DFLLRDY)
     * - DFLL Out Of Bounds (DFLLOOB)
     * - DFLL Lock Fine (DFLLLCKF)
     * - DFLL Lock Coarse (DFLLLCKC)
     * - DFLL Reference Clock Stopped (DFLLRCS)
     * - BOD33 Ready (BOD33RDY)
     * - BOD33 Detection (BOD33DET)
     * - BOD33 Synchronization Ready (B33SRDY)
     * - DPLL Lock Rise (DPLLLCKR)
     * - DPLL Lock Fall (DPLLLCKF)
     * - DPLL Lock Timeout (DPLLLTO)
     */
    class PCLKSR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto XOSCRDY    = std::uint_fast8_t{ 1 };  ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ 1 };  ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY  = std::uint_fast8_t{ 1 };  ///< OSC32KRDY.
            static constexpr auto OSC8MRDY   = std::uint_fast8_t{ 1 };  ///< OSC8MRDY.
            static constexpr auto DFLLRDY    = std::uint_fast8_t{ 1 };  ///< DFLLRDY.
            static constexpr auto DFLLOOB    = std::uint_fast8_t{ 1 };  ///< DFLLOOB.
            static constexpr auto DFLLLCKF   = std::uint_fast8_t{ 1 };  ///< DFLLLCKF.
            static constexpr auto DFLLLCKC   = std::uint_fast8_t{ 1 };  ///< DFLLLCKC.
            static constexpr auto DFLLRCS    = std::uint_fast8_t{ 1 };  ///< DFLLRCS.
            static constexpr auto BOD33RDY   = std::uint_fast8_t{ 1 };  ///< BOD33RDY.
            static constexpr auto BOD33DET   = std::uint_fast8_t{ 1 };  ///< BOD33DET.
            static constexpr auto B33SRDY    = std::uint_fast8_t{ 1 };  ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 3 };  ///< RESERVED12.
            static constexpr auto DPLLLCKR   = std::uint_fast8_t{ 1 };  ///< DPLLLCKR.
            static constexpr auto DPLLLCKF   = std::uint_fast8_t{ 1 };  ///< DPLLLCKF.
            static constexpr auto DPLLLTO    = std::uint_fast8_t{ 1 };  ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ 14 }; ///< RESERVED18.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto XOSCRDY = std::uint_fast8_t{}; ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = std::uint_fast8_t{ XOSCRDY + Size::XOSCRDY }; ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = std::uint_fast8_t{ XOSC32KRDY + Size::XOSC32KRDY }; ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = std::uint_fast8_t{ OSC32KRDY + Size::OSC32KRDY }; ///< OSC8MRDY.
            static constexpr auto DFLLRDY = std::uint_fast8_t{ OSC8MRDY + Size::OSC8MRDY }; ///< DFLLRDY.
            static constexpr auto DFLLOOB = std::uint_fast8_t{ DFLLRDY + Size::DFLLRDY }; ///< DFLLOOB.
            static constexpr auto DFLLLCKF = std::uint_fast8_t{ DFLLOOB + Size::DFLLOOB }; ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = std::uint_fast8_t{ DFLLLCKF + Size::DFLLLCKF }; ///< DFLLLCKC.
            static constexpr auto DFLLRCS = std::uint_fast8_t{ DFLLLCKC + Size::DFLLLCKC }; ///< DFLLRCS.
            static constexpr auto BOD33RDY = std::uint_fast8_t{ DFLLRCS + Size::DFLLRCS }; ///< BOD33RDY.
            static constexpr auto BOD33DET = std::uint_fast8_t{ BOD33RDY + Size::BOD33RDY }; ///< BOD33DET.
            static constexpr auto B33SRDY = std::uint_fast8_t{ BOD33DET + Size::BOD33DET }; ///< B33SRDY.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ B33SRDY + Size::B33SRDY }; ///< RESERVED12.
            static constexpr auto DPLLLCKR = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = std::uint_fast8_t{ DPLLLCKR + Size::DPLLLCKR }; ///< DPLLLCKF.
            static constexpr auto DPLLLTO = std::uint_fast8_t{ DPLLLCKF + Size::DPLLLCKF }; ///< DPLLLTO.
            static constexpr auto RESERVED18 = std::uint_fast8_t{ DPLLLTO + Size::DPLLLTO }; ///< RESERVED18.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto XOSCRDY = mask<std::uint32_t>( Size::XOSCRDY, Bit::XOSCRDY ); ///< XOSCRDY.
            static constexpr auto XOSC32KRDY = mask<std::uint32_t>( Size::XOSC32KRDY, Bit::XOSC32KRDY ); ///< XOSC32KRDY.
            static constexpr auto OSC32KRDY = mask<std::uint32_t>( Size::OSC32KRDY, Bit::OSC32KRDY ); ///< OSC32KRDY.
            static constexpr auto OSC8MRDY = mask<std::uint32_t>( Size::OSC8MRDY, Bit::OSC8MRDY ); ///< OSC8MRDY.
            static constexpr auto DFLLRDY = mask<std::uint32_t>( Size::DFLLRDY, Bit::DFLLRDY ); ///< DFLLRDY.
            static constexpr auto DFLLOOB = mask<std::uint32_t>( Size::DFLLOOB, Bit::DFLLOOB ); ///< DFLLOOB.
            static constexpr auto DFLLLCKF = mask<std::uint32_t>( Size::DFLLLCKF, Bit::DFLLLCKF ); ///< DFLLLCKF.
            static constexpr auto DFLLLCKC = mask<std::uint32_t>( Size::DFLLLCKC, Bit::DFLLLCKC ); ///< DFLLLCKC.
            static constexpr auto DFLLRCS = mask<std::uint32_t>( Size::DFLLRCS, Bit::DFLLRCS ); ///< DFLLRCS.
            static constexpr auto BOD33RDY = mask<std::uint32_t>( Size::BOD33RDY, Bit::BOD33RDY ); ///< BOD33RDY.
            static constexpr auto BOD33DET = mask<std::uint32_t>( Size::BOD33DET, Bit::BOD33DET ); ///< BOD33DET.
            static constexpr auto B33SRDY = mask<std::uint32_t>( Size::B33SRDY, Bit::B33SRDY ); ///< B33SRDY.
            static constexpr auto RESERVED12 = mask<std::uint32_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto DPLLLCKR = mask<std::uint32_t>( Size::DPLLLCKR, Bit::DPLLLCKR ); ///< DPLLLCKR.
            static constexpr auto DPLLLCKF = mask<std::uint32_t>( Size::DPLLLCKF, Bit::DPLLLCKF ); ///< DPLLLCKF.
            static constexpr auto DPLLLTO = mask<std::uint32_t>( Size::DPLLLTO, Bit::DPLLLTO ); ///< DPLLLTO.
            static constexpr auto RESERVED18 = mask<std::uint32_t>( Size::RESERVED18, Bit::RESERVED18 ); ///< RESERVED18.
        };

        PCLKSR() = delete;

        PCLKSR( PCLKSR && ) = delete;

        PCLKSR( PCLKSR const & ) = delete;

        ~PCLKSR() = delete;

        auto operator=( PCLKSR && ) = delete;

        auto operator=( PCLKSR const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief External Multipurpose Crystal Oscillator Control (XOSC) register.
     *
     * This register has the following fields:
     * - Oscillator Enable (ENABLE)
     * - Crystal Oscillator Enable (XTALEN)
     * - Run in Standby (RUNSTDBY)
     * - On Demand Control (ONDEMAND)
     * - Oscillator Gain (GAIN)
     * - Automatic Amplitude Gain Control (AMPGC)
     * - Start-Up Time (STARTUP)
     */
    class XOSC : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE    = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto XTALEN    = std::uint_fast8_t{ 1 }; ///< XTALEN.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ 3 }; ///< RESERVED3.
            static constexpr auto RUNSTDBY  = std::uint_fast8_t{ 1 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND  = std::uint_fast8_t{ 1 }; ///< ONDEMAND.
            static constexpr auto GAIN      = std::uint_fast8_t{ 3 }; ///< GAIN.
            static constexpr auto AMPGC     = std::uint_fast8_t{ 1 }; ///< AMPGC.
            static constexpr auto STARTUP   = std::uint_fast8_t{ 4 }; ///< STARTUP.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto XTALEN = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< XTALEN.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ XTALEN + Size::XTALEN }; ///< RESERVED3.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED3 + Size::RESERVED3 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< ONDEMAND.
            static constexpr auto GAIN = std::uint_fast8_t{ ONDEMAND + Size::ONDEMAND }; ///< GAIN.
            static constexpr auto AMPGC = std::uint_fast8_t{ GAIN + Size::GAIN }; ///< AMPGC.
            static constexpr auto STARTUP = std::uint_fast8_t{ AMPGC + Size::AMPGC }; ///< STARTUP.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint16_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto XTALEN = mask<std::uint16_t>( Size::XTALEN, Bit::XTALEN ); ///< XTALEN.
            static constexpr auto RESERVED3 = mask<std::uint16_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
            static constexpr auto RUNSTDBY = mask<std::uint16_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto ONDEMAND = mask<std::uint16_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
            static constexpr auto GAIN = mask<std::uint16_t>( Size::GAIN, Bit::GAIN ); ///< GAIN.
            static constexpr auto AMPGC = mask<std::uint16_t>( Size::AMPGC, Bit::AMPGC ); ///< AMPGC.
            static constexpr auto STARTUP = mask<std::uint16_t>( Size::STARTUP, Bit::STARTUP ); ///< STARTUP.
        };

        XOSC() = delete;

        XOSC( XOSC && ) = delete;

        XOSC( XOSC const & ) = delete;

        ~XOSC() = delete;

        auto operator=( XOSC && ) = delete;

        auto operator=( XOSC const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief 32 kHz External Crystal Oscillator Control (XOSC32K) register.
     *
     * This register has the following fields:
     * - Oscillator Enable (ENABLE)
     * - Crystal Oscillator Enable (XTALEN)
     * - 32 kHz Output Enable (EN32K)
     * - Automatic Amplitude Control Enable (AAMPEN)
     * - Run in Standby (RUNSTDBY)
     * - On Demand Control (ONDEMAND)
     * - Oscillator Start-Up Time (STARTUP)
     * - Write Lock (WRTLOCK)
     */
    class XOSC32K : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto XTALEN     = std::uint_fast8_t{ 1 }; ///< XTALEN.
            static constexpr auto EN32K      = std::uint_fast8_t{ 1 }; ///< EN32K.
            static constexpr auto RESERVED4  = std::uint_fast8_t{ 1 }; ///< RESERVED4.
            static constexpr auto AAMPEN     = std::uint_fast8_t{ 1 }; ///< AAMPEN.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND   = std::uint_fast8_t{ 1 }; ///< ONDEMAND.
            static constexpr auto STARTUP    = std::uint_fast8_t{ 3 }; ///< STARTUP.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ 1 }; ///< RESERVED11.
            static constexpr auto WRTLOCK    = std::uint_fast8_t{ 1 }; ///< WRTLOCK.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ 3 }; ///< RESERVED13.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto XTALEN = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< XTALEN.
            static constexpr auto EN32K = std::uint_fast8_t{ XTALEN + Size::XTALEN }; ///< EN32K.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ EN32K + Size::EN32K }; ///< RESERVED4.
            static constexpr auto AAMPEN = std::uint_fast8_t{ RESERVED4 + Size::RESERVED4 }; ///< AAMPEN.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ AAMPEN + Size::AAMPEN }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< ONDEMAND.
            static constexpr auto STARTUP = std::uint_fast8_t{ ONDEMAND + Size::ONDEMAND }; ///< STARTUP.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ STARTUP + Size::STARTUP }; ///< RESERVED11.
            static constexpr auto WRTLOCK = std::uint_fast8_t{ RESERVED11 + Size::RESERVED11 }; ///< WRTLOCK.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ WRTLOCK + Size::WRTLOCK }; ///< RESERVED13.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint16_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto XTALEN = mask<std::uint16_t>( Size::XTALEN, Bit::XTALEN ); ///< XTALEN.
            static constexpr auto EN32K = mask<std::uint16_t>( Size::EN32K, Bit::EN32K ); ///< EN32K.
            static constexpr auto RESERVED4 = mask<std::uint16_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
            static constexpr auto AAMPEN = mask<std::uint16_t>( Size::AAMPEN, Bit::AAMPEN ); ///< AAMPEN.
            static constexpr auto RUNSTDBY = mask<std::uint16_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto ONDEMAND = mask<std::uint16_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
            static constexpr auto STARTUP = mask<std::uint16_t>( Size::STARTUP, Bit::STARTUP ); ///< STARTUP.
            static constexpr auto RESERVED11 = mask<std::uint16_t>( Size::RESERVED11, Bit::RESERVED11 ); ///< RESERVED11.
            static constexpr auto WRTLOCK = mask<std::uint16_t>( Size::WRTLOCK, Bit::WRTLOCK ); ///< WRTLOCK.
            static constexpr auto RESERVED13 = mask<std::uint16_t>( Size::RESERVED13, Bit::RESERVED13 ); ///< RESERVED13.
        };

        XOSC32K() = delete;

        XOSC32K( XOSC32K && ) = delete;

        XOSC32K( XOSC32K const & ) = delete;

        ~XOSC32K() = delete;

        auto operator=( XOSC32K && ) = delete;

        auto operator=( XOSC32K const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief 32 kHz Internal Oscillator Control (OSC32K) register.
     *
     * This register has the following fields:
     * - Oscillator Enable (ENABLE)
     * - 32 kHz Output Enable (EN32K)
     * - Run in Standby (RUNSTDBY)
     * - On Demand Control (ONDEMAND)
     * - Oscillator Start-Up Time (STARTUP)
     * - Write Lock (WRTLOCK)
     * - Oscillator Calibration (CALIB)
     */
    class OSC32K : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto EN32K      = std::uint_fast8_t{ 1 }; ///< EN32K.
            static constexpr auto RESERVED3  = std::uint_fast8_t{ 3 }; ///< RESERVED3.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND   = std::uint_fast8_t{ 1 }; ///< ONDEMAND.
            static constexpr auto STARTUP    = std::uint_fast8_t{ 3 }; ///< STARTUP.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ 1 }; ///< RESERVED11.
            static constexpr auto WRTLOCK    = std::uint_fast8_t{ 1 }; ///< WRTLOCK.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ 3 }; ///< RESERVED13.
            static constexpr auto CALIB      = std::uint_fast8_t{ 7 }; ///< CALIB.
            static constexpr auto RESERVED23 = std::uint_fast8_t{ 9 }; ///< RESERVED23.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto EN32K = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< EN32K.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ EN32K + Size::EN32K }; ///< RESERVED3.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED3 + Size::RESERVED3 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< ONDEMAND.
            static constexpr auto STARTUP = std::uint_fast8_t{ ONDEMAND + Size::ONDEMAND }; ///< STARTUP.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ STARTUP + Size::STARTUP }; ///< RESERVED11.
            static constexpr auto WRTLOCK = std::uint_fast8_t{ RESERVED11 + Size::RESERVED11 }; ///< WRTLOCK.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ WRTLOCK + Size::WRTLOCK }; ///< RESERVED13.
            static constexpr auto CALIB = std::uint_fast8_t{ RESERVED13 + Size::RESERVED13 }; ///< CALIB.
            static constexpr auto RESERVED23 = std::uint_fast8_t{ CALIB + Size::CALIB }; ///< RESERVED23.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint32_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto EN32K = mask<std::uint32_t>( Size::EN32K, Bit::EN32K ); ///< EN32K.
            static constexpr auto RESERVED3 = mask<std::uint32_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
            static constexpr auto RUNSTDBY = mask<std::uint32_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto ONDEMAND = mask<std::uint32_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
            static constexpr auto STARTUP = mask<std::uint32_t>( Size::STARTUP, Bit::STARTUP ); ///< STARTUP.
            static constexpr auto RESERVED11 = mask<std::uint32_t>( Size::RESERVED11, Bit::RESERVED11 ); ///< RESERVED11.
            static constexpr auto WRTLOCK = mask<std::uint32_t>( Size::WRTLOCK, Bit::WRTLOCK ); ///< WRTLOCK.
            static constexpr auto RESERVED13 = mask<std::uint32_t>( Size::RESERVED13, Bit::RESERVED13 ); ///< RESERVED13.
            static constexpr auto CALIB = mask<std::uint32_t>( Size::CALIB, Bit::CALIB ); ///< CALIB.
            static constexpr auto RESERVED23 = mask<std::uint32_t>( Size::RESERVED23, Bit::RESERVED23 ); ///< RESERVED23.
        };

        OSC32K() = delete;

        OSC32K( OSC32K && ) = delete;

        OSC32K( OSC32K const & ) = delete;

        ~OSC32K() = delete;

        auto operator=( OSC32K && ) = delete;

        auto operator=( OSC32K const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief 32 kHz Ultra Low Power Internal Oscillator Control (OSCULP32K) register.
     *
     * This register has the following fields:
     * - Oscillator Calibration (CALIB)
     * - Write Lock (WRTLOCK)
     */
    class OSCULP32K : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CALIB     = std::uint_fast8_t{ 5 }; ///< CALIB.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ 2 }; ///< RESERVED5.
            static constexpr auto WRTLOCK   = std::uint_fast8_t{ 1 }; ///< WRTLOCK.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CALIB = std::uint_fast8_t{}; ///< CALIB.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ CALIB + Size::CALIB }; ///< RESERVED5.
            static constexpr auto WRTLOCK = std::uint_fast8_t{ RESERVED5 + Size::RESERVED5 }; ///< WRTLOCK.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CALIB = mask<std::uint8_t>( Size::CALIB, Bit::CALIB ); ///< CALIB.
            static constexpr auto RESERVED5 = mask<std::uint8_t>( Size::RESERVED5, Bit::RESERVED5 ); ///< RESERVED5.
            static constexpr auto WRTLOCK = mask<std::uint8_t>( Size::WRTLOCK, Bit::WRTLOCK ); ///< WRTLOCK.
        };

        OSCULP32K() = delete;

        OSCULP32K( OSCULP32K && ) = delete;

        OSCULP32K( OSCULP32K const & ) = delete;

        ~OSCULP32K() = delete;

        auto operator=( OSCULP32K && ) = delete;

        auto operator=( OSCULP32K const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief 8 MHz Internal Oscillator Control (OSC8M) register.
     *
     * This register has the following fields:
     * - Oscillator Enable (ENABLE)
     * - Run in Standby (RUNSTDBY)
     * - On Demand Control (ONDEMAND)
     * - Oscillator Prescaler (PRESC)
     * - Oscillator Calibration (CALIB)
     * - Oscillator Frequency Range (FRANGE)
     */
    class OSC8M : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 };  ///< ENABLE.
            static constexpr auto RESERVED2  = std::uint_fast8_t{ 4 };  ///< RESERVED2.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 };  ///< RUNSTDBY.
            static constexpr auto ONDEMAND   = std::uint_fast8_t{ 1 };  ///< ONDEMAND.
            static constexpr auto PRESC      = std::uint_fast8_t{ 2 };  ///< PRESC.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ 6 };  ///< RESERVED10.
            static constexpr auto CALIB      = std::uint_fast8_t{ 12 }; ///< CALIB.
            static constexpr auto RESERVED28 = std::uint_fast8_t{ 2 };  ///< RESERVED28.
            static constexpr auto FRANGE     = std::uint_fast8_t{ 2 };  ///< FRANGE.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< RESERVED2.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< ONDEMAND.
            static constexpr auto PRESC = std::uint_fast8_t{ ONDEMAND + Size::ONDEMAND }; ///< PRESC.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ PRESC + Size::PRESC }; ///< RESERVED10.
            static constexpr auto CALIB = std::uint_fast8_t{ RESERVED10 + Size::RESERVED10 }; ///< CALIB.
            static constexpr auto RESERVED28 = std::uint_fast8_t{ CALIB + Size::CALIB }; ///< RESERVED28.
            static constexpr auto FRANGE = std::uint_fast8_t{ RESERVED28 + Size::RESERVED28 }; ///< FRANGE.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint32_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto RESERVED2 = mask<std::uint32_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
            static constexpr auto RUNSTDBY = mask<std::uint32_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto ONDEMAND = mask<std::uint32_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
            static constexpr auto PRESC = mask<std::uint32_t>( Size::PRESC, Bit::PRESC ); ///< PRESC.
            static constexpr auto RESERVED10 = mask<std::uint32_t>( Size::RESERVED10, Bit::RESERVED10 ); ///< RESERVED10.
            static constexpr auto CALIB = mask<std::uint32_t>( Size::CALIB, Bit::CALIB ); ///< CALIB.
            static constexpr auto RESERVED28 = mask<std::uint32_t>( Size::RESERVED28, Bit::RESERVED28 ); ///< RESERVED28.
            static constexpr auto FRANGE = mask<std::uint32_t>( Size::FRANGE, Bit::FRANGE ); ///< FRANGE.
        };

        OSC8M() = delete;

        OSC8M( OSC8M && ) = delete;

        OSC8M( OSC8M const & ) = delete;

        ~OSC8M() = delete;

        auto operator=( OSC8M && ) = delete;

        auto operator=( OSC8M const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DFLL48M Control (DFLLCTRL) register.
     *
     * This register has the following fields:
     * - DFLL Enable (ENABLE)
     * - Operating Mode Selection (MODE)
     * - Stable DFLL Frequency (STABLE)
     * - Lose Lock After Wake (LLAW)
     * - USB Clock Recovery Mode (USBCRM)
     * - On Demand Control (ONDEMAND)
     * - Chill Cycle Disable (CCDIS)
     * - Quick Lock Disable (QLDIS)
     * - Bypass Coarse Lock (BPLCKC)
     * - Wait Lock (WAITLOCK)
     */
    class DFLLCTRL : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto MODE       = std::uint_fast8_t{ 1 }; ///< MODE.
            static constexpr auto STABLE     = std::uint_fast8_t{ 1 }; ///< STABLE.
            static constexpr auto LLAW       = std::uint_fast8_t{ 1 }; ///< LLAW.
            static constexpr auto USBCRM     = std::uint_fast8_t{ 1 }; ///< USBCRM.
            static constexpr auto RESERVED6  = std::uint_fast8_t{ 1 }; ///< RESERVED6.
            static constexpr auto ONDEMAND   = std::uint_fast8_t{ 1 }; ///< ONDEMAND.
            static constexpr auto CCDIS      = std::uint_fast8_t{ 1 }; ///< CCDIS.
            static constexpr auto QLDIS      = std::uint_fast8_t{ 1 }; ///< QLDIS.
            static constexpr auto BPLCKC     = std::uint_fast8_t{ 1 }; ///< BPLCKC.
            static constexpr auto WAITLOCK   = std::uint_fast8_t{ 1 }; ///< WAITLOCK.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 4 }; ///< RESERVED12.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto MODE = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< MODE.
            static constexpr auto STABLE = std::uint_fast8_t{ MODE + Size::MODE }; ///< STABLE.
            static constexpr auto LLAW = std::uint_fast8_t{ STABLE + Size::STABLE }; ///< LLAW.
            static constexpr auto USBCRM = std::uint_fast8_t{ LLAW + Size::LLAW }; ///< USBCRM.
            static constexpr auto RESERVED6 = std::uint_fast8_t{ USBCRM + Size::USBCRM }; ///< RESERVED6.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< ONDEMAND.
            static constexpr auto CCDIS = std::uint_fast8_t{ ONDEMAND + Size::ONDEMAND }; ///< CCDIS.
            static constexpr auto QLDIS = std::uint_fast8_t{ CCDIS + Size::CCDIS }; ///< QLDIS.
            static constexpr auto BPLCKC = std::uint_fast8_t{ QLDIS + Size::QLDIS }; ///< BPLCKC.
            static constexpr auto WAITLOCK = std::uint_fast8_t{ BPLCKC + Size::BPLCKC }; ///< WAITLOCK.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ WAITLOCK + Size::WAITLOCK }; ///< RESERVED12.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint16_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto MODE = mask<std::uint16_t>( Size::MODE, Bit::MODE ); ///< MODE.
            static constexpr auto STABLE = mask<std::uint16_t>( Size::STABLE, Bit::STABLE ); ///< STABLE.
            static constexpr auto LLAW = mask<std::uint16_t>( Size::LLAW, Bit::LLAW ); ///< LLAW.
            static constexpr auto USBCRM = mask<std::uint16_t>( Size::USBCRM, Bit::USBCRM ); ///< USBCRM.
            static constexpr auto RESERVED6 = mask<std::uint16_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
            static constexpr auto ONDEMAND = mask<std::uint16_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
            static constexpr auto CCDIS = mask<std::uint16_t>( Size::CCDIS, Bit::CCDIS ); ///< CCDIS.
            static constexpr auto QLDIS = mask<std::uint16_t>( Size::QLDIS, Bit::QLDIS ); ///< QLDIS.
            static constexpr auto BPLCKC = mask<std::uint16_t>( Size::BPLCKC, Bit::BPLCKC ); ///< BPLCKC.
            static constexpr auto WAITLOCK = mask<std::uint16_t>( Size::WAITLOCK, Bit::WAITLOCK ); ///< WAITLOCK.
            static constexpr auto RESERVED12 = mask<std::uint16_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
        };

        DFLLCTRL() = delete;

        DFLLCTRL( DFLLCTRL && ) = delete;

        DFLLCTRL( DFLLCTRL const & ) = delete;

        ~DFLLCTRL() = delete;

        auto operator=( DFLLCTRL && ) = delete;

        auto operator=( DFLLCTRL const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief DFLL48M Value (DFLLVAL) register.
     *
     * This register has the following fields:
     * - Fine Value (FINE)
     * - Coarse Value (COARSE)
     * - Multiplication Ratio Difference (DIFF)
     */
    class DFLLVAL : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto FINE   = std::uint_fast8_t{ 10 }; ///< FINE.
            static constexpr auto COARSE = std::uint_fast8_t{ 6 };  ///< COARSE.
            static constexpr auto DIFF   = std::uint_fast8_t{ 16 }; ///< DIFF.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto FINE = std::uint_fast8_t{}; ///< FINE.
            static constexpr auto COARSE = std::uint_fast8_t{ FINE + Size::FINE }; ///< COARSE.
            static constexpr auto DIFF = std::uint_fast8_t{ COARSE + Size::COARSE }; ///< DIFF.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto FINE = mask<std::uint32_t>( Size::FINE, Bit::FINE ); ///< FINE.
            static constexpr auto COARSE = mask<std::uint32_t>( Size::COARSE, Bit::COARSE ); ///< COARSE.
            static constexpr auto DIFF = mask<std::uint32_t>( Size::DIFF, Bit::DIFF ); ///< DIFF.
        };

        DFLLVAL() = delete;

        DFLLVAL( DFLLVAL && ) = delete;

        DFLLVAL( DFLLVAL const & ) = delete;

        ~DFLLVAL() = delete;

        auto operator=( DFLLVAL && ) = delete;

        auto operator=( DFLLVAL const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DFLL48M Multiplier (DFLLMUL) register.
     *
     * This register has the following fields:
     * - DFLL Multiply Factor (MUL)
     * - Fine Maximum Step (FSTEP)
     * - Coarse Maximum Step (CSTEP)
     */
    class DFLLMUL : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto MUL   = std::uint_fast8_t{ 16 }; ///< MUL.
            static constexpr auto FSTEP = std::uint_fast8_t{ 10 }; ///< FSTEP.
            static constexpr auto CSTEP = std::uint_fast8_t{ 6 };  ///< CSTEP.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto MUL   = std::uint_fast8_t{};                  ///< MUL.
            static constexpr auto FSTEP = std::uint_fast8_t{ MUL + Size::MUL }; ///< FSTEP.
            static constexpr auto CSTEP = std::uint_fast8_t{ FSTEP + Size::FSTEP }; ///< CSTEP.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto MUL = mask<std::uint32_t>( Size::MUL, Bit::MUL ); ///< MUL.
            static constexpr auto FSTEP = mask<std::uint32_t>( Size::FSTEP, Bit::FSTEP ); ///< FSTEP.
            static constexpr auto CSTEP = mask<std::uint32_t>( Size::CSTEP, Bit::CSTEP ); ///< CSTEP.
        };

        DFLLMUL() = delete;

        DFLLMUL( DFLLMUL && ) = delete;

        DFLLMUL( DFLLMUL const & ) = delete;

        ~DFLLMUL() = delete;

        auto operator=( DFLLMUL && ) = delete;

        auto operator=( DFLLMUL const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DFLL48M Synchronization (DFLLSYNC) register.
     *
     * This register has the following fields:
     * - Read Request (READREQ)
     */
    class DFLLSYNC : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 7 }; ///< RESERVED0.
            static constexpr auto READREQ   = std::uint_fast8_t{ 1 }; ///< READREQ.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto READREQ = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< READREQ.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint8_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto READREQ = mask<std::uint8_t>( Size::READREQ, Bit::READREQ ); ///< READREQ.
        };

        DFLLSYNC() = delete;

        DFLLSYNC( DFLLSYNC && ) = delete;

        DFLLSYNC( DFLLSYNC const & ) = delete;

        ~DFLLSYNC() = delete;

        auto operator=( DFLLSYNC && ) = delete;

        auto operator=( DFLLSYNC const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief 3.3 V Brown-Out Detector Control (BOD33) register.
     *
     * This register has the following fields:
     * - Enable (ENABLE)
     * - Hysteresis (HYST)
     * - BOD33 Action (ACTION)
     * - Run in Standby (RUNSTDBY)
     * - Operation Mode (MODE)
     * - Clock Enable (CEN)
     * - Prescaler Select (PSEL)
     * - BOD33 Threshold Level (LEVEL)
     */
    class BOD33 : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 };  ///< ENABLE.
            static constexpr auto HYST       = std::uint_fast8_t{ 1 };  ///< HYST.
            static constexpr auto ACTION     = std::uint_fast8_t{ 2 };  ///< ACTION.
            static constexpr auto RESERVED5  = std::uint_fast8_t{ 1 };  ///< RESERVED5.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 };  ///< RUNSTDBY.
            static constexpr auto RESERVED7  = std::uint_fast8_t{ 1 };  ///< RESERVED7.
            static constexpr auto MODE       = std::uint_fast8_t{ 1 };  ///< MODE.
            static constexpr auto CEN        = std::uint_fast8_t{ 1 };  ///< CEN.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ 2 };  ///< RESERVED10.
            static constexpr auto PSEL       = std::uint_fast8_t{ 4 };  ///< PSEL.
            static constexpr auto LEVEL      = std::uint_fast8_t{ 6 };  ///< LEVEL.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 10 }; ///< RESERVED22.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto HYST = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< HYST.
            static constexpr auto ACTION = std::uint_fast8_t{ HYST + Size::HYST }; ///< ACTION.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ ACTION + Size::ACTION }; ///< RESERVED5.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED5 + Size::RESERVED5 }; ///< RUNSTDBY.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< RESERVED7.
            static constexpr auto MODE = std::uint_fast8_t{ RESERVED7 + Size::RESERVED7 }; ///< MODE.
            static constexpr auto CEN = std::uint_fast8_t{ MODE + Size::MODE }; ///< CEN.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ CEN + Size::CEN }; ///< RESERVED10.
            static constexpr auto PSEL = std::uint_fast8_t{ RESERVED10 + Size::RESERVED10 }; ///< PSEL.
            static constexpr auto LEVEL = std::uint_fast8_t{ PSEL + Size::PSEL }; ///< LEVEL.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ LEVEL + Size::LEVEL }; ///< RESERVED22.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint32_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto HYST = mask<std::uint32_t>( Size::HYST, Bit::HYST ); ///< HYST.
            static constexpr auto ACTION = mask<std::uint32_t>( Size::ACTION, Bit::ACTION ); ///< ACTION.
            static constexpr auto RESERVED5 = mask<std::uint32_t>( Size::RESERVED5, Bit::RESERVED5 ); ///< RESERVED5.
            static constexpr auto RUNSTDBY = mask<std::uint32_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto RESERVED7 = mask<std::uint32_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
            static constexpr auto MODE = mask<std::uint32_t>( Size::MODE, Bit::MODE ); ///< MODE.
            static constexpr auto CEN = mask<std::uint32_t>( Size::CEN, Bit::CEN ); ///< CEN.
            static constexpr auto RESERVED10 = mask<std::uint32_t>( Size::RESERVED10, Bit::RESERVED10 ); ///< RESERVED10.
            static constexpr auto PSEL = mask<std::uint32_t>( Size::PSEL, Bit::PSEL ); ///< PSEL.
            static constexpr auto LEVEL = mask<std::uint32_t>( Size::LEVEL, Bit::LEVEL ); ///< LEVEL.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
        };

        /**
         * \brief ACTION.
         */
        enum ACTION : std::uint32_t {
            ACTION_NONE      = 0x0 << Bit::ACTION, ///< No action.
            ACTION_RESET     = 0x1 << Bit::ACTION, ///< The BOD33 generates a reset.
            ACTION_INTERRUPT = 0x2 << Bit::ACTION, ///< The BOD33 generates an interrupt.
        };

        /**
         * \brief PSEL.
         */
        enum PSEL : std::uint32_t {
            PSEL_DIV2   = 0x0 << Bit::PSEL, ///< Divide clock by 2.
            PSEL_DIV4   = 0x1 << Bit::PSEL, ///< Divide clock by 4.
            PSEL_DIV8   = 0x2 << Bit::PSEL, ///< Divide clock by 8.
            PSEL_DIV16  = 0x3 << Bit::PSEL, ///< Divide clock by 16.
            PSEL_DIV32  = 0x4 << Bit::PSEL, ///< Divide clock by 32.
            PSEL_DIV64  = 0x5 << Bit::PSEL, ///< Divide clock by 64.
            PSEL_DIV128 = 0x6 << Bit::PSEL, ///< Divide clock by 128.
            PSEL_DIV256 = 0x7 << Bit::PSEL, ///< Divide clock by 256.
            PSEL_DIV512 = 0x8 << Bit::PSEL, ///< Divide clock by 512.
            PSEL_DIV1K  = 0x9 << Bit::PSEL, ///< Divide clock by 1024.
            PSEL_DIV2K  = 0xA << Bit::PSEL, ///< Divide clock by 2048.
            PSEL_DIV4K  = 0xB << Bit::PSEL, ///< Divide clock by 4096.
            PSEL_DIV8K  = 0xC << Bit::PSEL, ///< Divide clock by 8192.
            PSEL_DIV16K = 0xD << Bit::PSEL, ///< Divide clock by 16384.
            PSEL_DIV32K = 0xE << Bit::PSEL, ///< Divide clock by 32768.
            PSEL_DIV64K = 0xF << Bit::PSEL, ///< Divide clock by 65536.
        };

        BOD33() = delete;

        BOD33( BOD33 && ) = delete;

        BOD33( BOD33 const & ) = delete;

        ~BOD33() = delete;

        auto operator=( BOD33 && ) = delete;

        auto operator=( BOD33 const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Voltage Regulator System Control (VREG) register.
     *
     * This register has the following fields:
     * - Enable (ENABLE)
     * - Run in Standby (RUNSTDBY)
     * - Force LDO Voltage Regulator (FORCELDO)
     */
    class VREG : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE     = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto RESERVED2  = std::uint_fast8_t{ 4 }; ///< RESERVED2.
            static constexpr auto RUNSTDBY   = std::uint_fast8_t{ 1 }; ///< RUNSTDBY.
            static constexpr auto RESERVED7  = std::uint_fast8_t{ 6 }; ///< RESERVED7.
            static constexpr auto FORCELDO   = std::uint_fast8_t{ 1 }; ///< FORCELDO.
            static constexpr auto RESERVED14 = std::uint_fast8_t{ 2 }; ///< RESERVED14.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< RESERVED2.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< RUNSTDBY.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< RESERVED7.
            static constexpr auto FORCELDO = std::uint_fast8_t{ RESERVED7 + Size::RESERVED7 }; ///< FORCELDO.
            static constexpr auto RESERVED14 = std::uint_fast8_t{ FORCELDO + Size::FORCELDO }; ///< RESERVED14.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint16_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint16_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto RESERVED2 = mask<std::uint16_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
            static constexpr auto RUNSTDBY = mask<std::uint16_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto RESERVED7 = mask<std::uint16_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
            static constexpr auto FORCELDO = mask<std::uint16_t>( Size::FORCELDO, Bit::FORCELDO ); ///< FORCELDO.
            static constexpr auto RESERVED14 = mask<std::uint16_t>( Size::RESERVED14, Bit::RESERVED14 ); ///< RESERVED14.
        };

        VREG() = delete;

        VREG( VREG && ) = delete;

        VREG( VREG const & ) = delete;

        ~VREG() = delete;

        auto operator=( VREG && ) = delete;

        auto operator=( VREG const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief Voltage References System Control (VREF) register.
     *
     * This register has the following fields:
     * - Temperature Sensor Enable (TSEN)
     * - Bandgap Output Enable (BGOUTEN)
     * - Bandgap Voltage Generator Calibration (CALIB)
     */
    class VREF : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto TSEN       = std::uint_fast8_t{ 1 };  ///< TSEN.
            static constexpr auto BGOUTEN    = std::uint_fast8_t{ 1 };  ///< BGOUTEN.
            static constexpr auto RESERVED3  = std::uint_fast8_t{ 13 }; ///< RESERVED3.
            static constexpr auto CALIB      = std::uint_fast8_t{ 11 }; ///< CALIB.
            static constexpr auto RESERVED27 = std::uint_fast8_t{ 5 };  ///< RESERVED27.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto TSEN = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< TSEN.
            static constexpr auto BGOUTEN = std::uint_fast8_t{ TSEN + Size::TSEN }; ///< BGOUTEN.
            static constexpr auto RESERVED3 = std::uint_fast8_t{ BGOUTEN + Size::BGOUTEN }; ///< RESERVED3.
            static constexpr auto CALIB = std::uint_fast8_t{ RESERVED3 + Size::RESERVED3 }; ///< CALIB.
            static constexpr auto RESERVED27 = std::uint_fast8_t{ CALIB + Size::CALIB }; ///< RESERVED27.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto TSEN = mask<std::uint32_t>( Size::TSEN, Bit::TSEN ); ///< TSEN.
            static constexpr auto BGOUTEN = mask<std::uint32_t>( Size::BGOUTEN, Bit::BGOUTEN ); ///< BGOUTEN.
            static constexpr auto RESERVED3 = mask<std::uint32_t>( Size::RESERVED3, Bit::RESERVED3 ); ///< RESERVED3.
            static constexpr auto CALIB = mask<std::uint32_t>( Size::CALIB, Bit::CALIB ); ///< CALIB.
            static constexpr auto RESERVED27 = mask<std::uint32_t>( Size::RESERVED27, Bit::RESERVED27 ); ///< RESERVED27.
        };

        VREF() = delete;

        VREF( VREF && ) = delete;

        VREF( VREF const & ) = delete;

        ~VREF() = delete;

        auto operator=( VREF && ) = delete;

        auto operator=( VREF const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DPLL Control A (DPLLCTRLA) register.
     *
     * This register has the following fields:
     * - DPLL Enable (ENABLE)
     * - Run in Standby (RUNSTDBY)
     * - On Demand Clock Activation (ONDEMAND)
     */
    class DPLLCTRLA : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto ENABLE    = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 4 }; ///< RESERVED2.
            static constexpr auto RUNSTDBY  = std::uint_fast8_t{ 1 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND  = std::uint_fast8_t{ 1 }; ///< ONDEMAND.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto ENABLE = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< ENABLE.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< RESERVED2.
            static constexpr auto RUNSTDBY = std::uint_fast8_t{ RESERVED2 + Size::RESERVED2 }; ///< RUNSTDBY.
            static constexpr auto ONDEMAND = std::uint_fast8_t{ RUNSTDBY + Size::RUNSTDBY }; ///< ONDEMAND.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint8_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto ENABLE = mask<std::uint8_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
            static constexpr auto RUNSTDBY = mask<std::uint8_t>( Size::RUNSTDBY, Bit::RUNSTDBY ); ///< RUNSTDBY.
            static constexpr auto ONDEMAND = mask<std::uint8_t>( Size::ONDEMAND, Bit::ONDEMAND ); ///< ONDEMAND.
        };

        DPLLCTRLA() = delete;

        DPLLCTRLA( DPLLCTRLA && ) = delete;

        DPLLCTRLA( DPLLCTRLA const & ) = delete;

        ~DPLLCTRLA() = delete;

        auto operator=( DPLLCTRLA && ) = delete;

        auto operator=( DPLLCTRLA const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

    /**
     * \brief DPLL Ratio Control (DPLLRATIO) register.
     *
     * This register has the following fields:
     * - Loop Divider Ratio (LDR)
     * - Loop Divider Ratio Fractional Part (LDRFRAC)
     */
    class DPLLRATIO : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto LDR        = std::uint_fast8_t{ 12 }; ///< LDR.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ 4 };  ///< RESERVED12.
            static constexpr auto LDRFRAC    = std::uint_fast8_t{ 4 };  ///< LDRFRAC.
            static constexpr auto RESERVED20 = std::uint_fast8_t{ 12 }; ///< RESERVED20.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto LDR = std::uint_fast8_t{}; ///< LDR.
            static constexpr auto RESERVED12 = std::uint_fast8_t{ LDR + Size::LDR }; ///< RESERVED12.
            static constexpr auto LDRFRAC = std::uint_fast8_t{ RESERVED12 + Size::RESERVED12 }; ///< LDRFRAC.
            static constexpr auto RESERVED20 = std::uint_fast8_t{ LDRFRAC + Size::LDRFRAC }; ///< RESERVED20.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto LDR = mask<std::uint32_t>( Size::LDR, Bit::LDR ); ///< LDR.
            static constexpr auto RESERVED12 = mask<std::uint32_t>( Size::RESERVED12, Bit::RESERVED12 ); ///< RESERVED12.
            static constexpr auto LDRFRAC = mask<std::uint32_t>( Size::LDRFRAC, Bit::LDRFRAC ); ///< LDRFRAC.
            static constexpr auto RESERVED20 = mask<std::uint32_t>( Size::RESERVED20, Bit::RESERVED20 ); ///< RESERVED20.
        };

        DPLLRATIO() = delete;

        DPLLRATIO( DPLLRATIO && ) = delete;

        DPLLRATIO( DPLLRATIO const & ) = delete;

        ~DPLLRATIO() = delete;

        auto operator=( DPLLRATIO && ) = delete;

        auto operator=( DPLLRATIO const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DPLL Control B (DPLLCTRLB) register.
     *
     * This register has the following fields:
     * - Proportional Integral Filter Selection (FILTER)
     * - Low-Power Enable (LPEN)
     * - Wake Up Fast (WUF)
     * - Reference Clock Selection (REFCLK)
     * - Lock Time (LTIME)
     * - Lock Bypass (LBYPASS)
     * - Clock Divider (DIV)
     */
    class DPLLCTRLB : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto FILTER     = std::uint_fast8_t{ 2 };  ///< FILTER.
            static constexpr auto LPEN       = std::uint_fast8_t{ 1 };  ///< LPEN.
            static constexpr auto WUF        = std::uint_fast8_t{ 1 };  ///< WUF.
            static constexpr auto REFCLK     = std::uint_fast8_t{ 2 };  ///< REFCLK.
            static constexpr auto RESERVED6  = std::uint_fast8_t{ 2 };  ///< RESERVED6.
            static constexpr auto LTIME      = std::uint_fast8_t{ 3 };  ///< LTIME.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ 1 };  ///< RESERVED11.
            static constexpr auto LBYPASS    = std::uint_fast8_t{ 1 };  ///< LBYPASS.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ 3 };  ///< RESERVED13.
            static constexpr auto DIV        = std::uint_fast8_t{ 11 }; ///< DIV.
            static constexpr auto RESERVED27 = std::uint_fast8_t{ 5 };  ///< RESERVED27.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto FILTER = std::uint_fast8_t{}; ///< FILTER.
            static constexpr auto LPEN = std::uint_fast8_t{ FILTER + Size::FILTER }; ///< LPEN.
            static constexpr auto WUF = std::uint_fast8_t{ LPEN + Size::LPEN }; ///< WUF.
            static constexpr auto REFCLK = std::uint_fast8_t{ WUF + Size::WUF }; ///< REFCLK.
            static constexpr auto RESERVED6 = std::uint_fast8_t{ REFCLK + Size::REFCLK }; ///< RESERVED6.
            static constexpr auto LTIME = std::uint_fast8_t{ RESERVED6 + Size::RESERVED6 }; ///< LTIME.
            static constexpr auto RESERVED11 = std::uint_fast8_t{ LTIME + Size::LTIME }; ///< RESERVED11.
            static constexpr auto LBYPASS = std::uint_fast8_t{ RESERVED11 + Size::RESERVED11 }; ///< LBYPASS.
            static constexpr auto RESERVED13 = std::uint_fast8_t{ LBYPASS + Size::LBYPASS }; ///< RESERVED13.
            static constexpr auto DIV = std::uint_fast8_t{ RESERVED13 + Size::RESERVED13 }; ///< DIV.
            static constexpr auto RESERVED27 = std::uint_fast8_t{ DIV + Size::DIV }; ///< RESERVED27.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto FILTER = mask<std::uint32_t>( Size::FILTER, Bit::FILTER ); ///< FILTER.
            static constexpr auto LPEN = mask<std::uint32_t>( Size::LPEN, Bit::LPEN ); ///< LPEN.
            static constexpr auto WUF = mask<std::uint32_t>( Size::WUF, Bit::WUF ); ///< WUF.
            static constexpr auto REFCLK = mask<std::uint32_t>( Size::REFCLK, Bit::REFCLK ); ///< REFCLK.
            static constexpr auto RESERVED6 = mask<std::uint32_t>( Size::RESERVED6, Bit::RESERVED6 ); ///< RESERVED6.
            static constexpr auto LTIME = mask<std::uint32_t>( Size::LTIME, Bit::LTIME ); ///< LTIME.
            static constexpr auto RESERVED11 = mask<std::uint32_t>( Size::RESERVED11, Bit::RESERVED11 ); ///< RESERVED11.
            static constexpr auto LBYPASS = mask<std::uint32_t>( Size::LBYPASS, Bit::LBYPASS ); ///< LBYPASS.
            static constexpr auto RESERVED13 = mask<std::uint32_t>( Size::RESERVED13, Bit::RESERVED13 ); ///< RESERVED13.
            static constexpr auto DIV = mask<std::uint32_t>( Size::DIV, Bit::DIV ); ///< DIV.
            static constexpr auto RESERVED27 = mask<std::uint32_t>( Size::RESERVED27, Bit::RESERVED27 ); ///< RESERVED27.
        };

        /**
         * \brief FILTER.
         */
        enum FILTER : std::uint32_t {
            FILTER_DEFAULT = 0x0 << Bit::FILTER, ///< Default filter mode.
            FILTER_LBFILT  = 0x1 << Bit::FILTER, ///< Low bandwidth filter.
            FILTER_HBFILT  = 0x2 << Bit::FILTER, ///< High bandwidth filter.
            FILTER_HDFILT  = 0x3 << Bit::FILTER, ///< High damping filter.
        };

        /**
         * \brief REFCLK.
         */
        enum REFCLK : std::uint32_t {
            REFCLK_XOSC32    = 0x0 << Bit::REFCLK, ///< XOSC32 clock reference.
            REFCLK_XOSC      = 0x1 << Bit::REFCLK, ///< XOSC clock reference.
            REFCLK_GCLK_DPLL = 0x2 << Bit::REFCLK, ///< GCLK_DPLL clock reference.
        };

        /**
         * \brief LTIME.
         */
        enum LTIME : std::uint32_t {
            LTIME_DEFAULT = 0x0 << Bit::LTIME, ///< No time-out.
            LTIME_8MS     = 0x4 << Bit::LTIME, ///< time-out if no lock within 8 ms.
            LTIME_9MS     = 0x5 << Bit::LTIME, ///< time-out if no lock within 9 ms.
            LTIME_10MS    = 0x6 << Bit::LTIME, ///< time-out if no lock within 10 ms.
            LTIME_11MS    = 0x7 << Bit::LTIME, ///< time-out if no lock within 11 ms.
        };

        DPLLCTRLB() = delete;

        DPLLCTRLB( DPLLCTRLB && ) = delete;

        DPLLCTRLB( DPLLCTRLB const & ) = delete;

        ~DPLLCTRLB() = delete;

        auto operator=( DPLLCTRLB && ) = delete;

        auto operator=( DPLLCTRLB const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief DPLL Status (DPLLSTATUS) register.
     *
     * This register has the following fields:
     * - DPLL Lock Status (LOCK)
     * - Output Clock Ready (CLKRDY)
     * - DPLL Enable (ENABLE)
     * - Divider Enable (DIV)
     */
    class DPLLSTATUS : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto LOCK      = std::uint_fast8_t{ 1 }; ///< LOCK.
            static constexpr auto CLKRDY    = std::uint_fast8_t{ 1 }; ///< CLKRDY.
            static constexpr auto ENABLE    = std::uint_fast8_t{ 1 }; ///< ENABLE.
            static constexpr auto DIV       = std::uint_fast8_t{ 1 }; ///< DIV.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ 4 }; ///< RESERVED4.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto LOCK = std::uint_fast8_t{}; ///< LOCK.
            static constexpr auto CLKRDY = std::uint_fast8_t{ LOCK + Size::LOCK }; ///< CLKRDY.
            static constexpr auto ENABLE = std::uint_fast8_t{ CLKRDY + Size::CLKRDY }; ///< ENABLE.
            static constexpr auto DIV = std::uint_fast8_t{ ENABLE + Size::ENABLE }; ///< DIV.
            static constexpr auto RESERVED4 = std::uint_fast8_t{ DIV + Size::DIV }; ///< RESERVED4.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto LOCK = mask<std::uint8_t>( Size::LOCK, Bit::LOCK ); ///< LOCK.
            static constexpr auto CLKRDY = mask<std::uint8_t>( Size::CLKRDY, Bit::CLKRDY ); ///< CLKRDY.
            static constexpr auto ENABLE = mask<std::uint8_t>( Size::ENABLE, Bit::ENABLE ); ///< ENABLE.
            static constexpr auto DIV = mask<std::uint8_t>( Size::DIV, Bit::DIV ); ///< DIV.
            static constexpr auto RESERVED4 = mask<std::uint8_t>( Size::RESERVED4, Bit::RESERVED4 ); ///< RESERVED4.
        };

        DPLLSTATUS() = delete;

        DPLLSTATUS( DPLLSTATUS && ) = delete;

        DPLLSTATUS( DPLLSTATUS const & ) = delete;

        ~DPLLSTATUS() = delete;

        auto operator=( DPLLSTATUS && ) = delete;

        auto operator=( DPLLSTATUS const & ) = delete;

        using Register<std::uint8_t>::operator=;
    };

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
     * \brief PCLKSR.
     */
    PCLKSR const pclksr;

    /**
     * \brief XOSC.
     */
    XOSC xosc;

    /**
     * \brief Reserved registers (offset 0x12-0x13).
     */
    Reserved_Register<std::uint8_t> const reserved_0x12_0x13[ ( 0x13 - 0x12 ) + 1 ];

    /**
     * \brief XOSC32K.
     */
    XOSC32K xosc32k;

    /**
     * \brief Reserved registers (offset 0x16-0x17).
     */
    Reserved_Register<std::uint8_t> const reserved_0x16_0x17[ ( 0x17 - 0x16 ) + 1 ];

    /**
     * \brief OSC32K.
     */
    OSC32K osc32k;

    /**
     * \brief OSCULP32K.
     */
    OSCULP32K osculp32k;

    /**
     * \brief Reserved registers (offset 0x1D-0x1F).
     */
    Reserved_Register<std::uint8_t> const reserved_0x1D_0x1F[ ( 0x1F - 0x1D ) + 1 ];

    /**
     * \brief OSC8M.
     */
    OSC8M osc8m;

    /**
     * \brief DFLLCTRL.
     */
    DFLLCTRL dfllctrl;

    /**
     * \brief Reserved registers (offset 0x26-0x27).
     */
    Reserved_Register<std::uint8_t> const reserved_0x26_0x27[ ( 0x27 - 0x26 ) + 1 ];

    /**
     * \brief DFLLVAL.
     */
    DFLLVAL dfllval;

    /**
     * \brief DFLLMUL.
     */
    DFLLMUL dfllmul;

    /**
     * \brief DFLLSYNC.
     */
    DFLLSYNC dfllsync;

    /**
     * \brief Reserved registers (offset 0x31-0x33).
     */
    Reserved_Register<std::uint8_t> const reserved_0x31_0x33[ ( 0x33 - 0x31 ) + 1 ];

    /**
     * \brief BOD33.
     */
    BOD33 bod33;

    /**
     * \brief Reserved registers (offset 0x38-0x3B).
     */
    Reserved_Register<std::uint8_t> const reserved_0x38_0x3B[ ( 0x3B - 0x38 ) + 1 ];

    /**
     * \brief VREG.
     */
    VREG vreg;

    /**
     * \brief Reserved registers (offset 0x3E-0x3F).
     */
    Reserved_Register<std::uint8_t> const reserved_0x3E_0x3F[ ( 0x3F - 0x3E ) + 1 ];

    /**
     * \brief VREF.
     */
    VREF vref;

    /**
     * \brief DPLLCTRLA.
     */
    DPLLCTRLA dpllctrla;

    /**
     * \brief Reserved registers (offset 0x45-0x47).
     */
    Reserved_Register<std::uint8_t> const reserved_0x45_0x47[ ( 0x47 - 0x45 ) + 1 ];

    /**
     * \brief DPLLRATIO.
     */
    DPLLRATIO dpllratio;

    /**
     * \brief DPLLCTRLB.
     */
    DPLLCTRLB dpllctrlb;

    /**
     * \brief DPLLSTATUS.
     */
    DPLLSTATUS const dpllstatus;

    SYSCTRL() = delete;

    SYSCTRL( SYSCTRL && ) = delete;

    SYSCTRL( SYSCTRL const & ) = delete;

    ~SYSCTRL() = delete;

    auto operator=( SYSCTRL && ) = delete;

    auto operator=( SYSCTRL const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_SYSCTRL_H
