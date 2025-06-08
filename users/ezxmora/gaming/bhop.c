// Copyright 2025 ezxmora (@ezxmora)
#include <deferred_exec.h>
#include "../ezxmora.h"

bool bhop_enabled = false;
#define BHOP_MAX_DELAY 55
#define BHOP_MIN_DELAY 50

uint32_t generate_random_delay(uint32_t min, uint32_t max) {
    return min + (rand() % (max - min + 1));
}

uint32_t bhop_callback(uint32_t trigger_time, void* cb_arg) {
    tap_code(KC_SPACE);
    return generate_random_delay(BHOP_MIN_DELAY, BHOP_MAX_DELAY);
}

bool process_record_bhop(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case KC_TOGGLE_BHOP:
            if (record->event.pressed) {
                bhop_enabled = !bhop_enabled;
            }

            return false;

        case KC_SPACE:

            static deferred_token token = INVALID_DEFERRED_TOKEN;

            if (!record->event.pressed) {
                cancel_deferred_exec(token);
                token = INVALID_DEFERRED_TOKEN;
            } else if (!token && bhop_enabled) {
                token = defer_exec(49, bhop_callback, NULL);
            }
    }

    return true;
}
