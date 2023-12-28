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
 * \brief picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL interface.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_NVMCTRL_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_NVMCTRL_H

#include <cstdint>

#include "picolibrary/bit_manipulation.h"
#include "picolibrary/register.h"

namespace picolibrary::Microchip::SAM::D21DA1::Peripheral {

/**
 * \brief Microchip SAM D21/DA1 Nonvolatile Memory Controller (NVMCTRL) peripheral.
 */
class NVMCTRL {
  public:
    /**
     * \brief Control A (CTRLA) register.
     *
     * This register has the following fields:
     * - Command (CMD)
     * - Command Execution (CMDEX)
     */
    class CTRLA : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto CMD       = std::uint_fast8_t{ 7 }; ///< CMD.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ 1 }; ///< RESERVED7.
            static constexpr auto CMDEX     = std::uint_fast8_t{ 8 }; ///< CMDEX.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto CMD = std::uint_fast8_t{}; ///< CMD.
            static constexpr auto RESERVED7 = std::uint_fast8_t{ CMD + Size::CMD }; ///< RESERVED7.
            static constexpr auto CMDEX = std::uint_fast8_t{ RESERVED7 + Size::RESERVED7 }; ///< CMDEX.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto CMD = mask<std::uint16_t>( Size::CMD, Bit::CMD ); ///< CMD.
            static constexpr auto RESERVED7 = mask<std::uint16_t>( Size::RESERVED7, Bit::RESERVED7 ); ///< RESERVED7.
            static constexpr auto CMDEX = mask<std::uint16_t>( Size::CMDEX, Bit::CMDEX ); ///< CMDEX.
        };

        /**
         * \brief CMD.
         */
        enum CMD : std::uint16_t {
            CMD_ER      = 0x02 << Bit::CMD, ///< Erase Row.
            CMD_WP      = 0x04 << Bit::CMD, ///< Write Page.
            CMD_EAR     = 0x05 << Bit::CMD, ///< Erase Auxiliary Row.
            CMD_WAP     = 0x06 << Bit::CMD, ///< Write Auxiliary Page.
            CMD_RWWEEER = 0x1A << Bit::CMD, ///< RWWEE Erase Row.
            CMD_RWWEEWP = 0x1C << Bit::CMD, ///< RWWEE Write Page.
            CMD_LR      = 0x40 << Bit::CMD, ///< Lock Region.
            CMD_UR      = 0x41 << Bit::CMD, ///< Unlock Region.
            CMD_SPRM    = 0x42 << Bit::CMD, ///< Set Power Reduction Mode.
            CMD_CPRM    = 0x43 << Bit::CMD, ///< Clear Power Reduction Mode.
            CMD_PBC     = 0x44 << Bit::CMD, ///< Page Buffer Clear.
            CMD_SSB     = 0x45 << Bit::CMD, ///< Set Security Bit.
            CMD_INVALL  = 0x46 << Bit::CMD, ///< Invalidate all cache lines.
            CMD_LDR     = 0x47 << Bit::CMD, ///< Lock Data Region.
            CMD_UDR     = 0x48 << Bit::CMD, ///< Unlock Data Region.
        };

        CTRLA() = delete;

        CTRLA( CTRLA && ) = delete;

        CTRLA( CTRLA const & ) = delete;

        ~CTRLA() = delete;

        auto operator=( CTRLA && ) = delete;

