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
// ANALOG -> myANALOGPinMux0 Pinmux
//

//
// CANA -> myCAN0 Pinmux
//
//
// CANA_RX - GPIO Settings
//
#define GPIO_PIN_CANA_RX 58
#define myCAN0_CANRX_GPIO 58
#define myCAN0_CANRX_PIN_CONFIG GPIO_58_CANA_RX
//
// CANA_TX - GPIO Settings
//
#define GPIO_PIN_CANA_TX 59
#define myCAN0_CANTX_GPIO 59
#define myCAN0_CANTX_PIN_CONFIG GPIO_59_CANA_TX

//
// EPWM1 -> myEPWM0 Pinmux
//
//
// EPWM1_A - GPIO Settings
//
#define GPIO_PIN_EPWM1_A 0
#define myEPWM0_EPWMA_GPIO 0
#define myEPWM0_EPWMA_PIN_CONFIG GPIO_0_EPWM1_A
//
// EPWM1_B - GPIO Settings
//
#define GPIO_PIN_EPWM1_B 1
#define myEPWM0_EPWMB_GPIO 1
#define myEPWM0_EPWMB_PIN_CONFIG GPIO_1_EPWM1_B

//
// EPWM2 -> myEPWM1 Pinmux
//
//
// EPWM2_A - GPIO Settings
//
#define GPIO_PIN_EPWM2_A 2
#define myEPWM1_EPWMA_GPIO 2
#define myEPWM1_EPWMA_PIN_CONFIG GPIO_2_EPWM2_A
//
// EPWM2_B - GPIO Settings
//
#define GPIO_PIN_EPWM2_B 3
#define myEPWM1_EPWMB_GPIO 3
#define myEPWM1_EPWMB_PIN_CONFIG GPIO_3_EPWM2_B

//
// EPWM3 -> myEPWM2 Pinmux
//
//
// EPWM3_A - GPIO Settings
//
#define GPIO_PIN_EPWM3_A 4
#define myEPWM2_EPWMA_GPIO 4
#define myEPWM2_EPWMA_PIN_CONFIG GPIO_4_EPWM3_A
//
// EPWM3_B - GPIO Settings
//
#define GPIO_PIN_EPWM3_B 60
#define myEPWM2_EPWMB_GPIO 60
#define myEPWM2_EPWMB_PIN_CONFIG GPIO_60_EPWM3_B

//
// EPWM4 -> myEPWM3 Pinmux
//
//
// EPWM4_A - GPIO Settings
//
#define GPIO_PIN_EPWM4_A 46
#define myEPWM3_EPWMA_GPIO 46
#define myEPWM3_EPWMA_PIN_CONFIG GPIO_46_EPWM4_A
//
// EPWM4_B - GPIO Settings
//
#define GPIO_PIN_EPWM4_B 47
#define myEPWM3_EPWMB_GPIO 47
#define myEPWM3_EPWMB_PIN_CONFIG GPIO_47_EPWM4_B
//
// GPIO34 - GPIO Settings
//
#define LED_GPIO_GPIO_PIN_CONFIG GPIO_34_GPIO34
//
// GPIO11 - GPIO Settings
//
#define PS1_GPIO_PIN_CONFIG GPIO_11_GPIO11
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
//
// GPIO84 - GPIO Settings
//
#define OCP1_GPIO_PIN_CONFIG GPIO_84_GPIO84
//
// GPIO85 - GPIO Settings
//
#define OCP2_GPIO_PIN_CONFIG GPIO_85_GPIO85
//
// GPIO86 - GPIO Settings
//
#define OCP3_GPIO_PIN_CONFIG GPIO_86_GPIO86
//
// GPIO87 - GPIO Settings
//
#define OCP4_GPIO_PIN_CONFIG GPIO_87_GPIO87
//
// GPIO12 - GPIO Settings
//
#define PS2_GPIO_PIN_CONFIG GPIO_12_GPIO12
//
// GPIO61 - GPIO Settings
//
#define CC_REF_PH1_GPIO_PIN_CONFIG GPIO_61_GPIO61
//
// GPIO62 - GPIO Settings
//
#define CC_REF_PH2_GPIO_PIN_CONFIG GPIO_62_GPIO62
//
// GPIO63 - GPIO Settings
//
#define CC_REF_PH3_GPIO_PIN_CONFIG GPIO_63_GPIO63
//
// GPIO64 - GPIO Settings
//
#define CC_REF_PH4_GPIO_PIN_CONFIG GPIO_64_GPIO64
//
// GPIO100 - GPIO Settings
//
#define RELAY_GPIO_PIN_CONFIG GPIO_100_GPIO100
//
// GPIO35 - GPIO Settings
//
#define PFC_GPIO_PIN_CONFIG GPIO_35_GPIO35
//
// GPIO222 - GPIO Settings
//
#define myGPIO0_GPIO_PIN_CONFIG GPIO_222_GPIO222

