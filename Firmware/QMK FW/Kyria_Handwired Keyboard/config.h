#ifndef CONFIG_H
#define CONFIG_H

//#include "config_common.h"
#pragma once

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#include "hal.h"
#include "kb.h"

/*
 * Board identifier.
 */
#define BOARD_RP_PICO_RP2040
#define BOARD_NAME                  "Raspberry Pi Pico"

/*
 * MCU type.
 */
#define RP2040

#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61

/* configure split */
#define EE_HANDS

#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_RX_PIN GP0    // USART RX pin
#define SERIAL_USART_TX_PIN GP1     // USART TX pin
#define SERIAL_USART_PIN_SWAP      // Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 17

/* key matrix pins */
#define MATRIX_ROW_PINS	{GP3, GP4, GP5, GP6}
#define	MATRIX_COL_PINS	{GP12, GP13, GP14, GP15, GP26, GP27, GP28, GP29}

/* col2row r row2col */
#define	DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP16 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#endif