        auto operator=( CTRLA const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief Control B (CTRLB) register.
     *
     * This register has the following fields:
     * - NVM Read Wait States (RWS)
     * - Manual Write (MANW)
     * - Power Reduction Mode During Sleep (SLEEPPRM)
     * - NVMCTRL Read Mode (READMODE)
     * - Cache Disable (CACHEDIS)
     */
    class CTRLB : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto RESERVED0  = std::uint_fast8_t{ 1 };  ///< RESERVED0.
            static constexpr auto RWS        = std::uint_fast8_t{ 4 };  ///< RWS.
            static constexpr auto RESERVED5  = std::uint_fast8_t{ 2 };  ///< RESERVED5.
            static constexpr auto MANW       = std::uint_fast8_t{ 1 };  ///< MANW.
            static constexpr auto SLEEPPRM   = std::uint_fast8_t{ 2 };  ///< SLEEPPRM.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ 6 };  ///< RESERVED10.
            static constexpr auto READMODE   = std::uint_fast8_t{ 2 };  ///< READMODE.
            static constexpr auto CACHEDIS   = std::uint_fast8_t{ 1 };  ///< CACHEDIS.
            static constexpr auto RESERVED19 = std::uint_fast8_t{ 13 }; ///< RESERVED19.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto RESERVED0 = std::uint_fast8_t{}; ///< RESERVED0.
            static constexpr auto RWS = std::uint_fast8_t{ RESERVED0 + Size::RESERVED0 }; ///< RWS.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ RWS + Size::RWS }; ///< RESERVED5.
            static constexpr auto MANW = std::uint_fast8_t{ RESERVED5 + Size::RESERVED5 }; ///< MANW.
            static constexpr auto SLEEPPRM = std::uint_fast8_t{ MANW + Size::MANW }; ///< SLEEPPRM.
            static constexpr auto RESERVED10 = std::uint_fast8_t{ SLEEPPRM + Size::SLEEPPRM }; ///< RESERVED10.
            static constexpr auto READMODE = std::uint_fast8_t{ RESERVED10 + Size::RESERVED10 }; ///< READMODE.
            static constexpr auto CACHEDIS = std::uint_fast8_t{ READMODE + Size::READMODE }; ///< CACHEDIS.
            static constexpr auto RESERVED19 = std::uint_fast8_t{ CACHEDIS + Size::CACHEDIS }; ///< RESERVED19.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto RESERVED0 = mask<std::uint32_t>( Size::RESERVED0, Bit::RESERVED0 ); ///< RESERVED0.
            static constexpr auto RWS = mask<std::uint32_t>( Size::RWS, Bit::RWS ); ///< RWS.
            static constexpr auto RESERVED5 = mask<std::uint32_t>( Size::RESERVED5, Bit::RESERVED5 ); ///< RESERVED5.
            static constexpr auto MANW = mask<std::uint32_t>( Size::MANW, Bit::MANW ); ///< MANW.
            static constexpr auto SLEEPPRM = mask<std::uint32_t>( Size::SLEEPPRM, Bit::SLEEPPRM ); ///< SLEEPPRM.
            static constexpr auto RESERVED10 = mask<std::uint32_t>( Size::RESERVED10, Bit::RESERVED10 ); ///< RESERVED10.
            static constexpr auto READMODE = mask<std::uint32_t>( Size::READMODE, Bit::READMODE ); ///< READMODE.
            static constexpr auto CACHEDIS = mask<std::uint32_t>( Size::CACHEDIS, Bit::CACHEDIS ); ///< CACHEDIS.
            static constexpr auto RESERVED19 = mask<std::uint32_t>( Size::RESERVED19, Bit::RESERVED19 ); ///< RESERVED19.
        };

        /**
         * \brief SLEEPPRM.
         */
        enum SLEEPPRM : std::uint32_t {
            SLEEPPRM_WAKEUPACCESS  = 0x0 << Bit::SLEEPPRM, ///< NVM block enters low-power mode when entering sleep. NVM block exits low-power mode upon first access.
            SLEEPPRM_WAKEUPINSTANT = 0x1 << Bit::SLEEPPRM, ///< NVM block enters low-power mode when entering sleep. NVM block exits low-power mode when exiting sleep.
            SLEEPPRM_DISABLED = 0x3 << Bit::SLEEPPRM, ///< Auto power reduction disabled.
        };

        /**
         * \brief READMODE.
         */
        enum READMODE : std::uint32_t {
            READMODE_NO_MISS_PENALTY = 0x0 << Bit::READMODE, ///< The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
            READMODE_LOW_POWER       = 0x1 << Bit::READMODE, ///< Reduces power consumption of the cache system,
                                                       ///< but inserts a wait state each time there is a
                                                       ///< cache miss. This mode may not
                                                       ///< be relevant if CPU performance is required, as the application will be stalled and may lead to increased run time.
            READMODE_DETERMINISTIC =
                0x2 << Bit::READMODE, ///< The cache system ensures that a cache hit or miss
                                      ///< takes the same amount of time, determined by the
                                      ///< number of programmed Flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        };

