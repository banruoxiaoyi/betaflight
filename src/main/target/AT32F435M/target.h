/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "A435"

#define USBD_PRODUCT_STRING     "Betaflight AT32F435"

#ifndef AT32F435
#define AT32F435
#endif

#ifdef DEBUG
// Development aid - invalid inputs or other failures are tested and will sit in a while(true) loop
// so that you can go straight to the problem with the debugger
#define HANG_ON_ERRORS
#endif

#define USE_VIRTUAL_GYRO

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 3)

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_SPI_DMA_ENABLE_LATE

#define USE_EXTI
#define USE_GYRO_EXTI


#define USE_I2C
#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3

#define USE_USB_DETECT
#define USE_PERSISTENT_MSC_RTC
#define USE_VCP

#define UNIFIED_SERIAL_PORT_COUNT       1

#define USE_ADC

#define USE_PWM_OUTPUT

// Remove these undefines as support is added
//#undef USE_BEEPER
#undef USE_LED_STRIP
#undef USE_TRANSPONDER

// #undef USE_DSHOT
// #undef USE_DSHOT_TELEMETRY
// bitbang not implemented yet
#undef USE_DSHOT_BITBANG
// burst mode not implemented yet
#undef USE_DSHOT_DMAR


#undef USE_CAMERA_CONTROL
#undef USE_RX_PPM
#undef USE_RX_PWM
#undef USE_RX_SPI
#undef USE_RX_CC2500
#undef USE_RX_EXPRESSLRS
// #undef USE_SERIAL_4WAY_BLHELI_BOOTLOADER
#undef USE_SERIAL_4WAY_SK_BOOTLOADER

#define FLASH_PAGE_SIZE ((uint32_t)0x1000) // 4K sectors
