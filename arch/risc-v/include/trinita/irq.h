/****************************************************************************
 * arch/risc-v/include/trinita/irq.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_RISCV_INCLUDE_TRINITA_IRQ_H
#define __ARCH_RISCV_INCLUDE_TRINITA_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Map RISC-V exception code to NuttX IRQ */

#define TRINITA_IRQ_PERI_START     (RISCV_IRQ_ASYNC + 20)

/* Machine Global External Interrupt */

#define TRINITA_IRQ_GPIO0_A       (TRINITA_IRQ_PERI_START + 1)
#define TRINITA_IRQ_GPIO0_B       (TRINITA_IRQ_PERI_START + 2)
#define TRINITA_IRQ_GPIO0_C       (TRINITA_IRQ_PERI_START + 3)
#define TRINITA_IRQ_GPIO0_D       (TRINITA_IRQ_PERI_START + 4)
#define TRINITA_IRQ_GPIO0_E       (TRINITA_IRQ_PERI_START + 5)
#define TRINITA_IRQ_GPIO0_F       (TRINITA_IRQ_PERI_START + 6)
#define TRINITA_IRQ_GPIO0_X       (TRINITA_IRQ_PERI_START + 7)
#define TRINITA_IRQ_GPIO0_Y       (TRINITA_IRQ_PERI_START + 8)
#define TRINITA_IRQ_GPIO0_Z       (TRINITA_IRQ_PERI_START + 9)
#define TRINITA_IRQ_GPIO1_A       (TRINITA_IRQ_PERI_START + 10)
#define TRINITA_IRQ_GPIO1_B       (TRINITA_IRQ_PERI_START + 11)
#define TRINITA_IRQ_GPIO1_C       (TRINITA_IRQ_PERI_START + 12)
#define TRINITA_IRQ_GPIO1_D       (TRINITA_IRQ_PERI_START + 13)
#define TRINITA_IRQ_GPIO1_E       (TRINITA_IRQ_PERI_START + 14)
#define TRINITA_IRQ_GPIO1_F       (TRINITA_IRQ_PERI_START + 15)
#define TRINITA_IRQ_GPIO1_X       (TRINITA_IRQ_PERI_START + 16)
#define TRINITA_IRQ_GPIO1_Y       (TRINITA_IRQ_PERI_START + 17)
#define TRINITA_IRQ_GPIO1_Z       (TRINITA_IRQ_PERI_START + 18)
#define TRINITA_IRQ_ADC0          (TRINITA_IRQ_PERI_START + 19)
#define TRINITA_IRQ_ADC1          (TRINITA_IRQ_PERI_START + 20)
#define TRINITA_IRQ_ADC2          (TRINITA_IRQ_PERI_START + 21)
#define TRINITA_IRQ_ADC3          (TRINITA_IRQ_PERI_START + 22)
#define TRINITA_IRQ_ACMP_0        (TRINITA_IRQ_PERI_START + 23)
#define TRINITA_IRQ_ACMP_1        (TRINITA_IRQ_PERI_START + 24)
#define TRINITA_IRQ_ACMP_2        (TRINITA_IRQ_PERI_START + 25)
#define TRINITA_IRQ_ACMP_3        (TRINITA_IRQ_PERI_START + 26)
#define TRINITA_IRQ_SPI0          (TRINITA_IRQ_PERI_START + 27)
#define TRINITA_IRQ_SPI1          (TRINITA_IRQ_PERI_START + 28)
#define TRINITA_IRQ_SPI2          (TRINITA_IRQ_PERI_START + 29)
#define TRINITA_IRQ_SPI3          (TRINITA_IRQ_PERI_START + 30)
#define TRINITA_IRQ_UART0         (TRINITA_IRQ_PERI_START + 31)
#define TRINITA_IRQ_UART1         (TRINITA_IRQ_PERI_START + 32)
#define TRINITA_IRQ_UART2         (TRINITA_IRQ_PERI_START + 33)
#define TRINITA_IRQ_UART3         (TRINITA_IRQ_PERI_START + 34)
#define TRINITA_IRQ_UART4         (TRINITA_IRQ_PERI_START + 35)
#define TRINITA_IRQ_UART5         (TRINITA_IRQ_PERI_START + 36)
#define TRINITA_IRQ_UART6         (TRINITA_IRQ_PERI_START + 37)
#define TRINITA_IRQ_UART7         (TRINITA_IRQ_PERI_START + 38)
#define TRINITA_IRQ_UART8         (TRINITA_IRQ_PERI_START + 39)
#define TRINITA_IRQ_UART9         (TRINITA_IRQ_PERI_START + 40)
#define TRINITA_IRQ_UART10        (TRINITA_IRQ_PERI_START + 41)
#define TRINITA_IRQ_UART11        (TRINITA_IRQ_PERI_START + 42)
#define TRINITA_IRQ_UART12        (TRINITA_IRQ_PERI_START + 43)
#define TRINITA_IRQ_UART13        (TRINITA_IRQ_PERI_START + 44)
#define TRINITA_IRQ_UART14        (TRINITA_IRQ_PERI_START + 45)
#define TRINITA_IRQ_UART15        (TRINITA_IRQ_PERI_START + 46)
#define TRINITA_IRQ_CAN0          (TRINITA_IRQ_PERI_START + 47)
#define TRINITA_IRQ_CAN1          (TRINITA_IRQ_PERI_START + 48)
#define TRINITA_IRQ_CAN2          (TRINITA_IRQ_PERI_START + 49)
#define TRINITA_IRQ_CAN3          (TRINITA_IRQ_PERI_START + 50)
#define TRINITA_IRQ_PTPC          (TRINITA_IRQ_PERI_START + 51)
#define TRINITA_IRQ_WDG0          (TRINITA_IRQ_PERI_START + 52)
#define TRINITA_IRQ_WDG1          (TRINITA_IRQ_PERI_START + 53)
#define TRINITA_IRQ_WDG2          (TRINITA_IRQ_PERI_START + 54)
#define TRINITA_IRQ_WDG3          (TRINITA_IRQ_PERI_START + 55)
#define TRINITA_IRQ_MBX0A         (TRINITA_IRQ_PERI_START + 56)
#define TRINITA_IRQ_MBX0B         (TRINITA_IRQ_PERI_START + 57)
#define TRINITA_IRQ_MBX1A         (TRINITA_IRQ_PERI_START + 58)
#define TRINITA_IRQ_MBX1B         (TRINITA_IRQ_PERI_START + 59)
#define TRINITA_IRQ_GPTMR0        (TRINITA_IRQ_PERI_START + 60)
#define TRINITA_IRQ_GPTMR1        (TRINITA_IRQ_PERI_START + 61)
#define TRINITA_IRQ_GPTMR2        (TRINITA_IRQ_PERI_START + 62)
#define TRINITA_IRQ_GPTMR3        (TRINITA_IRQ_PERI_START + 63)
#define TRINITA_IRQ_GPTMR4        (TRINITA_IRQ_PERI_START + 64)
#define TRINITA_IRQ_GPTMR5        (TRINITA_IRQ_PERI_START + 65)
#define TRINITA_IRQ_GPTMR6        (TRINITA_IRQ_PERI_START + 66)
#define TRINITA_IRQ_GPTMR7        (TRINITA_IRQ_PERI_START + 67)
#define TRINITA_IRQ_I2C0          (TRINITA_IRQ_PERI_START + 68)
#define TRINITA_IRQ_I2C1          (TRINITA_IRQ_PERI_START + 69)
#define TRINITA_IRQ_I2C2          (TRINITA_IRQ_PERI_START + 70)
#define TRINITA_IRQ_I2C3          (TRINITA_IRQ_PERI_START + 71)
#define TRINITA_IRQ_PWM0          (TRINITA_IRQ_PERI_START + 72)
#define TRINITA_IRQ_HALL0         (TRINITA_IRQ_PERI_START + 73)
#define TRINITA_IRQ_QEI0          (TRINITA_IRQ_PERI_START + 74)
#define TRINITA_IRQ_PWM1          (TRINITA_IRQ_PERI_START + 75)
#define TRINITA_IRQ_HALL1         (TRINITA_IRQ_PERI_START + 76)
#define TRINITA_IRQ_QEI1          (TRINITA_IRQ_PERI_START + 77)
#define TRINITA_IRQ_PWM2          (TRINITA_IRQ_PERI_START + 78)
#define TRINITA_IRQ_HALL2         (TRINITA_IRQ_PERI_START + 79)
#define TRINITA_IRQ_QEI2          (TRINITA_IRQ_PERI_START + 80)
#define TRINITA_IRQ_PWM3          (TRINITA_IRQ_PERI_START + 81)
#define TRINITA_IRQ_HALL3         (TRINITA_IRQ_PERI_START + 82)
#define TRINITA_IRQ_QEI3          (TRINITA_IRQ_PERI_START + 83)
#define TRINITA_IRQ_SDP           (TRINITA_IRQ_PERI_START + 84)
#define TRINITA_IRQ_XPI0          (TRINITA_IRQ_PERI_START + 85)
#define TRINITA_IRQ_XPI1          (TRINITA_IRQ_PERI_START + 86)
#define TRINITA_IRQ_XDMA          (TRINITA_IRQ_PERI_START + 87)
#define TRINITA_IRQ_HDMA          (TRINITA_IRQ_PERI_START + 88)
#define TRINITA_IRQ_FEMC          (TRINITA_IRQ_PERI_START + 89)
#define TRINITA_IRQ_RNG           (TRINITA_IRQ_PERI_START + 90)
#define TRINITA_IRQ_I2S0          (TRINITA_IRQ_PERI_START + 91)
#define TRINITA_IRQ_I2S1          (TRINITA_IRQ_PERI_START + 92)
#define TRINITA_IRQ_I2S2          (TRINITA_IRQ_PERI_START + 93)
#define TRINITA_IRQ_I2S3          (TRINITA_IRQ_PERI_START + 94)
#define TRINITA_IRQ_DAO           (TRINITA_IRQ_PERI_START + 95)
#define TRINITA_IRQ_PDM           (TRINITA_IRQ_PERI_START + 96)
#define TRINITA_IRQ_CAM0          (TRINITA_IRQ_PERI_START + 97)
#define TRINITA_IRQ_CAM1          (TRINITA_IRQ_PERI_START + 98)
#define TRINITA_IRQ_LCDC_D0       (TRINITA_IRQ_PERI_START + 99)
#define TRINITA_IRQ_LCDC_D1       (TRINITA_IRQ_PERI_START + 100)
#define TRINITA_IRQ_PDMA_D0       (TRINITA_IRQ_PERI_START + 101)
#define TRINITA_IRQ_PDMA_D1       (TRINITA_IRQ_PERI_START + 102)
#define TRINITA_IRQ_JPEG          (TRINITA_IRQ_PERI_START + 103)
#define TRINITA_IRQ_NTMR0         (TRINITA_IRQ_PERI_START + 104)
#define TRINITA_IRQ_NTMR1         (TRINITA_IRQ_PERI_START + 105)
#define TRINITA_IRQ_USB0          (TRINITA_IRQ_PERI_START + 106)
#define TRINITA_IRQ_USB1          (TRINITA_IRQ_PERI_START + 107)
#define TRINITA_IRQ_ENET0         (TRINITA_IRQ_PERI_START + 108)
#define TRINITA_IRQ_ENET1         (TRINITA_IRQ_PERI_START + 109)
#define TRINITA_IRQ_SDXC0         (TRINITA_IRQ_PERI_START + 110)
#define TRINITA_IRQ_SDXC1         (TRINITA_IRQ_PERI_START + 111)
#define TRINITA_IRQ_PSEC          (TRINITA_IRQ_PERI_START + 112)
#define TRINITA_IRQ_PGPIO         (TRINITA_IRQ_PERI_START + 113)
#define TRINITA_IRQ_PWDG          (TRINITA_IRQ_PERI_START + 114)
#define TRINITA_IRQ_PTMR          (TRINITA_IRQ_PERI_START + 115)
#define TRINITA_IRQ_PUART         (TRINITA_IRQ_PERI_START + 116)
#define TRINITA_IRQ_VAD           (TRINITA_IRQ_PERI_START + 117)
#define TRINITA_IRQ_FUSE          (TRINITA_IRQ_PERI_START + 118)
#define TRINITA_IRQ_SECMON        (TRINITA_IRQ_PERI_START + 119)
#define TRINITA_IRQ_RTC           (TRINITA_IRQ_PERI_START + 120)
#define TRINITA_IRQ_BUTN          (TRINITA_IRQ_PERI_START + 121)
#define TRINITA_IRQ_BGPIO         (TRINITA_IRQ_PERI_START + 122)
#define TRINITA_IRQ_BVIO          (TRINITA_IRQ_PERI_START + 123)
#define TRINITA_IRQ_BROWNOUT      (TRINITA_IRQ_PERI_START + 124)
#define TRINITA_IRQ_SYSCTL        (TRINITA_IRQ_PERI_START + 125)
#define TRINITA_IRQ_DEBUG_0       (TRINITA_IRQ_PERI_START + 126)
#define TRINITA_IRQ_DEBUG_1       (TRINITA_IRQ_PERI_START + 127)

/* Total number of IRQs */

#define NR_IRQS              (TRINITA_IRQ_PERI_START + 127)

#endif /* __ARCH_RISCV_INCLUDE_TRINITA_IRQ_H */
