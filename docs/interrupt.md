# Interrupt Facilities
Microchip SAM D21/DA1 interrupt facilities are defined in the
[`include/picolibrary/microchip/sam/d21da1/interrupt.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/interrupt.h)/[`source/picolibrary/microchip/sam/d21da1/interrupt.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/interrupt.cc)
header/source file pair.

## Table of Contents
- [Default Vector Table](#default-vector-table)

## Default Vector Table
The default interrupt vector table instance and associated interrupt handler functions are
defined in the
[`include/picolibrary/microchip/sam/d21da1/interrupt/default_vector_table.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/interrupt/default_vector_table.h)/[`source/picolibrary/microchip/sam/d21da1/interrupt/default_vector_table.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/interrupt/default_vector_table.cc)
header/source file pair.
The default interrupt vector table instance and associated interrupt handler functions are
not included in the `picolibrary-microchip-samd-d21da1` static library.
To use the default interrupt vector table instance and associated interrupt handler
functions, include the `picolibrary-microchip-sam-d21da1-interrupt-default_vector_table`
object library objects in an executable's sources list.
```cmake
add_executable(
    foo
    $<TARGET_OBJECTS>:picolibrary-microchip-sam-d21da1-interrupt-default_vector_table>
)
```

The default interrupt vector table instance is placed in the `.vectors` section and is
populated as follows:
- Initial stack pointer value: `_stack_end` (must be defined by linker script)
- Reset handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset()`
- NMI handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nmi()`
- Hard fault handler:
  `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_hard_fault()`
- SVCALL handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_svcall()`
- PENDSV handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pendsv()`
- SYSTICK0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_systick0()`
- PM0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pm0()`
- SYSCTRL0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sysctrl0()`
- WDT0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_wdt0()`
- RTC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_rtc0()`
- EIC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_eic0()`
- NVMCTRL0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nvmctrl0()`
- DMAC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dmac0()`
- USB0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_usb0()`
- EVSYS0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_evsys0()`
- SERCOM0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom0()`
- SERCOM1 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom1()`
- SERCOM2 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom2()`
- SERCOM3 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom3()`
- SERCOM4 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom4()`
- SERCOM5 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom5()`
- TCC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc0()`
- TCC1 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc1()`
- TCC2 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc2()`
- TC3 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc3()`
- TC4 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc4()`
- TC5 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc5()`
- TC6 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc6()`
- TC7 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc7()`
- ADC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_adc0()`
- AC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac0()`
- DAC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dac0()`
- PTC0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ptc0()`
- I2S0 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_i2s0()`
- AC1 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac1()`
- TCC3 handler: `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc3()`

`::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset()` is defined as a weak
alias for `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset_default()` so
that its behavior can be overridden.

`::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_reset_default()` uses the
following linker defined symbols:
- `_data_flash_start`: The start of the data used to initialize the `.data` section
- `_data_start`: The start of the `.data` section
- `_data_end`: The end of the `.data` section
- `_bss_start`: The start of the `.bss` section
- `_bss_end`: The end of the `.bss` section
- `_vector_table`: The start of the default vector table

The following functions are defined as weak aliases for
`::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_interrupt_default()` so that
their behavior can be overridden:
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nmi()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_hard_fault()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_svcall()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pendsv()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_systick0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_pm0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sysctrl0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_wdt0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_rtc0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_eic0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_nvmctrl0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dmac0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_usb0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_evsys0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom1()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom2()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom3()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom4()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_sercom5()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc1()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc2()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc3()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc4()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc5()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc6()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tc7()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_adc0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_dac0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ptc0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_i2s0()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_ac1()`
- `::picolibrary::Microchip::SAM::D21DA1::Interrupt::handle_tcc3()`
