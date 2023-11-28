# Peripheral Facilities

## Table of Contents
1. [Peripherals](#peripherals)
    1. [SYSTICK](#systick)
1. [Peripheral Instances](#peripheral-instances)

## Peripherals
The layout of each Microchip SAM D21/DA1 peripheral's registers is defined by the class
named after the peripheral.
Peripheral registers are accessed via the member variables named after the registers.
Peripheral register information is defined in member classes named after the registers.
Peripheral register field constants are defined in the following member structures:
- `Size`: field sizes
- `Bit`: field bit positions
- `Mask`: field bit masks

### SYSTICK
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSTICK` class defines the layout
of the Microchip SAM D21/DA1 SYSTICK peripheral and information about its registers.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSTICK` class is defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/systick.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/systick.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/systick.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/systick.cc)
header/source file pair.

## Peripheral Instances
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::Instance` template class is used
to define Microchip SAM D21/DA1 peripheral instances.
The `::picolibrary::Microchip::SAM::D21DA1::Peripheral::Instance` template class is
defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral/instance.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral/instance.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral/instance.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral/instance.cc)
header/source file pair.
- To access a peripheral instance, use the
  `::picolibrary::Microchip::SAM::D21DA1::Peripheral::Instance::instance()` static member
  function.

Microchip SAM D21/DA1 peripheral instances are defined in the
[`include/picolibrary/microchip/sam/d21da1/peripheral.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/peripheral.h)/[`source/picolibrary/microchip/sam/d21da1/peripheral.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/peripheral.cc)
header/source file pair.
Peripheral instance names are based on the names used in the "Peripherals Configuration
Summary" table of the datasheet with the following change: a `0` is added to the end of
the name of peripherals that only have a single instance to differentiate the peripheral
name and the instance name.
The following peripheral instances are defined (listed alphabetically):
- `::picolibrary::Microchip::SAM::D21DA1::Peripheral::SYSTICK0`

The availability of these Microchip SAM D21/DA1 peripheral instance definitions depends on
the specific Microchip SAM D21/DA1 microcontroller used.
