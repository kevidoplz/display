/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

#define MASTER_LEFT
#define SERIAL_USART_TX_PIN GP18
#define SERIAL_PIO_USE_PIO1

/* key matrix size */
#define MATRIX_ROWS 10

#define MATRIX_COLS 6

#define MATRIX_ROW_PINS {GP6, GP7, GP8, GP9, GP10}
#define MATRIX_COL_PINS {GP0, GP1, GP2, GP3, GP4, GP5}


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


#define DYNAMIC_KEYMAP_MACRO_COUNT 16


// LCD Configuration
#define LCD_RST_PIN GP26
#define LCD_CS_PIN GP17
#define LCD_DC_PIN GP27


#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP14
#define SPI_MOSI_PIN GP15
#define SPI_MISO_PIN GP20

#define QUANTUM_PAINTER_DEBUG TRUE
#define QUANTUM_PAINTER_SUPPORTS_256_PALETTE TRUE



