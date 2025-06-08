// Copyright 2025 ezxmora (@ezxmora)
#include "layouts/60_arrow/ezxmora/keymap.c"
#include <rgb_matrix.h>
#include <color.h>

void keyboard_post_init_keymap(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_MODULAR_REACTIVE);
}

bool rgb_matrix_indicators_keymap(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(28, HSV_WHITE);
    }

    if (layer_state_is(_ADJUST)) {
#ifdef SOCD_ENABLE
        if (socd_cleaner_enabled) {
            rgb_matrix_set_color(42, RGB_WHITE);
        }
#endif

#ifdef BHOP_ENABLE
        if (bhop_enabled) {
            rgb_matrix_set_color(43, RGB_WHITE);
        }
#endif
    }

    return true;
}
