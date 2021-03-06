/**
 *
 * @copyright &copy; 2010 - 2018, Fraunhofer-Gesellschaft zur Foerderung der angewandten Forschung e.V. All rights reserved.
 *
 * BSD 3-Clause License
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 * 1.  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * We kindly request you to use one or more of the following phrases to refer to foxBMS in your hardware, software, documentation or advertising materials:
 *
 * &Prime;This product uses parts of foxBMS&reg;&Prime;
 *
 * &Prime;This product includes parts of foxBMS&reg;&Prime;
 *
 * &Prime;This product is derived from foxBMS&reg;&Prime;
 *
 */

/**
 * @file    main.h
 * @author  foxBMS Team
 * @date    26.08.2015 (date of creation)
 * @ingroup GENERAL
 * @prefix  none
 *
 * @brief   Main function header
 *
 */

#ifndef MAIN_H_
#define MAIN_H_

#ifdef __cplusplus
extern "C" {
#endif


/*================== Includes =============================================*/
#include "rtc.h"

/*================== Macros and Definitions ===============================*/
/**
 * Systemwide low level control, status Information of system
 */
typedef struct {
    RTC_Date_s date;    /*!< RCC clock control & status register at startup */
    RTC_Time_s time;    /*!<  state of Eeprom Driver State Machine          */
    //uint32_t date;    /*!< RCC clock control & status register at startup */
    //uint32_t time;    /*!<  state of Eeprom Driver State Machine          */
    uint32_t dummy[4];  /*!<                                                */
} MAIN_RESETSOURCE_s;


/**
 * Systemwide low level control, status Information of system
 */
typedef struct {
    uint32_t CSR;                       /*!< RCC clock control & status register at startup */
    uint32_t resetcounter;              /*!< state of Eeprom Driver State Machine           */
    RTC_Date_s boot_rtcdate;            /*!< boot date                                      */
    RTC_Time_s boot_rtctime;            /*!< boot time                                      */
    RTC_Date_s terminate_rtcdate;       /*!< TODO                                           */
    RTC_Time_s terminate_rtctime;       /*!< TODO                                           */
    uint32_t dummy[4];                  /*!<                                                */
    MAIN_RESETSOURCE_s resetsource[20]; /*!< in counts of 1ms                       */
} MAIN_STATUS_s;


/*================== Constant and Variable Definitions ====================*/

/*================== Function Prototypes ==================================*/

/*================== Function Implementations =============================*/

#endif /* MAIN_H_ */