        CTRLB() = delete;

        CTRLB( CTRLB && ) = delete;

        CTRLB( CTRLB const & ) = delete;

        ~CTRLB() = delete;

        auto operator=( CTRLB && ) = delete;

        auto operator=( CTRLB const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief NVM Parameter (PARAM) register.
     *
     * This register has the following fields:
     * - NVM Pages (NVMP)
     * - Page Size (PSZ)
     * - Read While Write EEPROM Emulation Area Pages (RWWEEP)
     */
    class PARAM : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto NVMP       = std::uint_fast8_t{ 16 }; ///< NVMP.
            static constexpr auto PSZ        = std::uint_fast8_t{ 3 };  ///< PSZ.
            static constexpr auto RESERVED19 = std::uint_fast8_t{ 1 };  ///< RESERVED19.
            static constexpr auto RWWEEP     = std::uint_fast8_t{ 12 }; ///< RWWEEP.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto NVMP = std::uint_fast8_t{}; ///< NVMP.
            static constexpr auto PSZ  = std::uint_fast8_t{ NVMP + Size::NVMP }; ///< PSZ.
            static constexpr auto RESERVED19 = std::uint_fast8_t{ PSZ + Size::PSZ }; ///< RESERVED19.
            static constexpr auto RWWEEP = std::uint_fast8_t{ RESERVED19 + Size::RESERVED19 }; ///< RWWEEP.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto NVMP = mask<std::uint32_t>( Size::NVMP, Bit::NVMP ); ///< NVMP.
            static constexpr auto PSZ = mask<std::uint32_t>( Size::PSZ, Bit::PSZ ); ///< PSZ.
            static constexpr auto RESERVED19 = mask<std::uint32_t>( Size::RESERVED19, Bit::RESERVED19 ); ///< RESERVED19.
            static constexpr auto RWWEEP = mask<std::uint32_t>( Size::RWWEEP, Bit::RWWEEP ); ///< RWWEEP.
        };

        /**
         * \brief PSZ.
         */
        enum PSZ : std::uint32_t {
            PSZ_8    = 0x0 << Bit::PSZ, ///< 8 bytes.
            PSZ_16   = 0x1 << Bit::PSZ, ///< 16 bytes.
            PSZ_32   = 0x2 << Bit::PSZ, ///< 32 bytes.
            PSZ_64   = 0x3 << Bit::PSZ, ///< 64 bytes.
            PSZ_128  = 0x4 << Bit::PSZ, ///< 128 bytes.
            PSZ_256  = 0x5 << Bit::PSZ, ///< 256 bytes.
            PSZ_512  = 0x6 << Bit::PSZ, ///< 512 bytes.
            PSZ_1024 = 0x7 << Bit::PSZ, ///< 1024 bytes.
        };

        PARAM() = delete;

        PARAM( PARAM && ) = delete;

        PARAM( PARAM const & ) = delete;

        ~PARAM() = delete;

        auto operator=( PARAM && ) = delete;

