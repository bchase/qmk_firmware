#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DF(2), DF(3), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_UNDS, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, LT(2,KC_NO), DF(4), KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BSPC, KC_SPC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, KC_LCTL, LT(1,KC_NO), KC_LALT, KC_RALT, KC_ENT, KC_RCTL, KC_NO),
	[1] = LAYOUT(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS, KC_LSFT, KC_GRV, KC_NO, KC_NO, KC_GRV, KC_GRV, KC_ESC, KC_ENT, KC_EQL, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_RSFT, KC_NO, KC_LCTL, KC_NO, KC_LALT, KC_RALT, KC_NO, KC_RCTL, KC_NO),
	[2] = LAYOUT(KC_NO, KC_F12, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_LCTL, KC_F11, KC_LEFT, KC_DOWN, KC_RGHT, DF(0), KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_RSFT, KC_NO, KC_LCTL, KC_NO, KC_LALT, KC_RALT, KC_NO, KC_RCTL, KC_NO),
	[3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, DF(0), KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN1, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_NO, KC_NO),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), KC_NO, KC_NO, KC_DOT, KC_4, KC_5, KC_6, KC_PLUS, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_COMM, KC_1, KC_2, KC_3, KC_PEQL, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
