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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::PACB interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACB_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACB_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/microchip/sam/d21da1/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 AHB-APB Bridge B Peripheral Access Controller (PACB)
 *        peripheral.
 */
class PACB {
  public:
    /**
     * \brief Write-Protect Clear (WPCLR) register.
     *
     * This register has the following fields:
     * - Disable DSU0 Write Protection (DSU0)
     * - Disable NVMCTRL0 Write Protection (NVMCTRL0)
     * - Disable PORT0 Write Protection (PORT0)
     * - Disable DMAC0 Write Protection (DMAC0)
     * - Disable USB0 Write Protection (USB0)
     * - Disable MTB0 Write Protection (MTB0)
     */
    class WPCLR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto DSU0      = std::uint_fast8_t{ 1 }; ///< DSU0.
            static constexpr auto NVMCTRL0  = std::uint_fast8_t{ 1 }; ///< NVMCTRL0.
            static constexpr auto PORT0     = std::uint_fast8_t{ 1 }; ///< PORT0.
            static constexpr auto DMAC0     = std::uint_fast8_t{ 1 }; ///< DMAC0.
            static constexpr auto USB0      = std::uint_fast8_t{ 1 }; ///< USB0.
            static constexpr auto MTB0      = std::uint_fast8_t{ 1 }; ///< MTB0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto DSU0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< DSU0.
            static constexpr auto NVMCTRL0 = std::uint_fast8_t{ DSU0 + Size::DSU0 }; ///< NVMCTRL0.
            static constexpr auto PORT0 = std::uint_fast8_t{ NVMCTRL0 + Size::NVMCTRL0 }; ///< PORT0.
            static constexpr auto DMAC0 = std::uint_fast8_t{ PORT0 + Size::PORT0 }; ///< DMAC0.
            static constexpr auto USB0 = std::uint_fast8_t{ DMAC0 + Size::DMAC0 }; ///< USB0.
            static constexpr auto MTB0 = std::uint_fast8_t{ USB0 + Size::USB0 }; ///< MTB0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ MTB0 + Size::MTB0 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto DSU0 = mask<std::uint32_t>( Size::DSU0, Bit::DSU0 ); ///< DSU0.
            static constexpr auto NVMCTRL0 = mask<std::uint32_t>( Size::NVMCTRL0, Bit::NVMCTRL0 ); ///< NVMCTRL0.
            static constexpr auto PORT0 = mask<std::uint32_t>( Size::PORT0, Bit::PORT0 ); ///< PORT0.
            static constexpr auto DMAC0 = mask<std::uint32_t>( Size::DMAC0, Bit::DMAC0 ); ///< DMAC0.
            static constexpr auto USB0 = mask<std::uint32_t>( Size::USB0, Bit::USB0 ); ///< USB0.
            static constexpr auto MTB0 = mask<std::uint32_t>( Size::MTB0, Bit::MTB0 ); ///< MTB0.
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
     * - Enable DSU0 Write Protection (DSU0)
     * - Enable NVMCTRL0 Write Protection (NVMCTRL0)
     * - Enable PORT0 Write Protection (PORT0)
     * - Enable DMAC0 Write Protection (DMAC0)
     * - Enable USB0 Write Protection (USB0)
     * - Enable MTB0 Write Protection (MTB0)
     */
    class WPSET : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0 = std::uint_fast8_t{ 1 }; ///< RESERVED0.
            static constexpr auto DSU0      = std::uint_fast8_t{ 1 }; ///< DSU0.
            static constexpr auto NVMCTRL0  = std::uint_fast8_t{ 1 }; ///< NVMCTRL0.
            static constexpr auto PORT0     = std::uint_fast8_t{ 1 }; ///< PORT0.
            static constexpr auto DMAC0     = std::uint_fast8_t{ 1 }; ///< DMAC0.
            static constexpr auto USB0      = std::uint_fast8_t{ 1 }; ///< USB0.
            static constexpr auto MTB0      = std::uint_fast8_t{ 1 }; ///< MTB0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 25 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto DSU0 = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< DSU0.
            static constexpr auto NVMCTRL0 = std::uint_fast8_t{ DSU0 + Size::DSU0 }; ///< NVMCTRL0.
            static constexpr auto PORT0 = std::uint_fast8_t{ NVMCTRL0 + Size::NVMCTRL0 }; ///< PORT0.
            static constexpr auto DMAC0 = std::uint_fast8_t{ PORT0 + Size::PORT0 }; ///< DMAC0.
            static constexpr auto USB0 = std::uint_fast8_t{ DMAC0 + Size::DMAC0 }; ///< USB0.
            static constexpr auto MTB0 = std::uint_fast8_t{ USB0 + Size::USB0 }; ///< MTB0.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ MTB0 + Size::MTB0 }; ///< RESERVED7.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto DSU0 = mask<std::uint32_t>( Size::DSU0, Bit::DSU0 ); ///< DSU0.
            static constexpr auto NVMCTRL0 = mask<std::uint32_t>( Size::NVMCTRL0, Bit::NVMCTRL0 ); ///< NVMCTRL0.
            static constexpr auto PORT0 = mask<std::uint32_t>( Size::PORT0, Bit::PORT0 ); ///< PORT0.
            static constexpr auto DMAC0 = mask<std::uint32_t>( Size::DMAC0, Bit::DMAC0 ); ///< DMAC0.
            static constexpr auto USB0 = mask<std::uint32_t>( Size::USB0, Bit::USB0 ); ///< USB0.
            static constexpr auto MTB0 = mask<std::uint32_t>( Size::MTB0, Bit::MTB0 ); ///< MTB0.
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

    PACB() = delete;

    PACB( PACB && ) = delete;

    PACB( PACB const & ) = delete;

    ~PACB() = delete;

    auto operator=( PACB && ) = delete;

    auto operator=( PACB const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_PACB_H
