// Copyright 2018-2022 Nick Brassel (@tzarc)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include_next <mcuconf.h>

// Used for split comms
#undef RP_SPI_USE_SPI0 
#define RP_SPI_USE_SPI0 TRUE

