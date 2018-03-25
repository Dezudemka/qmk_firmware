#include "e6v2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP_ANSI(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,      KC_L,    KC_SCLN, KC_QUOT,       KC_ENT,
      KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_SLSH, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT,               KC_SPACE,                        KC_RALT, MO(1),   KC_MENU, KC_RCTL
      ),
  [1] = KEYMAP_ANSI(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
      RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR,   KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_PSLS, KC_HOME,   KC_PGUP, KC_LEFT, KC_RGHT,      KC_TRNS,
      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS,   KC_END,  KC_PGDN, KC_DOWN, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,               KC_MPLY,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),
};
