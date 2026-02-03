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

#include "board.h"

//*****************************************************************************
//
// Board Configurations
// Initializes the rest of the modules. 
// Call this function in your application if you wish to do all module 
// initialization.
// If you wish to not use some of the initializations, instead of the 
// Board_init use the individual Module_inits
//
//*****************************************************************************
void Board_init()
{
	EALLOW;

	PinMux_init();
	INPUTXBAR_init();
	GPIO_init();
	XINT_init();
	INTERRUPT_init();

	EDIS;
}

//*****************************************************************************
//
// PINMUX Configurations
//
//*****************************************************************************
void PinMux_init()
{
	//
	// PinMux for modules assigned to CPU1
	//
	
	// GPIO4 -> LED4 Pinmux
	GPIO_setPinConfig(GPIO_4_GPIO4);
	// GPIO11 -> PS1 Pinmux
	GPIO_setPinConfig(GPIO_11_GPIO11);
	// GPIO12 -> PS2 Pinmux
	GPIO_setPinConfig(GPIO_12_GPIO12);
	// GPIO13 -> PS3 Pinmux
	GPIO_setPinConfig(GPIO_13_GPIO13);
	// GPIO14 -> PS4 Pinmux
	GPIO_setPinConfig(GPIO_14_GPIO14);
	// GPIO15 -> PS5 Pinmux
	GPIO_setPinConfig(GPIO_15_GPIO15);

}


//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
void GPIO_init(){
	LED4_init();
	PS1_init();
	PS2_init();
	PS3_init();
	PS4_init();
	PS5_init();
}

void LED4_init(){
	GPIO_setPadConfig(LED4, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(LED4, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(LED4, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(LED4, GPIO_CORE_CPU1);
}
void PS1_init(){
	GPIO_setPadConfig(PS1, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PS1, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS1, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS1, GPIO_CORE_CPU1);
}
void PS2_init(){
	GPIO_setPadConfig(PS2, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PS2, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS2, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS2, GPIO_CORE_CPU1);
}
void PS3_init(){
	GPIO_setPadConfig(PS3, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PS3, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS3, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS3, GPIO_CORE_CPU1);
}
void PS4_init(){
	GPIO_setPadConfig(PS4, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PS4, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS4, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS4, GPIO_CORE_CPU1);
}
void PS5_init(){
	GPIO_setPadConfig(PS5, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PS5, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS5, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS5, GPIO_CORE_CPU1);
}

//*****************************************************************************
//
// INPUTXBAR Configurations
//
//*****************************************************************************
void INPUTXBAR_init(){
	myINPUTXBARINPUT0_init();
	myINPUTXBARINPUT1_init();
	myINPUTXBARINPUT2_init();
	myINPUTXBARINPUT3_init();
	myINPUTXBARINPUT4_init();
}

void myINPUTXBARINPUT0_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT0_INPUT, myINPUTXBARINPUT0_SOURCE);
}
void myINPUTXBARINPUT1_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT1_INPUT, myINPUTXBARINPUT1_SOURCE);
}
void myINPUTXBARINPUT2_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT2_INPUT, myINPUTXBARINPUT2_SOURCE);
}
void myINPUTXBARINPUT3_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT3_INPUT, myINPUTXBARINPUT3_SOURCE);
}
void myINPUTXBARINPUT4_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT4_INPUT, myINPUTXBARINPUT4_SOURCE);
}

//*****************************************************************************
//
// INTERRUPT Configurations
//
//*****************************************************************************
void INTERRUPT_init(){
	
	// Interrupt Settings for INT_PS1_XINT
	// ISR need to be defined for the registered interrupts
	Interrupt_register(INT_PS1_XINT, &INT_PS1_XINT_ISR);
	Interrupt_enable(INT_PS1_XINT);
	
	// Interrupt Settings for INT_PS2_XINT
	// ISR need to be defined for the registered interrupts
	Interrupt_register(INT_PS2_XINT, &INT_PS2_XINT_ISR);
	Interrupt_enable(INT_PS2_XINT);
	
	// Interrupt Settings for INT_PS3_XINT
	// ISR need to be defined for the registered interrupts
	Interrupt_register(INT_PS3_XINT, &INT_PS3_XINT_ISR);
	Interrupt_enable(INT_PS3_XINT);
	
	// Interrupt Settings for INT_PS4_XINT
	// ISR need to be defined for the registered interrupts
	Interrupt_register(INT_PS4_XINT, &INT_PS4_XINT_ISR);
	Interrupt_enable(INT_PS4_XINT);
	
	// Interrupt Settings for INT_PS5_XINT
	// ISR need to be defined for the registered interrupts
	Interrupt_register(INT_PS5_XINT, &INT_PS5_XINT_ISR);
	Interrupt_enable(INT_PS5_XINT);
}
//*****************************************************************************
//
// XINT Configurations
//
//*****************************************************************************
void XINT_init(){
	PS1_XINT_init();
	PS2_XINT_init();
	PS3_XINT_init();
	PS4_XINT_init();
	PS5_XINT_init();
}

void PS1_XINT_init(){
	GPIO_setInterruptType(PS1_XINT, GPIO_INT_TYPE_RISING_EDGE);
	GPIO_setInterruptPin(PS1, PS1_XINT);
	GPIO_enableInterrupt(PS1_XINT);
}
void PS2_XINT_init(){
	GPIO_setInterruptType(PS2_XINT, GPIO_INT_TYPE_RISING_EDGE);
	GPIO_setInterruptPin(PS2, PS2_XINT);
	GPIO_enableInterrupt(PS2_XINT);
}
void PS3_XINT_init(){
	GPIO_setInterruptType(PS3_XINT, GPIO_INT_TYPE_RISING_EDGE);
	GPIO_setInterruptPin(PS3, PS3_XINT);
	GPIO_enableInterrupt(PS3_XINT);
}
void PS4_XINT_init(){
	GPIO_setInterruptType(PS4_XINT, GPIO_INT_TYPE_RISING_EDGE);
	GPIO_setInterruptPin(PS4, PS4_XINT);
	GPIO_enableInterrupt(PS4_XINT);
}
void PS5_XINT_init(){
	GPIO_setInterruptType(PS5_XINT, GPIO_INT_TYPE_FALLING_EDGE);
	GPIO_setInterruptPin(PS5, PS5_XINT);
	GPIO_enableInterrupt(PS5_XINT);
}

