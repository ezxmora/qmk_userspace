// Copyright 2025 ezxmora (@ezxmora)
#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

RGB_MATRIX_EFFECT(MODULAR_REACTIVE)

#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static hsv_t MODULAR_REACTIVE_math(hsv_t hsv, uint16_t offset) {
    hsv.v = scale8(255 - offset, rgb_matrix_get_val());
    return hsv;
}

bool MODULAR_REACTIVE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    rgb_t rgb = rgb_matrix_hsv_to_rgb(rgb_matrix_get_hsv());

    effect_runner_reactive(params, &MODULAR_REACTIVE_math);
    for (uint16_t i = led_min; i < led_max; i++) {
#        ifdef ENABLE_RGB_MATRIX_UNDERGLOW_REACTIVE
        if (HAS_FLAGS(g_led_config.flags[i], LED_FLAG_UNDERGLOW)) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
#        elif defined(ENABLE_RGB_MATRIX_NUMPAD_REACTIVE)
        if (i <= 4) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
#        endif
    }

    return rgb_matrix_check_finished_leds(led_max);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif     // RGB_MATRIX_KEYREACTIVE_ENABLED
