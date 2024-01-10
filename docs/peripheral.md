# Peripheral Facilities

## Table of Contents
1. [Peripherals](#peripherals)
    1. [NVMCTRL](#nvmctrl)
    1. [PAC](#pac)
    1. [SYSCTRL](#sysctrl)
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

### SYSCTRL
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL` class defines the layout
of the Microchip SAM D21/DA1 SYSCTRL peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/sysctrl.cc)
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
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::NVMCTRL0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC0`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC1`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::PAC2`
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSCTRL0`

The availability of these Microchip SAM D21/DA1 peripheral instance definitions depends on
the specific Microchip SAM D21/DA1 microcontroller used.
