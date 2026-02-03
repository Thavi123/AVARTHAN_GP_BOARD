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
	SYNC_init();
	ASYSCTL_init();
	ADC_init();
	CAN_init();
	DAC_init();
	EPWM_init();
	GPIO_init();
	I2C_init();
	SCI_init();
	SPI_init();
	UART_init();

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
	
	//
	// ANALOG -> myANALOGPinMux0 Pinmux
	//
	// Analog PinMux for A0/DACA_OUT
	GPIO_setPinConfig(GPIO_227_GPIO227);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(227, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A1
	GPIO_setPinConfig(GPIO_228_GPIO228);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(228, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A10, GPIO213
	GPIO_setPinConfig(GPIO_213_GPIO213);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(213, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A11, GPIO214
	GPIO_setPinConfig(GPIO_214_GPIO214);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(214, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A14/B14/C14
	GPIO_setPinConfig(GPIO_225_GPIO225);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(225, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A15/B15/C15
	GPIO_setPinConfig(GPIO_226_GPIO226);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(226, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A2
	GPIO_setPinConfig(GPIO_229_GPIO229);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(229, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A3
	GPIO_setPinConfig(GPIO_230_GPIO230);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(230, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A4
	GPIO_setPinConfig(GPIO_231_GPIO231);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(231, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A5
	GPIO_setPinConfig(GPIO_232_GPIO232);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(232, GPIO_ANALOG_ENABLED);
	// Analog PinMux for A6, GPIO209
	GPIO_setPinConfig(GPIO_209_GPIO209);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(209, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B0/VDAC
	GPIO_setPinConfig(GPIO_233_GPIO233);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(233, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B1/DACC_OUT
	GPIO_setPinConfig(GPIO_234_GPIO234);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(234, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B2
	GPIO_setPinConfig(GPIO_235_GPIO235);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(235, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B3
	GPIO_setPinConfig(GPIO_236_GPIO236);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(236, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B6, GPIO207
	GPIO_setPinConfig(GPIO_207_GPIO207);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(207, GPIO_ANALOG_ENABLED);
	// Analog PinMux for B7, GPIO208
	GPIO_setPinConfig(GPIO_208_GPIO208);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(208, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C0, GPIO199
	GPIO_setPinConfig(GPIO_199_GPIO199);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(199, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C2
	GPIO_setPinConfig(GPIO_237_GPIO237);
	// AIO -> Analog mode selected
	GPIO_setAnalogMode(237, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C3, GPIO206
	GPIO_setPinConfig(GPIO_206_GPIO206);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(206, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C4, GPIO205
	GPIO_setPinConfig(GPIO_205_GPIO205);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(205, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C5, GPIO204
	GPIO_setPinConfig(GPIO_204_GPIO204);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(204, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C6, GPIO203
	GPIO_setPinConfig(GPIO_203_GPIO203);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(203, GPIO_ANALOG_ENABLED);
	// Analog PinMux for C1, GPIO200
	GPIO_setPinConfig(GPIO_200_GPIO200);
	// AGPIO -> Analog mode selected
	GPIO_setAnalogMode(200, GPIO_ANALOG_ENABLED);
	//
	// CANA -> myCAN0 Pinmux
	//
	GPIO_setPinConfig(myCAN0_CANRX_PIN_CONFIG);
	GPIO_setPadConfig(myCAN0_CANRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myCAN0_CANRX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myCAN0_CANTX_PIN_CONFIG);
	GPIO_setPadConfig(myCAN0_CANTX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myCAN0_CANTX_GPIO, GPIO_QUAL_ASYNC);

	//
	// EPWM1 -> myEPWM0 Pinmux
	//
	GPIO_setPinConfig(myEPWM0_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM0_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM0_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM0_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM0_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM0_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM2 -> myEPWM1 Pinmux
	//
	GPIO_setPinConfig(myEPWM1_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM1_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM1_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM1_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM1_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM1_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM3 -> myEPWM2 Pinmux
	//
	GPIO_setPinConfig(myEPWM2_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM2_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM2_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM2_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM2_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM2_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM4 -> myEPWM3 Pinmux
	//
	GPIO_setPinConfig(myEPWM3_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM3_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM3_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM3_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM3_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM3_EPWMB_GPIO, GPIO_QUAL_SYNC);

	// GPIO34 -> LED_GPIO Pinmux
	GPIO_setPinConfig(GPIO_34_GPIO34);
	// GPIO11 -> PS1 Pinmux
	GPIO_setPinConfig(GPIO_11_GPIO11);
	// GPIO13 -> PS3 Pinmux
	GPIO_setPinConfig(GPIO_13_GPIO13);
	// GPIO14 -> PS4 Pinmux
	GPIO_setPinConfig(GPIO_14_GPIO14);
	// GPIO15 -> PS5 Pinmux
	GPIO_setPinConfig(GPIO_15_GPIO15);
	// GPIO84 -> OCP1 Pinmux
	GPIO_setPinConfig(GPIO_84_GPIO84);
	// GPIO85 -> OCP2 Pinmux
	GPIO_setPinConfig(GPIO_85_GPIO85);
	// GPIO86 -> OCP3 Pinmux
	GPIO_setPinConfig(GPIO_86_GPIO86);
	// GPIO87 -> OCP4 Pinmux
	GPIO_setPinConfig(GPIO_87_GPIO87);
	// GPIO12 -> PS2 Pinmux
	GPIO_setPinConfig(GPIO_12_GPIO12);
	// GPIO61 -> CC_REF_PH1 Pinmux
	GPIO_setPinConfig(GPIO_61_GPIO61);
	// GPIO62 -> CC_REF_PH2 Pinmux
	GPIO_setPinConfig(GPIO_62_GPIO62);
	// GPIO63 -> CC_REF_PH3 Pinmux
	GPIO_setPinConfig(GPIO_63_GPIO63);
	// GPIO64 -> CC_REF_PH4 Pinmux
	GPIO_setPinConfig(GPIO_64_GPIO64);
	// GPIO100 -> RELAY Pinmux
	GPIO_setPinConfig(GPIO_100_GPIO100);
	// GPIO35 -> PFC Pinmux
	GPIO_setPinConfig(GPIO_35_GPIO35);
	// GPIO222/TDI -> myGPIO0 Pinmux
	GPIO_setPinConfig(GPIO_222_GPIO222);
	//
	// I2CA -> myI2C0 Pinmux
	//
	GPIO_setPinConfig(myI2C0_I2CSDA_PIN_CONFIG);
	GPIO_setPadConfig(myI2C0_I2CSDA_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myI2C0_I2CSDA_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myI2C0_I2CSCL_PIN_CONFIG);
	GPIO_setPadConfig(myI2C0_I2CSCL_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myI2C0_I2CSCL_GPIO, GPIO_QUAL_ASYNC);

	//
	// SCIB -> mySCI0 Pinmux
	//
	GPIO_setPinConfig(mySCI0_SCIRX_PIN_CONFIG);
	GPIO_setPadConfig(mySCI0_SCIRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(mySCI0_SCIRX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySCI0_SCITX_PIN_CONFIG);
	GPIO_setPadConfig(mySCI0_SCITX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(mySCI0_SCITX_GPIO, GPIO_QUAL_ASYNC);

	//
	// SPID -> mySPI0 Pinmux
	//
	GPIO_setPinConfig(mySPI0_SPIPICO_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPICO_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPICO_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPIPOCI_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPOCI_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPOCI_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPICLK_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPICLK_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPICLK_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPIPTE_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPTE_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPTE_GPIO, GPIO_QUAL_ASYNC);

	//
	// UARTB -> myUART0 Pinmux
	//
	GPIO_setPinConfig(myUART0_UARTTX_PIN_CONFIG);
	GPIO_setPadConfig(myUART0_UARTTX_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myUART0_UARTTX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myUART0_UARTRX_PIN_CONFIG);
	GPIO_setPadConfig(myUART0_UARTRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myUART0_UARTRX_GPIO, GPIO_QUAL_ASYNC);

	//
	// UARTA -> myUART1 Pinmux
	//
	GPIO_setPinConfig(myUART1_UARTTX_PIN_CONFIG);
	GPIO_setPadConfig(myUART1_UARTTX_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myUART1_UARTTX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myUART1_UARTRX_PIN_CONFIG);
	GPIO_setPadConfig(myUART1_UARTRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myUART1_UARTRX_GPIO, GPIO_QUAL_ASYNC);


}

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
void ADC_init(){
	myADC0_init();
	myADC1_init();
	myADC2_init();
}

void myADC0_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC0_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC0_BASE, ADC_CLK_DIV_3_5);
	//
	// Configures the analog-to-digital converter resolution and signal mode.
	//
	ADC_setMode(myADC0_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC0_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC0_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC0_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// Enable alternate timings for DMA trigger
	//
	ADC_enableAltDMATiming(myADC0_BASE);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC0_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC0_BASE, ADC_PRI_ALL_ROUND_ROBIN);
	//
	// Start of Conversion 0 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 0
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN1
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN1, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER0, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 1 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 1
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN2
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER1, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN2, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER1, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 2 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 2
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN3
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER2, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN3, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER2, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 3 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 3
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN4
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER3, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN4, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER3, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 4 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 4
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN5
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER4, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN5, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER4, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 5 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 5
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN6
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER5, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN6, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER5, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 6 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 6
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN10
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER6, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN10, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER6, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 7 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 7
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN11
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER7, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN11, 15U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER7, ADC_INT_SOC_TRIGGER_NONE);
}

void myADC1_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC1_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC1_BASE, ADC_CLK_DIV_3_5);
	//
	// Configures the analog-to-digital converter resolution and signal mode.
	//
	ADC_setMode(myADC1_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC1_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC1_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC1_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// Enable alternate timings for DMA trigger
	//
	ADC_enableAltDMATiming(myADC1_BASE);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC1_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC1_BASE, ADC_PRI_ALL_ROUND_ROBIN);
	//
	// Start of Conversion 0 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 0
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN0
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC1_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN0, 15U);
	ADC_setInterruptSOCTrigger(myADC1_BASE, ADC_SOC_NUMBER0, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 1 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 1
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN2
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC1_BASE, ADC_SOC_NUMBER1, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN2, 15U);
	ADC_setInterruptSOCTrigger(myADC1_BASE, ADC_SOC_NUMBER1, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 2 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 2
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN3
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC1_BASE, ADC_SOC_NUMBER2, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN3, 15U);
	ADC_setInterruptSOCTrigger(myADC1_BASE, ADC_SOC_NUMBER2, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 3 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 3
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN6
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC1_BASE, ADC_SOC_NUMBER3, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN6, 15U);
	ADC_setInterruptSOCTrigger(myADC1_BASE, ADC_SOC_NUMBER3, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 4 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 4
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN7
	//	 	Sample Window	: 15 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC1_BASE, ADC_SOC_NUMBER4, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN7, 15U);
	ADC_setInterruptSOCTrigger(myADC1_BASE, ADC_SOC_NUMBER4, ADC_INT_SOC_TRIGGER_NONE);
}

void myADC2_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC2_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC2_BASE, ADC_CLK_DIV_4_0);
	//
	// Configures the analog-to-digital converter resolution and signal mode.
	//
	ADC_setMode(myADC2_BASE, ADC_RESOLUTION_16BIT, ADC_MODE_DIFFERENTIAL);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC2_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC2_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC2_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// Enable alternate timings for DMA trigger
	//
	ADC_enableAltDMATiming(myADC2_BASE);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC2_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC2_BASE, ADC_PRI_ALL_ROUND_ROBIN);
	//
	// Start of Conversion 0 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 0
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN0_ADCIN1
	//	 	Sample Window	: 65 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC2_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN0_ADCIN1, 65U);
	ADC_setInterruptSOCTrigger(myADC2_BASE, ADC_SOC_NUMBER0, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 1 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 1
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN2_ADCIN3
	//	 	Sample Window	: 65 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC2_BASE, ADC_SOC_NUMBER1, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN2_ADCIN3, 65U);
	ADC_setInterruptSOCTrigger(myADC2_BASE, ADC_SOC_NUMBER1, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 2 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 2
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN4_ADCIN5
	//	 	Sample Window	: 65 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC2_BASE, ADC_SOC_NUMBER2, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN4_ADCIN5, 65U);
	ADC_setInterruptSOCTrigger(myADC2_BASE, ADC_SOC_NUMBER2, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 3 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 3
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN14_ADCIN15
	//	 	Sample Window	: 65 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC2_BASE, ADC_SOC_NUMBER3, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN14_ADCIN15, 65U);
	ADC_setInterruptSOCTrigger(myADC2_BASE, ADC_SOC_NUMBER3, ADC_INT_SOC_TRIGGER_NONE);
}


//*****************************************************************************
//
// ASYSCTL Configurations
//
//*****************************************************************************
void ASYSCTL_init(){
	//
	// asysctl initialization
	//
	// Disables the temperature sensor output to the ADC.
	//
	ASysCtl_disableTemperatureSensor();
	//
	// Set the analog voltage reference selection to external.
	//
	ASysCtl_setAnalogReferenceExternal( ASYSCTL_VREFHIA | ASYSCTL_VREFHIB | ASYSCTL_VREFHIC );
}


//*****************************************************************************
//
// CAN Configurations
//
//*****************************************************************************
void CAN_init(){
	myCAN0_init();
}

void myCAN0_init(){
	CAN_initModule(myCAN0_BASE);
	//
	// Refer to the Driver Library User Guide for information on how to set
	// tighter timing control. Additionally, consult the device data sheet
	// for more information about the CAN module clocking.
	//
	CAN_setBitTiming(myCAN0_BASE, 15, 0, 15, 7, 3);
	//
	// Start CAN module operations
	//
	CAN_startModule(myCAN0_BASE);
}

//*****************************************************************************
//
// DAC Configurations
//
//*****************************************************************************
void DAC_init(){
	myDAC0_init();
	myDAC1_init();
}

void myDAC0_init(){
	//
	// Set DAC reference voltage.
	//
	DAC_setReferenceVoltage(myDAC0_BASE, DAC_REF_ADC_VREFHI);
	//
	// Set DAC gain mode.
	//
	DAC_setGainMode(myDAC0_BASE, DAC_GAIN_ONE);
	//
	// Set DAC load mode.
	//
	DAC_setLoadMode(myDAC0_BASE, DAC_LOAD_SYSCLK);
	//
	// Enable the DAC output
	//
	DAC_enableOutput(myDAC0_BASE);
	//
	// Set the DAC shadow output
	//
	DAC_setShadowValue(myDAC0_BASE, 0U);

	//
	// Delay for buffered DAC to power up.
	//
	DEVICE_DELAY_US(500);
}
void myDAC1_init(){
	//
	// Set DAC reference voltage.
	//
	DAC_setReferenceVoltage(myDAC1_BASE, DAC_REF_ADC_VREFHI);
	//
	// Set DAC gain mode.
	//
	DAC_setGainMode(myDAC1_BASE, DAC_GAIN_ONE);
	//
	// Set DAC load mode.
	//
	DAC_setLoadMode(myDAC1_BASE, DAC_LOAD_SYSCLK);
	//
	// Enable the DAC output
	//
	DAC_enableOutput(myDAC1_BASE);
	//
	// Set the DAC shadow output
	//
	DAC_setShadowValue(myDAC1_BASE, 0U);

	//
	// Delay for buffered DAC to power up.
	//
	DEVICE_DELAY_US(500);
}

//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
void EPWM_init(){
    EPWM_setClockPrescaler(myEPWM0_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_1);	
    EPWM_setTimeBasePeriod(myEPWM0_BASE, 10000);	
    EPWM_setTimeBaseCounter(myEPWM0_BASE, 0);	
    EPWM_setTimeBaseCounterMode(myEPWM0_BASE, EPWM_COUNTER_MODE_UP);	
    EPWM_disablePhaseShiftLoad(myEPWM0_BASE);	
    EPWM_setPhaseShift(myEPWM0_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM0_BASE, EPWM_COUNTER_COMPARE_A, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM0_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM0_BASE, EPWM_COUNTER_COMPARE_B, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM0_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM0_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM0_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM0_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM0_BASE);	
    EPWM_setClockPrescaler(myEPWM1_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_1);	
    EPWM_setTimeBasePeriod(myEPWM1_BASE, 10000);	
    EPWM_setTimeBaseCounter(myEPWM1_BASE, 0);	
    EPWM_setTimeBaseCounterMode(myEPWM1_BASE, EPWM_COUNTER_MODE_UP);	
    EPWM_disablePhaseShiftLoad(myEPWM1_BASE);	
    EPWM_setPhaseShift(myEPWM1_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM1_BASE, EPWM_COUNTER_COMPARE_A, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM1_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM1_BASE, EPWM_COUNTER_COMPARE_B, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM1_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM1_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM1_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM1_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM1_BASE);	
    EPWM_setClockPrescaler(myEPWM2_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_1);	
    EPWM_setTimeBasePeriod(myEPWM2_BASE, 10000);	
    EPWM_setTimeBaseCounter(myEPWM2_BASE, 0);	
    EPWM_setTimeBaseCounterMode(myEPWM2_BASE, EPWM_COUNTER_MODE_UP);	
    EPWM_disablePhaseShiftLoad(myEPWM2_BASE);	
    EPWM_setPhaseShift(myEPWM2_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM2_BASE, EPWM_COUNTER_COMPARE_A, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM2_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM2_BASE, EPWM_COUNTER_COMPARE_B, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM2_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM2_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM2_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM2_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM2_BASE);	
    EPWM_setClockPrescaler(myEPWM3_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_1);	
    EPWM_setTimeBasePeriod(myEPWM3_BASE, 10000);	
    EPWM_setTimeBaseCounter(myEPWM3_BASE, 0);	
    EPWM_setTimeBaseCounterMode(myEPWM3_BASE, EPWM_COUNTER_MODE_UP);	
    EPWM_disablePhaseShiftLoad(myEPWM3_BASE);	
    EPWM_setPhaseShift(myEPWM3_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM3_BASE, EPWM_COUNTER_COMPARE_A, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM3_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM3_BASE, EPWM_COUNTER_COMPARE_B, 5000);	
    EPWM_setCounterCompareShadowLoadMode(myEPWM3_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM3_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM3_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(myEPWM3_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierShadowLoadMode(myEPWM3_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_HIGH, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_LOW, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(myEPWM3_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM3_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM3_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM3_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM3_BASE);	
}

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
void GPIO_init(){
	LED_GPIO_init();
	PS1_init();
	PS3_init();
	PS4_init();
	PS5_init();
	OCP1_init();
	OCP2_init();
	OCP3_init();
	OCP4_init();
	PS2_init();
	CC_REF_PH1_init();
	CC_REF_PH2_init();
	CC_REF_PH3_init();
	CC_REF_PH4_init();
	RELAY_init();
	PFC_init();
	myGPIO0_init();
}

void LED_GPIO_init(){
	GPIO_setPadConfig(LED_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(LED_GPIO, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(LED_GPIO, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(LED_GPIO, GPIO_CORE_CPU1);
}
void PS1_init(){
	GPIO_setPadConfig(PS1, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(PS1, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(PS1, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS1, GPIO_CORE_CPU1);
}
void PS3_init(){
	GPIO_setPadConfig(PS3, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(PS3, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS3, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS3, GPIO_CORE_CPU1);
}
void PS4_init(){
	GPIO_setPadConfig(PS4, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(PS4, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS4, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS4, GPIO_CORE_CPU1);
}
void PS5_init(){
	GPIO_setPadConfig(PS5, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(PS5, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PS5, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS5, GPIO_CORE_CPU1);
}
void OCP1_init(){
	GPIO_setPadConfig(OCP1, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(OCP1, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(OCP1, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(OCP1, GPIO_CORE_CPU1);
}
void OCP2_init(){
	GPIO_setPadConfig(OCP2, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(OCP2, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(OCP2, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(OCP2, GPIO_CORE_CPU1);
}
void OCP3_init(){
	GPIO_setPadConfig(OCP3, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(OCP3, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(OCP3, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(OCP3, GPIO_CORE_CPU1);
}
void OCP4_init(){
	GPIO_setPadConfig(OCP4, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(OCP4, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(OCP4, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(OCP4, GPIO_CORE_CPU1);
}
void PS2_init(){
	GPIO_setPadConfig(PS2, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(PS2, GPIO_QUAL_ASYNC);
	GPIO_setDirectionMode(PS2, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(PS2, GPIO_CORE_CPU1);
}
void CC_REF_PH1_init(){
	GPIO_setPadConfig(CC_REF_PH1, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(CC_REF_PH1, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(CC_REF_PH1, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(CC_REF_PH1, GPIO_CORE_CPU1);
}
void CC_REF_PH2_init(){
	GPIO_setPadConfig(CC_REF_PH2, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(CC_REF_PH2, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(CC_REF_PH2, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(CC_REF_PH2, GPIO_CORE_CPU1);
}
void CC_REF_PH3_init(){
	GPIO_setPadConfig(CC_REF_PH3, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(CC_REF_PH3, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(CC_REF_PH3, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(CC_REF_PH3, GPIO_CORE_CPU1);
}
void CC_REF_PH4_init(){
	GPIO_setPadConfig(CC_REF_PH4, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(CC_REF_PH4, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(CC_REF_PH4, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(CC_REF_PH4, GPIO_CORE_CPU1);
}
void RELAY_init(){
	GPIO_writePin(RELAY, 0);
	GPIO_setPadConfig(RELAY, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(RELAY, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(RELAY, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(RELAY, GPIO_CORE_CPU1);
}
void PFC_init(){
	GPIO_setPadConfig(PFC, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PFC, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(PFC, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(PFC, GPIO_CORE_CPU1);
}
void myGPIO0_init(){
	GPIO_setPadConfig(myGPIO0, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myGPIO0, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(myGPIO0, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(myGPIO0, GPIO_CORE_CPU1);
}

//*****************************************************************************
//
// I2C Configurations
//
//*****************************************************************************
void I2C_init(){
	myI2C0_init();
}

void myI2C0_init(){
	I2C_disableModule(myI2C0_BASE);
	I2C_initController(myI2C0_BASE, DEVICE_SYSCLK_FREQ, myI2C0_BITRATE, I2C_DUTYCYCLE_33);
	I2C_setConfig(myI2C0_BASE, I2C_CONTROLLER_SEND_MODE);
	I2C_disableLoopback(myI2C0_BASE);
	I2C_setOwnAddress(myI2C0_BASE, myI2C0_OWN_ADDRESS);
	I2C_setTargetAddress(myI2C0_BASE, myI2C0_TARGET_ADDRESS);
	I2C_setBitCount(myI2C0_BASE, I2C_BITCOUNT_1);
	I2C_setDataCount(myI2C0_BASE, 1);
	I2C_setAddressMode(myI2C0_BASE, I2C_ADDR_MODE_7BITS);
	I2C_enableFIFO(myI2C0_BASE);
	I2C_setFIFOInterruptLevel(myI2C0_BASE, I2C_FIFO_TXEMPTY, I2C_FIFO_RXEMPTY);
	I2C_setEmulationMode(myI2C0_BASE, I2C_EMULATION_STOP_SCL_LOW);
	I2C_enableModule(myI2C0_BASE);
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
// SCI Configurations
//
//*****************************************************************************
void SCI_init(){
	mySCI0_init();
}

void mySCI0_init(){
	SCI_clearInterruptStatus(mySCI0_BASE, SCI_INT_RXFF | SCI_INT_TXFF | SCI_INT_FE | SCI_INT_OE | SCI_INT_PE | SCI_INT_RXERR | SCI_INT_RXRDY_BRKDT | SCI_INT_TXRDY);
	SCI_clearOverflowStatus(mySCI0_BASE);
	SCI_resetTxFIFO(mySCI0_BASE);
	SCI_resetRxFIFO(mySCI0_BASE);
	SCI_resetChannels(mySCI0_BASE);
	SCI_setConfig(mySCI0_BASE, DEVICE_LSPCLK_FREQ, mySCI0_BAUDRATE, (SCI_CONFIG_WLEN_8|SCI_CONFIG_STOP_ONE|SCI_CONFIG_PAR_NONE));
	SCI_disableLoopback(mySCI0_BASE);
	SCI_performSoftwareReset(mySCI0_BASE);
	SCI_setFIFOInterruptLevel(mySCI0_BASE, SCI_FIFO_TX0, SCI_FIFO_RX0);
	SCI_enableFIFO(mySCI0_BASE);
	SCI_enableModule(mySCI0_BASE);
}

//*****************************************************************************
//
// SPI Configurations
//
//*****************************************************************************
void SPI_init(){
	mySPI0_init();
}

void mySPI0_init(){
	SPI_disableModule(mySPI0_BASE);
	SPI_setConfig(mySPI0_BASE, DEVICE_LSPCLK_FREQ, SPI_PROT_POL0PHA0,
				  SPI_MODE_PERIPHERAL, mySPI0_BITRATE, mySPI0_DATAWIDTH);
	SPI_setPTESignalPolarity(mySPI0_BASE, SPI_PTE_ACTIVE_LOW);
	SPI_enableFIFO(mySPI0_BASE);
	SPI_setFIFOInterruptLevel(mySPI0_BASE, SPI_FIFO_TXEMPTY, SPI_FIFO_RXEMPTY);
	SPI_disableLoopback(mySPI0_BASE);
	SPI_setEmulationMode(mySPI0_BASE, SPI_EMULATION_STOP_MIDWAY);
	SPI_enableModule(mySPI0_BASE);
}

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************
void SYNC_init(){
	SysCtl_setSyncOutputConfig(SYSCTL_SYNC_OUT_SRC_EPWM1SYNCOUT);
	//
	// SOCA
	//
	SysCtl_enableExtADCSOCSource(0);
	//
	// SOCB
	//
	SysCtl_enableExtADCSOCSource(0);
}

//*****************************************************************************
//
// UART Configurations
//
//*****************************************************************************
void UART_init(){
    myUART0_init();
    myUART1_init();
}

void myUART0_init(){
        //
        // Set myUART0 baud rate and configuration
        //
        UART_setConfig(
            myUART0_BASE, // base address
            200000000, // UART source clock
            115200, // baud rate
            (UART_CONFIG_WLEN_8 | // word length
             UART_CONFIG_STOP_ONE) // stop bits
        );
        
        //
        // FIFO disable
        //
        UART_disableFIFO(myUART0_BASE);
        
        //
        // Configure interrupts
        //
        UART_clearInterruptStatus(myUART0_BASE, 0xFFFF);
        UART_enableInterrupt(myUART0_BASE,
            (UART_INT_RX |
             UART_INT_TX)
        );
            
        UART_disableLoopback(myUART0_BASE);
        
        //
        // Enable RX, TX, and the UART
        //
        UART_enableModuleNonFIFO(myUART0_BASE);

}
void myUART1_init(){
        //
        // Set myUART1 baud rate and configuration
        //
        UART_setConfig(
            myUART1_BASE, // base address
            200000000, // UART source clock
            115200, // baud rate
            (UART_CONFIG_WLEN_8 | // word length
             UART_CONFIG_STOP_ONE) // stop bits
        );
        
        //
        // FIFO disable
        //
        UART_disableFIFO(myUART1_BASE);
        
        //
        // Configure interrupts
        //
        UART_clearInterruptStatus(myUART1_BASE, 0xFFFF);
        UART_enableInterrupt(myUART1_BASE,
            (UART_INT_RX |
             UART_INT_TX)
        );
            
        UART_disableLoopback(myUART1_BASE);
        
        //
        // Enable RX, TX, and the UART
        //
        UART_enableModuleNonFIFO(myUART1_BASE);

}

