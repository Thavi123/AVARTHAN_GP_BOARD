/*
 * Copyright (c) 2020 Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef BOARD_H
#define BOARD_H

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//
// Included Files
//

#include "driverlib.h"
#include "device.h"

//*****************************************************************************
//
// PinMux Configurations
//
//*****************************************************************************
//
// GPIO4 - GPIO Settings
//
#define LED4_GPIO_PIN_CONFIG GPIO_4_GPIO4
//
// GPIO11 - GPIO Settings
//
#define PS1_GPIO_PIN_CONFIG GPIO_11_GPIO11
//
// GPIO12 - GPIO Settings
//
#define PS2_GPIO_PIN_CONFIG GPIO_12_GPIO12
//
// GPIO13 - GPIO Settings
//
#define PS3_GPIO_PIN_CONFIG GPIO_13_GPIO13
//
// GPIO14 - GPIO Settings
//
#define PS4_GPIO_PIN_CONFIG GPIO_14_GPIO14
//
// GPIO15 - GPIO Settings
//
#define PS5_GPIO_PIN_CONFIG GPIO_15_GPIO15

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
#define LED4 4
void LED4_init();
#define PS1 11
void PS1_init();
#define PS2 12
void PS2_init();
#define PS3 13
void PS3_init();
#define PS4 14
void PS4_init();
#define PS5 15
void PS5_init();

//*****************************************************************************
//
// INPUTXBAR Configurations
//
//*****************************************************************************
#define myINPUTXBARINPUT0_SOURCE 11
#define myINPUTXBARINPUT0_INPUT XBAR_INPUT4
void myINPUTXBARINPUT0_init();
#define myINPUTXBARINPUT1_SOURCE 12
#define myINPUTXBARINPUT1_INPUT XBAR_INPUT5
void myINPUTXBARINPUT1_init();
#define myINPUTXBARINPUT2_SOURCE 13
#define myINPUTXBARINPUT2_INPUT XBAR_INPUT6
void myINPUTXBARINPUT2_init();
#define myINPUTXBARINPUT3_SOURCE 14
#define myINPUTXBARINPUT3_INPUT XBAR_INPUT13
void myINPUTXBARINPUT3_init();
#define myINPUTXBARINPUT4_SOURCE 15
#define myINPUTXBARINPUT4_INPUT XBAR_INPUT14
void myINPUTXBARINPUT4_init();

//*****************************************************************************
//
// INTERRUPT Configurations
//
//*****************************************************************************

// Interrupt Settings for INT_PS1_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS1_XINT INT_XINT1
#define INT_PS1_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP1
extern __interrupt void INT_PS1_XINT_ISR(void);

// Interrupt Settings for INT_PS2_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS2_XINT INT_XINT2
#define INT_PS2_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP1
extern __interrupt void INT_PS2_XINT_ISR(void);

// Interrupt Settings for INT_PS3_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS3_XINT INT_XINT3
#define INT_PS3_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS3_XINT_ISR(void);

// Interrupt Settings for INT_PS4_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS4_XINT INT_XINT4
#define INT_PS4_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS4_XINT_ISR(void);

// Interrupt Settings for INT_PS5_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS5_XINT INT_XINT5
#define INT_PS5_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS5_XINT_ISR(void);

//*****************************************************************************
//
// XINT Configurations
//
//*****************************************************************************
#define PS1_XINT GPIO_INT_XINT1
#define PS1_XINT_TYPE GPIO_INT_TYPE_RISING_EDGE
void PS1_XINT_init();
#define PS2_XINT GPIO_INT_XINT2
#define PS2_XINT_TYPE GPIO_INT_TYPE_RISING_EDGE
void PS2_XINT_init();
#define PS3_XINT GPIO_INT_XINT3
#define PS3_XINT_TYPE GPIO_INT_TYPE_RISING_EDGE
void PS3_XINT_init();
#define PS4_XINT GPIO_INT_XINT4
#define PS4_XINT_TYPE GPIO_INT_TYPE_RISING_EDGE
void PS4_XINT_init();
#define PS5_XINT GPIO_INT_XINT5
#define PS5_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void PS5_XINT_init();

//*****************************************************************************
//
// Board Configurations
//
//*****************************************************************************
void	Board_init();
void	GPIO_init();
void	INPUTXBAR_init();
void	INTERRUPT_init();
void	XINT_init();
void	PinMux_init();

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // end of BOARD_H definition
