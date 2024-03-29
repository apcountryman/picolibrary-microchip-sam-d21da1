# Peripheral Facilities

## Table of Contents
1. [Peripherals](#peripherals)
    1. [EIC](#eic)
    1. [GCLK](#gclk)
    1. [NVMCTRL](#nvmctrl)
    1. [PAC](#pac)
    1. [PM](#pm)
    1. [RTC](#rtc)
    1. [SYSCTRL](#sysctrl)
    1. [WDT](#wdt)
1. [Peripheral Instances](#peripheral-instances)

## Peripherals
The layout of each Microchip SAM D21/DA1 peripheral's registers is defined by the class
named after the peripheral (e.g. the layout of the NVMCTRL peripheral's registers is
defined by the `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL` class).
Peripheral registers are accessed via the member variables named after the registers (e.g.
the NVMCTRL peripheral's CTRLA register is accessed via the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::ctrla` member variable).
Peripheral register information is defined in member classes named after the registers
(e.g. NVMCTRL peripheral CTRLA register information is defined in the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::CTRLA` member class).
Peripheral register field constants are defined in the following member structures:
- `Size`: field sizes (e.g. the size of the CMD field of the NVMCTRL peripheral's CTRLA
  register is defined by the
  `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::CTRLA::Size::CMD` constant)
- `Bit`: field bit positions (e.g. the position of the CMD field of the NVMCTRL
  peripheral's CTRLA register is defined by the
  `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::CTRLA::Bit::CMD` constant)
- `Mask`: field bit masks (e.g. the mask for the CMD field of the NVMCTRL peripheral's
  CTRLA register is defined by the
  `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL::CTRLA::Mask::CMD` constant)

### EIC
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::EIC` class defines the layout of
the Microchip SAM D21/DA1 EIC peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::EIC` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/eic.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/eic.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/eic.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/eic.cc)
header/source file pair.

### GCLK
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::GCLK` class defines the layout of
the Microchip SAM D21/DA1 GCLK peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::GCLK` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/gclk.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/gclk.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/gclk.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/gclk.cc)
header/source file pair.

### NVMCTRL
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL` class defines the layout
of the Microchip SAM D21/DA1 NVMCTRL peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/nvmctrl.cc)
header/source file pair.

### PAC
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC` class defines the layout of
the Microchip SAM D21/DA1 PAC peripheral.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/pac.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/pac.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/pac.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/pac.cc)
header/source file pair.

### PM
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PM` class defines the layout of
the Microchip SAM D21/DA1 PM peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PM` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/pm.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/pm.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/pm.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/pm.cc)
header/source file pair.

### RTC
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC` class defines the layout of
the Microchip SAM D21/DA1 RTC peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/rtc.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/rtc.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/rtc.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/rtc.cc)
header/source file pair.

The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC` class has a different
structure than other Microchip SAM D21/DA1 peripheral classes due to the Microchip SAM
D21DA1 RTC peripheral's multiple operating modes (mode 0 (32-bit counter), mode 1 (16-bit
counter), and mode 2 (clock/calendar)).
Classes and variables that would normally be members of the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC` class are instead members of the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE0`,
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE1`, and
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE2` member classes.
The RTC peripheral's `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE0`
instance is accessed via the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::mode0` member variable.
The RTC peripheral's `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE1`
instance is accessed via the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::mode1` member variable.
The RTC peripheral's `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE2`
instance is accessed via the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::mode2` member variable.

The Microchip SAM D21/DA1 RTC peripheral mode 2 ALARM and MASK registers are organized as
"Alarm Groups" and therefore the member classes and member variables associated with these
registers are members of the
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE2::Alarm_Group` member
class.
`::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC::MODE2::Alarm_Group` instances are
accessed via the
`::picolibrary::Microchip::SAM::D21DA1::Periperhal::RTC::MODE2::alarm_group` member
variable.

### SYSCTRL
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL` class defines the layout
of the Microchip SAM D21/DA1 SYSCTRL peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.cc)
header/source file pair.

### WDT
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::WDT` class defines the layout of
the Microchip SAM D21/DA1 WDT peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::WDT` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/wdt.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/wdt.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/wdt.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/wdt.cc)
header/source file pair.

## Peripheral Instances
Microchip SAM D21/DA1 peripheral instances are defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral.cc)
header/source file pair.
Peripheral instance names are based on the names used in the "Peripherals Configuration
Summary" table of the datasheet with the following change: a `0` is added to the end of
the name of peripherals that only have a single instance to differentiate the peripheral
name and the instance name.
The following peripheral instances are defined (listed alphabetically):
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::EIC0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::GCLK0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC1`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC2`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PM0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::RTC0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::WDT0`

The availability of these Microchip SAM D21/DA1 peripheral instance definitions depends on
the specific Microchip SAM D21/DA1 microcontroller used.
