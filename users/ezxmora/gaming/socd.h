#pragma once
#include "../ezxmora.h"

enum socd_cleaner_resolution {
    // Disable SOCD filtering for this key pair.
    SOCD_CLEANER_OFF,
    // Last input priority with reactivation.
    SOCD_CLEANER_LAST,
    // Neutral resolution. When both keys are pressed, they cancel.
    SOCD_CLEANER_NEUTRAL,
    // Key 0 always wins.
    SOCD_CLEANER_0_WINS,
    // Key 1 always wins.
    SOCD_CLEANER_1_WINS,
    // Sentinel to count the number of resolution strategies.
    SOCD_CLEANER_NUM_RESOLUTIONS,
};

typedef struct {
    uint8_t keys[2];    // Basic keycodes for the two opposing keys.
    uint8_t resolution; // Resolution strategy.
    bool held[2];       // Tracks which keys are physically held.
} socd_cleaner_t;

bool process_socd_cleaner(uint16_t keycode, keyrecord_t* record, socd_cleaner_t* state);