//
// I2CA -> myI2C0 Pinmux
//
//
// I2CA_SDA - GPIO Settings
//
#define GPIO_PIN_I2CA_SDA 42
#define myI2C0_I2CSDA_GPIO 42
#define myI2C0_I2CSDA_PIN_CONFIG GPIO_42_I2CA_SDA
//
// I2CA_SCL - GPIO Settings
//
#define GPIO_PIN_I2CA_SCL 43
#define myI2C0_I2CSCL_GPIO 43
#define myI2C0_I2CSCL_PIN_CONFIG GPIO_43_I2CA_SCL

//
// SCIB -> mySCI0 Pinmux
//
//
// SCIB_RX - GPIO Settings
//
#define GPIO_PIN_SCIB_RX 221
#define mySCI0_SCIRX_GPIO 221
#define mySCI0_SCIRX_PIN_CONFIG GPIO_221_SCIB_RX
//
// SCIB_TX - GPIO Settings
//
#define GPIO_PIN_SCIB_TX 10
#define mySCI0_SCITX_GPIO 10
#define mySCI0_SCITX_PIN_CONFIG GPIO_10_SCIB_TX

//
// SPID -> mySPI0 Pinmux
//
//
// SPID_PICO - GPIO Settings
//
#define GPIO_PIN_SPID_PICO 91
#define mySPI0_SPIPICO_GPIO 91
#define mySPI0_SPIPICO_PIN_CONFIG GPIO_91_SPID_PICO
//
// SPID_POCI - GPIO Settings
//
#define GPIO_PIN_SPID_POCI 92
#define mySPI0_SPIPOCI_GPIO 92
#define mySPI0_SPIPOCI_PIN_CONFIG GPIO_92_SPID_POCI
//
// SPID_CLK - GPIO Settings
//
#define GPIO_PIN_SPID_CLK 90
#define mySPI0_SPICLK_GPIO 90
#define mySPI0_SPICLK_PIN_CONFIG GPIO_90_SPID_CLK
//
// SPID_PTE - GPIO Settings
//
#define GPIO_PIN_SPID_PTE 89
#define mySPI0_SPIPTE_GPIO 89
#define mySPI0_SPIPTE_PIN_CONFIG GPIO_89_SPID_PTE

//
// UARTB -> myUART0 Pinmux
//
//
// UARTB_TX - GPIO Settings
//
#define GPIO_PIN_UARTB_TX 70
#define myUART0_UARTTX_GPIO 70
#define myUART0_UARTTX_PIN_CONFIG GPIO_70_UARTB_TX
//
// UARTB_RX - GPIO Settings
//
#define GPIO_PIN_UARTB_RX 71
#define myUART0_UARTRX_GPIO 71
#define myUART0_UARTRX_PIN_CONFIG GPIO_71_UARTB_RX

//
// UARTA -> myUART1 Pinmux
//
//
// UARTA_TX - GPIO Settings
//
#define GPIO_PIN_UARTA_TX 72
#define myUART1_UARTTX_GPIO 72
#define myUART1_UARTTX_PIN_CONFIG GPIO_72_UARTA_TX
//
// UARTA_RX - GPIO Settings
//
#define GPIO_PIN_UARTA_RX 73
#define myUART1_UARTRX_GPIO 73
#define myUART1_UARTRX_PIN_CONFIG GPIO_73_UARTA_RX

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
#define myADC0_BASE ADCA_BASE
#define myADC0_RESULT_BASE ADCARESULT_BASE
#define myADC0_SOC0 ADC_SOC_NUMBER0
#define myADC0_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC0_SAMPLE_WINDOW_SOC0 75
#define myADC0_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC0 ADC_CH_ADCIN1
#define myADC0_SOC1 ADC_SOC_NUMBER1
#define myADC0_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC0_SAMPLE_WINDOW_SOC1 75
#define myADC0_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC1 ADC_CH_ADCIN2
#define myADC0_SOC2 ADC_SOC_NUMBER2
#define myADC0_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC0_SAMPLE_WINDOW_SOC2 75
#define myADC0_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC2 ADC_CH_ADCIN3
#define myADC0_SOC3 ADC_SOC_NUMBER3
#define myADC0_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC0_SAMPLE_WINDOW_SOC3 75
#define myADC0_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC3 ADC_CH_ADCIN4
#define myADC0_SOC4 ADC_SOC_NUMBER4
#define myADC0_FORCE_SOC4 ADC_FORCE_SOC4
#define myADC0_SAMPLE_WINDOW_SOC4 75
#define myADC0_TRIGGER_SOURCE_SOC4 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC4 ADC_CH_ADCIN5
#define myADC0_SOC5 ADC_SOC_NUMBER5
#define myADC0_FORCE_SOC5 ADC_FORCE_SOC5
#define myADC0_SAMPLE_WINDOW_SOC5 75
#define myADC0_TRIGGER_SOURCE_SOC5 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC5 ADC_CH_ADCIN6
#define myADC0_SOC6 ADC_SOC_NUMBER6
#define myADC0_FORCE_SOC6 ADC_FORCE_SOC6
#define myADC0_SAMPLE_WINDOW_SOC6 75
#define myADC0_TRIGGER_SOURCE_SOC6 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC6 ADC_CH_ADCIN10
#define myADC0_SOC7 ADC_SOC_NUMBER7
#define myADC0_FORCE_SOC7 ADC_FORCE_SOC7
#define myADC0_SAMPLE_WINDOW_SOC7 75
#define myADC0_TRIGGER_SOURCE_SOC7 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC7 ADC_CH_ADCIN11
void myADC0_init();

