#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE = 0,
    _SECOND
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(                   DF(_SECOND),
                        KC_F13, KC_F14, KC_F15,
                        KC_F16, KC_F17, KC_F18
    ),
    [_SECOND] = LAYOUT(                     DF(_BASE),
                          KC_PAST, KC_PMNS, KC_PPLS,
                          KC_PSLS, KC_PENT, KC_NO
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (layer_state_is(_BASE)) {
            if (clockwise) {
                tap_code(KC_WH_U);
            } else {
                tap_code(KC_WH_D);
            }
        } else if (layer_state_is(_SECOND)) {
            if (clockwise) {
                tap_code(KC_WH_R);
            } else {
                tap_code(KC_WH_L);
            }
        }
    }
    return false;
}