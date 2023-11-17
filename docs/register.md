# Register Facilities
Microchip SAM D21/DA1 register facilities are defined in the
[`include/picolibrary/microchip/sam/d21da1/register.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/register.h)/[`source/picolibrary/microchip/sam/d21da1/register.cc`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/source/picolibrary/microchip/sam/d21da1/register.cc)
header/source file pair.

## Table of Contents
1. [Register](#register)

## Register
The `::picolibrary::Microchip::SAM::D21DA1::Register` class is used to declare a Microchip
SAM D21/DA1 register.
Register access is restricted to the following operations:
- Conversion to the underlying register type (reading the register)
- Assignment
- Bitwise AND assignment
- Bitwise OR assignment
- Bitwise XOR assignment
