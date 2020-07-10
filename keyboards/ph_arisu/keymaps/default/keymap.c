#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_2, KC_4, KC_6, KC_8, KC_0, KC_EQL, KC_GRV,
        KC_1, KC_3, KC_5, KC_7, KC_9, KC_MINS, KC_BSLS,
        KC_TAB, KC_W, KC_R, KC_Y, KC_I, KC_P, KC_RBRC, KC_DEL,
        KC_Q, KC_E, KC_T, KC_U, KC_O, KC_LBRC, KC_BSPC,
        KC_LCTL, KC_S, KC_F, KC_H, KC_K, KC_SCLN, KC_ENT, KC_PGUP,
        KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT,
        KC_LSFT, KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, KC_PGDN,
        KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_LSFT, KC_UP,
        MO(1), KC_LALT, KC_SPC, KC_LEFT, KC_RGHT,
        KC_SPC, KC_SPC, KC_LALT, KC_DOWN
    ),
    [1] = LAYOUT(
        RESET, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};