        auto operator=( PARAM const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief Interrupt Enable Clear (INTENCLR) register.
     *
     * This register has the following fields:
     * - NVM Ready Interrupt Enable (READY)
     * - Error Interrupt Enable (ERROR)
     */
    class INTENCLR : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto READY     = std::uint_fast8_t{ 1 }; ///< READY.
            static constexpr auto ERROR     = std::uint_fast8_t{ 1 }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 6 }; ///< RESERVED2.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto READY = std::uint_fast8_t{}; ///< READY.
            static constexpr auto ERROR = std::uint_fast8_t{ READY + Size::READY }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ERROR + Size::ERROR }; ///< RESERVED2.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto READY = mask<std::uint8_t>( Size::READY, Bit::READY ); ///< READY.
            static constexpr auto ERROR = mask<std::uint8_t>( Size::ERROR, Bit::ERROR ); ///< ERROR.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
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
     * - NVM Ready Interrupt Enable (READY)
     * - Error Interrupt Enable (ERROR)
     */
    class INTENSET : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto READY     = std::uint_fast8_t{ 1 }; ///< READY.
            static constexpr auto ERROR     = std::uint_fast8_t{ 1 }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 6 }; ///< RESERVED2.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto READY = std::uint_fast8_t{}; ///< READY.
            static constexpr auto ERROR = std::uint_fast8_t{ READY + Size::READY }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ERROR + Size::ERROR }; ///< RESERVED2.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto READY = mask<std::uint8_t>( Size::READY, Bit::READY ); ///< READY.
            static constexpr auto ERROR = mask<std::uint8_t>( Size::ERROR, Bit::ERROR ); ///< ERROR.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
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
     * - NVM Ready (READY)
     * - Error (ERROR)
     */
    class INTFLAG : public Register<std::uint8_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto READY     = std::uint_fast8_t{ 1 }; ///< READY.
            static constexpr auto ERROR     = std::uint_fast8_t{ 1 }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ 6 }; ///< RESERVED2.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto READY = std::uint_fast8_t{}; ///< READY.
            static constexpr auto ERROR = std::uint_fast8_t{ READY + Size::READY }; ///< ERROR.
            static constexpr auto RESERVED2 = std::uint_fast8_t{ ERROR + Size::ERROR }; ///< RESERVED2.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto READY = mask<std::uint8_t>( Size::READY, Bit::READY ); ///< READY.
            static constexpr auto ERROR = mask<std::uint8_t>( Size::ERROR, Bit::ERROR ); ///< ERROR.
            static constexpr auto RESERVED2 = mask<std::uint8_t>( Size::RESERVED2, Bit::RESERVED2 ); ///< RESERVED2.
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
     * - Power Reduction Mode (PRM)
     * - NVM Page Buffer Active Loading (LOAD)
     * - Programming Error Status (PROGE)
     * - Lock Error Status (LOCKE)
     * - NVM Error (NVME)
     * - Security Bit Status (SB)
     */
    class STATUS : public Register<std::uint16_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto PRM       = std::uint_fast8_t{ 1 }; ///< PRM.
            static constexpr auto LOAD      = std::uint_fast8_t{ 1 }; ///< LOAD.
            static constexpr auto PROGE     = std::uint_fast8_t{ 1 }; ///< PROGE.
            static constexpr auto LOCKE     = std::uint_fast8_t{ 1 }; ///< LOCKE.
            static constexpr auto NVME      = std::uint_fast8_t{ 1 }; ///< NVME.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ 3 }; ///< RESERVED5.
            static constexpr auto SB        = std::uint_fast8_t{ 1 }; ///< SB.
            static constexpr auto RESERVED9 = std::uint_fast8_t{ 7 }; ///< RESERVED9.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto PRM  = std::uint_fast8_t{};                  ///< PRM.
            static constexpr auto LOAD = std::uint_fast8_t{ PRM + Size::PRM }; ///< LOAD.
            static constexpr auto PROGE = std::uint_fast8_t{ LOAD + Size::LOAD }; ///< PROGE.
            static constexpr auto LOCKE = std::uint_fast8_t{ PROGE + Size::PROGE }; ///< LOCKE.
            static constexpr auto NVME = std::uint_fast8_t{ LOCKE + Size::LOCKE }; ///< NVME.
            static constexpr auto RESERVED5 = std::uint_fast8_t{ NVME + Size::NVME }; ///< RESERVED5.
            static constexpr auto SB = std::uint_fast8_t{ RESERVED5 + Size::RESERVED5 }; ///< SB.
            static constexpr auto RESERVED9 = std::uint_fast8_t{ SB + Size::SB }; ///< RESERVED9.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto PRM = mask<std::uint16_t>( Size::PRM, Bit::PRM ); ///< PRM.
            static constexpr auto LOAD = mask<std::uint16_t>( Size::LOAD, Bit::LOAD ); ///< LOAD.
            static constexpr auto PROGE = mask<std::uint16_t>( Size::PROGE, Bit::PROGE ); ///< PROGE.
            static constexpr auto LOCKE = mask<std::uint16_t>( Size::LOCKE, Bit::LOCKE ); ///< LOCKE.
            static constexpr auto NVME = mask<std::uint16_t>( Size::NVME, Bit::NVME ); ///< NVME.
            static constexpr auto RESERVED5 = mask<std::uint16_t>( Size::RESERVED5, Bit::RESERVED5 ); ///< RESERVED5.
            static constexpr auto SB = mask<std::uint16_t>( Size::SB, Bit::SB ); ///< SB.
            static constexpr auto RESERVED9 = mask<std::uint16_t>( Size::RESERVED9, Bit::RESERVED9 ); ///< RESERVED9.
        };

        STATUS() = delete;

        STATUS( STATUS && ) = delete;

        STATUS( STATUS const & ) = delete;

        ~STATUS() = delete;

        auto operator=( STATUS && ) = delete;

        auto operator=( STATUS const & ) = delete;

        using Register<std::uint16_t>::operator=;
    };

    /**
     * \brief Address (ADDR) register.
     *
     * This register has the following fields:
     * - NVM Address (ADDR)
     */
    class ADDR : public Register<std::uint32_t> {
      public:
        /**
         * \brief Field sizes.
         */
        struct Size {
            static constexpr auto ADDR       = std::uint_fast8_t{ 22 }; ///< ADDR.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ 10 }; ///< RESERVED22.
        };

        /**
         * \brief Field bit positions.
         */
        struct Bit {
            static constexpr auto ADDR = std::uint_fast8_t{}; ///< ADDR.
            static constexpr auto RESERVED22 = std::uint_fast8_t{ ADDR + Size::ADDR }; ///< RESERVED22.
        };

        /**
         * \brief Field bit masks.
         */
        struct Mask {
            static constexpr auto ADDR = mask<std::uint32_t>( Size::ADDR, Bit::ADDR ); ///< ADDR.
            static constexpr auto RESERVED22 = mask<std::uint32_t>( Size::RESERVED22, Bit::RESERVED22 ); ///< RESERVED22.
        };

        ADDR() = delete;

        ADDR( ADDR && ) = delete;

        ADDR( ADDR const & ) = delete;

        ~ADDR() = delete;

        auto operator=( ADDR && ) = delete;

        auto operator=( ADDR const & ) = delete;

        using Register<std::uint32_t>::operator=;
    };

    /**
     * \brief CTRLA.
     */
    CTRLA ctrla;

    /**
     * \brief Reserved registers (offset 0x02-0x03).
     */
    Reserved_Register<std::uint8_t> const reserved_0x02_0x03[ ( 0x03 - 0x02 ) + 1 ];

    /**
     * \brief CTRLB.
     */
    CTRLB ctrlb;

    /**
     * \brief PARAM.
     */
    PARAM const param;

    /**
     * \brief INTENCLR.
     */
    INTENCLR intenclr;

    /**
     * \brief Reserved registers (offset 0x0D-0x0F).
     */
    Reserved_Register<std::uint8_t> const reserved_0x0D_0x0F[ ( 0x0F - 0x0D ) + 1 ];

    /**
     * \brief INTENSET.
     */
    INTENSET intenset;

    /**
     * \brief Reserved registers (offset 0x11-0x13).
     */
    Reserved_Register<std::uint8_t> const reserved_0x11_0x13[ ( 0x13 - 0x11 ) + 1 ];

    /**
     * \brief INTFLAG.
     */
    INTFLAG intflag;

    /**
     * \brief Reserved registers (offset 0x15-0x17).
     */
    Reserved_Register<std::uint8_t> const reserved_0x15_0x17[ ( 0x17 - 0x15 ) + 1 ];

    /**
     * \brief STATUS.
     */
    STATUS status;

    /**
     * \brief Reserved registers (offset 0x1A-0x1B).
     */
    Reserved_Register<std::uint8_t> const reserved_0x1A_0x1B[ ( 0x1B - 0x1A ) + 1 ];

    /**
     * \brief ADDR.
     */
    ADDR addr;

    /**
     * \brief Lock Section (LOCK) register.
     */
    Register<std::uint16_t> const lock;

    NVMCTRL() = delete;

    NVMCTRL( NVMCTRL && ) = delete;

    NVMCTRL( NVMCTRL const & ) = delete;

    ~NVMCTRL() = delete;

    auto operator=( NVMCTRL && ) = delete;

    auto operator=( NVMCTRL const & ) = delete;
};

} // namespace picolibrary::Microchip::SAM::D21DA1::Peripheral

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_PERIPHERAL_NVMCTRL_H