#define myADC1_BASE ADCB_BASE
#define myADC1_RESULT_BASE ADCBRESULT_BASE
#define myADC1_SOC0 ADC_SOC_NUMBER0
#define myADC1_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC1_SAMPLE_WINDOW_SOC0 75
#define myADC1_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC0 ADC_CH_ADCIN0
#define myADC1_SOC1 ADC_SOC_NUMBER1
#define myADC1_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC1_SAMPLE_WINDOW_SOC1 75
#define myADC1_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC1 ADC_CH_ADCIN2
#define myADC1_SOC2 ADC_SOC_NUMBER2
#define myADC1_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC1_SAMPLE_WINDOW_SOC2 75
#define myADC1_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC2 ADC_CH_ADCIN3
#define myADC1_SOC3 ADC_SOC_NUMBER3
#define myADC1_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC1_SAMPLE_WINDOW_SOC3 75
#define myADC1_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC3 ADC_CH_ADCIN6
#define myADC1_SOC4 ADC_SOC_NUMBER4
#define myADC1_FORCE_SOC4 ADC_FORCE_SOC4
#define myADC1_SAMPLE_WINDOW_SOC4 75
#define myADC1_TRIGGER_SOURCE_SOC4 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC4 ADC_CH_ADCIN7
void myADC1_init();

#define myADC2_BASE ADCC_BASE
#define myADC2_RESULT_BASE ADCCRESULT_BASE
#define myADC2_SOC0 ADC_SOC_NUMBER0
#define myADC2_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC2_SAMPLE_WINDOW_SOC0 325
#define myADC2_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC0 ADC_CH_ADCIN0_ADCIN1
#define myADC2_SOC1 ADC_SOC_NUMBER1
#define myADC2_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC2_SAMPLE_WINDOW_SOC1 325
#define myADC2_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC1 ADC_CH_ADCIN2_ADCIN3
#define myADC2_SOC2 ADC_SOC_NUMBER2
#define myADC2_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC2_SAMPLE_WINDOW_SOC2 325
#define myADC2_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC2 ADC_CH_ADCIN4_ADCIN5
#define myADC2_SOC3 ADC_SOC_NUMBER3
#define myADC2_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC2_SAMPLE_WINDOW_SOC3 325
#define myADC2_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC3 ADC_CH_ADCIN14_ADCIN15
void myADC2_init();


//*****************************************************************************
//
// ASYSCTL Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// CAN Configurations
//
//*****************************************************************************
#define myCAN0_BASE CANA_BASE

void myCAN0_init();


//*****************************************************************************
//
// DAC Configurations
//
//*****************************************************************************
#define myDAC0_BASE DACA_BASE
void myDAC0_init();
#define myDAC1_BASE DACC_BASE
void myDAC1_init();

