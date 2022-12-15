// Copyright 2022 Kevin Do (@kevidoplz)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "kevidoplzsofle.h"
#include "color.h"
#include "graphics.h"
#include "qp.h" 

#if defined(QUANTUM_PAINTER_ENABLE)
painter_device_t st7789;
#endif // QUANTUM_PAINTER_ENABLE

void keyboard_post_init_kb(void) {
    debug_enable = true;

#if defined(QUANTUM_PAINTER_ENABLE)
    wait_ms(150); //Let screens draw some power


    st7789 = qp_st7789_make_spi_device(240, 320, LCD_CS_PIN, LCD_DC_PIN, LCD_RST_PIN, 16, 3);
                qp_set_viewport_offsets(st7789, 0, 0);
                qp_init(st7789, QP_ROTATION_0);
                qp_rect(st7789, 0, 0, 240, 240, HSV_BLUE, true);
             #endif
   
}


    

    
