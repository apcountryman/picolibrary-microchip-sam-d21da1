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
 * \brief picolibrary::Microchip::SAM::D21DA1::Interrupt implementation.
 */

#include "picolibrary/microchip/sam/d21da1/interrupt.h"

#include <cstdint>

#include "picolibrary/arm/cortex/m0plus/interrupt.h"
#include "picolibrary/arm/cortex/m0plus/peripheral.h"
#include "picolibrary/microchip/sam/d21da1/peripheral.h"
#include "picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.h"

extern std::uint32_t _data_flash_start;
extern std::uint32_t _data_start;
extern std::uint32_t _data_end;
extern std::uint32_t _bss_start;
extern std::uint32_t _bss_end;
extern std::uint32_t _vector_table;

void __libc_init_array();

int main();

extern "C" void picolibrary_microchip_sam_d21da1_interrupt_handle_reset_default() noexcept
{
    {
        auto const *       data_flash_start = &_data_flash_start;
        auto *             data_start       = &_data_start;
        auto const * const data_end         = &_data_end;

        if ( data_start != data_flash_start ) {
            for ( ; data_start != data_end; ++data_flash_start, ++data_start ) {
                *data_start = *data_flash_start;
            } // if
        }     // if
    }

    {
        auto *             bss_start = &_bss_start;
        auto const * const bss_end   = &_bss_end;

        for ( ; bss_start != bss_end; ++bss_start ) { *bss_start = 0; } // for
    }

    static_assert( sizeof( std::uint32_t * ) == sizeof( std::uint32_t ) );
    ::picolibrary::Arm::Cortex::M0PLUS::Peripheral::SCB0::instance().vtor =
        reinterpret_cast<std::uint32_t>( &_vector_table );

    // Silicon errata workaround ("Spurious Writes")
    ::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL0::instance().ctrlb |=
        ::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::CTRLB::Mask::MANW;

    __libc_init_array();

    main();

    for ( ;; ) {} // for
}

#define HANDLE_RESET_DEFAULT_ALIAS \
    __attribute__(                 \
        ( alias( "picolibrary_microchip_sam_d21da1_interrupt_handle_reset_default" ) ) )

#define HANDLE_RESET_DEFAULT_WEAK_ALIAS \
    __attribute__( ( weak, alias( "picolibrary_microchip_sam_d21da1_interrupt_handle_reset_default" ) ) )

extern "C" void picolibrary_microchip_sam_d21da1_interrupt_handle_interrupt_default() noexcept
{
    for ( ;; ) {} // for
}

#define HANDLE_INTERRUPT_DEFAULT_ALIAS                                          \
    __attribute__(                                                              \
        ( alias( "picolibrary_microchip_sam_d21da1_interrupt_handle_interrupt_" \
                 "default" ) ) )

#define HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS \
    __attribute__( ( weak, alias( "picolibrary_microchip_sam_d21da1_interrupt_handle_interrupt_default" ) ) )

namespace picolibrary::Microchip::SAM::D21DA1::Interrupt {

void handle_reset_default() HANDLE_RESET_DEFAULT_ALIAS;

void handle_reset() HANDLE_RESET_DEFAULT_WEAK_ALIAS;

void handle_interrupt_default() HANDLE_INTERRUPT_DEFAULT_ALIAS;

void handle_nmi() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_hard_fault() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_svcall() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_pendsv() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_systick0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_pm0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sysctrl0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_wdt0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_rtc0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_eic0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_nvmctrl0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_dmac0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_usb0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_evsys0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom1() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom2() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom3() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom4() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_sercom5() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tcc0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tcc1() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tcc2() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tc3() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tc4() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tc5() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tc6() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tc7() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_adc0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_ac0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_dac0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_ptc0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_i2s0() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_ac1() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

void handle_tcc3() HANDLE_INTERRUPT_DEFAULT_WEAK_ALIAS;

} // namespace picolibrary::Microchip::SAM::D21DA1::Interrupt

extern std::uint32_t _stack_end;

namespace {

auto const VECTOR_TABLE __attribute__( (
    section( ".vectors" ) ) ) = ::picolibrary::Arm::Cortex::M0PLUS::Interrupt::Vector_Table{
    .stack = &_stack_end,

    .reset_handler = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset,

    .nmi_handler        = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nmi,
    .hard_fault_handler = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_hard_fault,
    .reserved_n12       = nullptr,
    .reserved_n11       = nullptr,
    .reserved_n10       = nullptr,
    .reserved_n9        = nullptr,
    .reserved_n8        = nullptr,
    .reserved_n7        = nullptr,
    .reserved_n6        = nullptr,
    .svcall_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_svcall,
    .reserved_n4        = nullptr,
    .reserved_n3        = nullptr,
    .pendsv_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pendsv,
    .systick0_handler = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_systick0,

    .pm0_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pm0,
    .sysctrl0_handler = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sysctrl0,
    .wdt0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_wdt0,
    .rtc0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_rtc0,
    .eic0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_eic0,
    .nvmctrl0_handler = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nvmctrl0,
    .dmac0_handler    = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dmac0,
    .usb0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_usb0,
    .evsys0_handler   = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_evsys0,
    .sercom0_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom0,
    .sercom1_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom1,
    .sercom2_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom2,
    .sercom3_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom3,
    .sercom4_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom4,
    .sercom5_handler  = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom5,
    .tcc0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc0,
    .tcc1_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc1,
    .tcc2_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc2,
    .tc3_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc3,
    .tc4_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc4,
    .tc5_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc5,
    .tc6_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc6,
    .tc7_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc7,
    .adc0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_adc0,
    .ac0_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac0,
    .dac0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dac0,
    .ptc0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ptc0,
    .i2s0_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_i2s0,
    .ac1_handler      = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac1,
    .tcc3_handler     = ::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc3,
};

} // namespace