//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
#define myEPWM0_BASE EPWM1_BASE
#define myEPWM0_TBPRD 10000
#define myEPWM0_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define myEPWM0_TBPHS 0
#define myEPWM0_CMPA 5000
#define myEPWM0_CMPB 5000
#define myEPWM0_CMPC 0
#define myEPWM0_CMPD 0
#define myEPWM0_DBRED 0
#define myEPWM0_DBFED 0
#define myEPWM0_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM0_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM0_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define myEPWM1_BASE EPWM2_BASE
#define myEPWM1_TBPRD 10000
#define myEPWM1_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define myEPWM1_TBPHS 0
#define myEPWM1_CMPA 5000
#define myEPWM1_CMPB 5000
#define myEPWM1_CMPC 0
#define myEPWM1_CMPD 0
#define myEPWM1_DBRED 0
#define myEPWM1_DBFED 0
#define myEPWM1_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM1_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM1_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define myEPWM2_BASE EPWM3_BASE
#define myEPWM2_TBPRD 10000
#define myEPWM2_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define myEPWM2_TBPHS 0
#define myEPWM2_CMPA 5000
#define myEPWM2_CMPB 5000
#define myEPWM2_CMPC 0
#define myEPWM2_CMPD 0
#define myEPWM2_DBRED 0
#define myEPWM2_DBFED 0
#define myEPWM2_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM2_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM2_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define myEPWM3_BASE EPWM4_BASE
#define myEPWM3_TBPRD 10000
#define myEPWM3_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define myEPWM3_TBPHS 0
#define myEPWM3_CMPA 5000
#define myEPWM3_CMPB 5000
#define myEPWM3_CMPC 0
#define myEPWM3_CMPD 0
#define myEPWM3_DBRED 0
#define myEPWM3_DBFED 0
#define myEPWM3_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM3_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM3_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
#define LED_GPIO 34
void LED_GPIO_init();
#define PS1 11
void PS1_init();
#define PS3 13
void PS3_init();
#define PS4 14
void PS4_init();
#define PS5 15
void PS5_init();
#define OCP1 84
void OCP1_init();
#define OCP2 85
void OCP2_init();
#define OCP3 86
void OCP3_init();
#define OCP4 87
void OCP4_init();
#define PS2 12
void PS2_init();
#define CC_REF_PH1 61
void CC_REF_PH1_init();
#define CC_REF_PH2 62
void CC_REF_PH2_init();
#define CC_REF_PH3 63
void CC_REF_PH3_init();
#define CC_REF_PH4 64
void CC_REF_PH4_init();
#define RELAY 100
void RELAY_init();
#define PFC 35
void PFC_init();
#define myGPIO0 222
void myGPIO0_init();

//*****************************************************************************
//
// I2C Configurations
//
//*****************************************************************************
#define myI2C0_BASE I2CA_BASE
#define myI2C0_BITRATE 400000
#define myI2C0_TARGET_ADDRESS 0
#define myI2C0_OWN_ADDRESS 0
#define myI2C0_MODULE_CLOCK_FREQUENCY 10000000
void myI2C0_init();

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
// SCI Configurations
//
//*****************************************************************************
#define mySCI0_BASE SCIB_BASE
#define mySCI0_BAUDRATE 115200
#define mySCI0_CONFIG_WLEN SCI_CONFIG_WLEN_8
#define mySCI0_CONFIG_STOP SCI_CONFIG_STOP_ONE
#define mySCI0_CONFIG_PAR SCI_CONFIG_PAR_NONE
#define mySCI0_FIFO_TX_LVL SCI_FIFO_TX0
#define mySCI0_FIFO_RX_LVL SCI_FIFO_RX0
void mySCI0_init();

//*****************************************************************************
//
// SPI Configurations
//
//*****************************************************************************
#define mySPI0_BASE SPID_BASE
#define mySPI0_BITRATE 1000000
#define mySPI0_DATAWIDTH 16
void mySPI0_init();

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// UART Configurations
//
//*****************************************************************************
//
// myUART0 Configuration
//
#define myUART0_BASE UARTB_BASE
#define myUART0_BAUDRATE 115200
#define myUART0_CONFIG_WLEN UART_CONFIG_WLEN_8
#define myUART0_CONFIG_STP2 UART_CONFIG_STOP_ONE
#define myUART0_CONFIG_EPS UART_CONFIG_PAR_ODD
#define myUART0_CONFIG_SPS 0


void    myUART0_init();
//
// myUART1 Configuration
//
#define myUART1_BASE UARTA_BASE
#define myUART1_BAUDRATE 115200
#define myUART1_CONFIG_WLEN UART_CONFIG_WLEN_8
#define myUART1_CONFIG_STP2 UART_CONFIG_STOP_ONE
#define myUART1_CONFIG_EPS UART_CONFIG_PAR_ODD
#define myUART1_CONFIG_SPS 0


void    myUART1_init();

//*****************************************************************************
//
// Board Configurations
//
//*****************************************************************************
void	Board_init();
void	ADC_init();
void	ASYSCTL_init();
void	CAN_init();
void	DAC_init();
void	EPWM_init();
void	GPIO_init();
void	I2C_init();
void	INPUTXBAR_init();
void	SCI_init();
void	SPI_init();
void	SYNC_init();
void	UART_init();
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
