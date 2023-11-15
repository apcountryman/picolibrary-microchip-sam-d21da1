/*
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

/*
 * Description: picolibrary-microchip-sam-d21da1 SAMD21G18A Arduino Zero interactive
 *      testing EDBG linker script.
 */

OUTPUT_FORMAT( "elf32-littlearm", "elf32-littlearm", "elf32-littlearm" )
OUTPUT_ARCH( arm )

/*
 * Physical memory configuration.
 */
FLASH_SIZE  = 256K;
FLASH_START = 0x00000000;
FLASH_END   = FLASH_START + FLASH_SIZE - 0x1;
SRAM_SIZE   = 32K;
SRAM_START  = 0x20000000;
SRAM_END    = SRAM_START + SRAM_SIZE - 0x1;

/*
 * Project memory configuration.
 */
STACK_SRAM_SIZE = 8K;

ASSERT( STACK_SRAM_SIZE <= SRAM_SIZE, "STACK_SRAM_SIZE must be less than or equal to SRAM_SIZE" );
ASSERT( ( STACK_SRAM_SIZE % 1K ) == 0, "STACK_SRAM_SIZE must be a multiple of 1K" );

MEMORY
{
    flash (rx) : ORIGIN = FLASH_START, LENGTH = FLASH_SIZE

    sram (rwx) : ORIGIN = SRAM_START, LENGTH = SRAM_SIZE
}

SECTIONS
{
    .text :
    {
        . = ALIGN( 4 );
        _text_start = .;

        /*
         * Vector table.
         */
        . = ALIGN( 4 );
        _vector_table = .;
        _vector_table_start = .;
        KEEP( *(.vectors) )
        KEEP( *(.vectors.*) )
        _vector_table_end = .;

        /*
         * Application code.
         */
        . = ALIGN( 4 );
        *(.text)
        *(.text.*)
        *(.gnu.linkonce.t.*)

        /*
         * Arm to Thumb and Thumb to Arm glue code.
         */
        . = ALIGN( 4 );
        *(.glue_7)
        *(.glue_7t)

        /*
         * Read-only data.
         */
        . = ALIGN( 4 );
        *(.rodata)
        *(.rodata.*)
        *(.gnu.linkonce.r.*)

        /*
         * C designated constructors and C++ static variable initializers.
         */
        . = ALIGN( 4 );
        KEEP( *(.init) )
        . = ALIGN( 4 );
        __preinit_array_start = .;
        KEEP( *(.preinit_array) )
        __preinit_array_end = .;
        . = ALIGN( 4 );
        __init_array_start = .;
        KEEP( *(SORT(.init_array.*)) )
        KEEP( *(.init_array) )
        __init_array_end = .;

        /*
         * C designated destructors and C++ destructors for static variables.
         */
        . = ALIGN( 4 );
        KEEP( *(.fini) )
        . = ALIGN( 4 );
        __fini_array_start = .;
        KEEP( *(.fini_array))
        KEEP( *(SORT(.fini_array.*)) )
        __fini_array_end = .;

        /*
         * C++ static constructors.
         */
        . = ALIGN( 4 );
        KEEP( *crtbegin.o(.ctors) )
        KEEP( *(EXCLUDE_FILE(*crtend.o).ctors) )
        KEEP( *(SORT(.ctors.*)) )
        KEEP( *crtend.o(.ctors) )

        /*
         * C++ static destructors and atexit().
         */
        . = ALIGN( 4 );
        KEEP( *crtbegin.o(.dtors) )
        KEEP( *(EXCLUDE_FILE(*crtend.o).dtors) )
        KEEP( *(SORT(.dtors.*)) )
        KEEP( *crtend.o(.dtors) )
    } > flash

    /*
     * Arm exception unwinding section information.
     */
    .ARM.extab :
    {
        *(.ARM.extab*)
        *(.gnu.linkonce.armextab.*)
    } > flash

    /*
     * Arm stack unwinding index entries.
     */
    .ARM.exidx :
    {
        PROVIDE( __exidx_start = . );
        *(.ARM.exidx*)
        *(.gnu.linkonce.armexidx.*)
        PROVIDE( __exidx_end = . );
    } > flash

    . = ALIGN( 4 );
    _data_flash = .;
    _data_flash_start = .;

    .data : AT( _data_flash_start )
    {
        . = ALIGN( 4 );
        _data = .;
        _data_start = .;

        /*
         * Functions executed from RAM.
         */
        . = ALIGN( 4 );
        *(.ramfunc)
        *(.ramfunc.*)

        /*
         * Initialized variables.
         */
        . = ALIGN( 4 );
        *(.data)
        *(.data.*)

        . = ALIGN( 4 );
        _data_end = .;
    } > sram

    .bss (NOLOAD) :
    {
        . = ALIGN( 4 );
        _bss = .;
        _bss_start = .;
        __bss_start__ = .;

        /*
         * Uninitialized variables.
         */
        . = ALIGN( 4 );
        *(.bss)
        *(.bss.*)

        /*
         * Common symbols (?).
         *
         * https://sourceware.org/binutils/docs/ld/Input-Section-Common.html
         */
        . = ALIGN( 4 );
        *(COMMON)

        . = ALIGN( 4 );
        _bss_end = .;
        __bss_end__ = .;
    } > sram

    .stack (NOLOAD) :
    {
        . = ALIGN( 8 );
        _stack = .;
        _stack_start = .;

        . += STACK_SRAM_SIZE;

        . = ALIGN( 8 );
        _stack_end = .;
    } > sram
}
