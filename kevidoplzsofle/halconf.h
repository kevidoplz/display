// Copyright 2018-2022 Nick Brassel (@tzarc)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define HAL_USE_SPI TRUE
// This enables interrupt-driven mode
#define SPI_USE_WAIT TRUE
#include_next <halconf.h>
