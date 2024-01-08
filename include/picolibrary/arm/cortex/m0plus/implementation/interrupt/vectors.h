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
 * \brief picolibrary::Arm::Cortex::M0PLUS implementation interrupt vectors.
 */

/**
 * \brief PM handler.
 */
Handler pm_handler;

/**
 * \brief SYSCTRL handler.
 */
Handler sysctrl_handler;

/**
 * \brief WDT handler.
 */
Handler wdt_handler;

/**
 * \brief RTC handler.
 */
Handler rtc_handler;

/**
 * \brief EIC handler.
 */
Handler eic_handler;

/**
 * \brief NVMCTRL handler.
 */
Handler nvmctrl_handler;

/**
 * \brief DMAC handler.
 */
Handler dmac_handler;

/**
 * \brief USB handler.
 */
Handler usb_handler;

/**
 * \brief EVSYS handler.
 */
Handler evsys_handler;

/**
 * \brief SERCOM0 handler.
 */
Handler sercom0_handler;

/**
 * \brief SERCOM1 handler.
 */
Handler sercom1_handler;

/**
 * \brief SERCOM2 handler.
 */
Handler sercom2_handler;

/**
 * \brief SERCOM3 handler.
 */
Handler sercom3_handler;

/**
 * \brief SERCOM4 handler.
 */
Handler sercom4_handler;

/**
 * \brief SERCOM5 handler.
 */
Handler sercom5_handler;

/**
 * \brief TCC0 handler.
 */
Handler tcc0_handler;

/**
 * \brief TCC1 handler.
 */
Handler tcc1_handler;

/**
 * \brief TCC2 handler.
 */
Handler tcc2_handler;

/**
 * \brief TC3 handler.
 */
Handler tc3_handler;

/**
 * \brief TC4 handler.
 */
Handler tc4_handler;

/**
 * \brief TC5 handler.
 */
Handler tc5_handler;

/**
 * \brief TC6 handler.
 */
Handler tc6_handler;

/**
 * \brief TC7 handler.
 */
Handler tc7_handler;

/**
 * \brief ADC handler.
 */
Handler adc_handler;

/**
 * \brief AC handler.
 */
Handler ac_handler;

/**
 * \brief DAC handler.
 */
Handler dac_handler;

/**
 * \brief PTC handler.
 */
Handler ptc_handler;

/**
 * \brief I2S handler.
 */
Handler i2s_handler;

/**
 * \brief AC1 handler.
 */
Handler ac1_handler;

/**
 * \brief TCC3 handler.
 */
Handler tcc3_handler;
