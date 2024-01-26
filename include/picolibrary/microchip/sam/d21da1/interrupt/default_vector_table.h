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
 * \brief picolibrary::Microchip::SAM::D21DA1::Interrupt default vector table interface.
 *
 * \attention The picolibrary-microchip-sam-d21da1 static library does not include the
 *            default interrupt vector table and associated interrupt handler functions.
 *            To use the default interrupt vector table, include the
 *            picolibrary-microchip-sam-d21da1-interrupt-default_vector_table object
 *            library objects in an executable's sources list.
 */

#ifndef PICOLIBRARY_MICROCHIP_SAM_D21DA1_INTERRUPT_DEFAULT_VECTOR_TABLE_H
#define PICOLIBRARY_MICROCHIP_SAM_D21DA1_INTERRUPT_DEFAULT_VECTOR_TABLE_H

namespace picolibrary::Microchip::SAM::D21DA1::Interrupt {

/**
 * \brief Handle reset (default implementation).
 */
void handle_reset_default() noexcept;

/**
 * \brief Handle reset.
 *
 * \attention The default vector table's reset handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset_default() so
 *            that its behavior can be overridden.
 */
void handle_reset() noexcept;

/**
 * \brief Handle interrupt (default implementation).
 */
void handle_interrupt_default() noexcept;

/**
 * \brief Handle NMI.
 *
 * \attention The default vector table's NMI handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_nmi() noexcept;

/**
 * \brief Handle hard fault.
 *
 * \attention The default vector table's hard fault handler entry points to this function.
 *            It is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_hard_fault() noexcept;

/**
 * \brief Handle SVCALL.
 *
 * \attention The default vector table's SVCALL handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_svcall() noexcept;

/**
 * \brief Handle PENDSV.
 *
 * \attention The default vector table's PENDSV handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_pendsv() noexcept;

/**
 * \brief Handle SYSTICK0.
 *
 * \attention The default vector table's SYSTICK0 handler entry points to this function.
 *            It is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_systick0() noexcept;

/**
 * \brief Handle PM0.
 *
 * \attention The default vector table's PM0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_pm0() noexcept;

/**
 * \brief Handle SYSCTRL0.
 *
 * \attention The default vector table's SYSCTRL0 handler entry points to this function.
 *            It is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sysctrl0() noexcept;

/**
 * \brief Handle WDT0.
 *
 * \attention The default vector table's WDT0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_wdt0() noexcept;

/**
 * \brief Handle RTC0.
 *
 * \attention The default vector table's RTC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_rtc0() noexcept;

/**
 * \brief Handle EIC0.
 *
 * \attention The default vector table's EIC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_eic0() noexcept;

/**
 * \brief Handle NVMCTRL0.
 *
 * \attention The default vector table's NVMCTRL0 handler entry points to this function.
 *            It is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_nvmctrl0() noexcept;

/**
 * \brief Handle DMAC0.
 *
 * \attention The default vector table's DMAC0 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_dmac0() noexcept;

/**
 * \brief Handle USB0.
 *
 * \attention The default vector table's USB0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_usb0() noexcept;

/**
 * \brief Handle EVSYS0.
 *
 * \attention The default vector table's EVSYS0 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_evsys0() noexcept;

/**
 * \brief Handle SERCOM0.
 *
 * \attention The default vector table's SERCOM0 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom0() noexcept;

/**
 * \brief Handle SERCOM1.
 *
 * \attention The default vector table's SERCOM1 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom1() noexcept;

/**
 * \brief Handle SERCOM2.
 *
 * \attention The default vector table's SERCOM2 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom2() noexcept;

/**
 * \brief Handle SERCOM3.
 *
 * \attention The default vector table's SERCOM3 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom3() noexcept;

/**
 * \brief Handle SERCOM4.
 *
 * \attention The default vector table's SERCOM4 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom4() noexcept;

/**
 * \brief Handle SERCOM5.
 *
 * \attention The default vector table's SERCOM5 handler entry points to this function. It
 *            is defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_sercom5() noexcept;

/**
 * \brief Handle TCC0.
 *
 * \attention The default vector table's TCC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tcc0() noexcept;

/**
 * \brief Handle TCC1.
 *
 * \attention The default vector table's TCC1 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tcc1() noexcept;

/**
 * \brief Handle TCC2.
 *
 * \attention The default vector table's TCC2 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tcc2() noexcept;

/**
 * \brief Handle TC3.
 *
 * \attention The default vector table's TC3 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tc3() noexcept;

/**
 * \brief Handle TC4.
 *
 * \attention The default vector table's TC4 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tc4() noexcept;

/**
 * \brief Handle TC5.
 *
 * \attention The default vector table's TC5 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tc5() noexcept;

/**
 * \brief Handle TC6.
 *
 * \attention The default vector table's TC6 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tc6() noexcept;

/**
 * \brief Handle TC7.
 *
 * \attention The default vector table's TC7 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tc7() noexcept;

/**
 * \brief Handle ADC0.
 *
 * \attention The default vector table's ADC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_adc0() noexcept;

/**
 * \brief Handle AC0.
 *
 * \attention The default vector table's AC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_ac0() noexcept;

/**
 * \brief Handle DAC0.
 *
 * \attention The default vector table's DAC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_dac0() noexcept;

/**
 * \brief Handle PTC0.
 *
 * \attention The default vector table's PTC0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_ptc0() noexcept;

/**
 * \brief Handle I2S0.
 *
 * \attention The default vector table's I2S0 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_i2s0() noexcept;

/**
 * \brief Handle AC1.
 *
 * \attention The default vector table's AC1 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_ac1() noexcept;

/**
 * \brief Handle TCC3.
 *
 * \attention The default vector table's TCC3 handler entry points to this function. It is
 *            defined as a weak alias for
 *            picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()
 *            so that its behavior can be overridden.
 */
void handle_tcc3() noexcept;

} // namespace picolibrary::Microchip::SAM::D21DA1::Interrupt

#endif // PICOLIBRARY_MICROCHIP_SAM_D21DA1_INTERRUPT_DEFAULT_VECTOR_TABLE_H
