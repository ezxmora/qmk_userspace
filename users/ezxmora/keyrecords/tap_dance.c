// Copyright 2025 ezxmora (@ezxmora)
#include "tap_dance.h"

void dance_shift_toggle(tap_dance_state_t *state, void *user_data) {
    static bool isShiftToggled = false;

    if (state->count == 1) {
        tap_code(KC_LSFT);
        isShiftToggled = !isShiftToggled;
        reset_tap_dance(state);
    } else if (state->count == 3) {
        if (isShiftToggled) {
            register_code(KC_LSFT);
        } else {
            unregister_code(KC_LSFT);
        }
        reset_tap_dance(state);
    }
}

// clang-format off
tap_dance_action_t tap_dance_actions[] = {
    [TD_TRIPLE_SHIFT_TOGGLE] = ACTION_TAP_DANCE_FN(dance_shift_toggle)
};
// clang-format on
