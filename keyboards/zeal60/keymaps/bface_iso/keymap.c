// b.face ISO layout for Zeal60
// drk

#include "zeal60.h"
#include "zeal_backlight.h"

// macro defines
#define BRKO 0
#define BRKC 1
#define ARRO 2
#define ARRC 3
#define FUCO 4
#define FUCC 5
#define M_BRKO M(BRKO)
#define M_BRKC M(BRKC)
#define M_ARRO M(ARRO)
#define M_ARRC M(ARRC)
#define M_FUCO M(FUCO)
#define M_FUCC M(FUCC)
#define TD_FNCL TD(TD_LAY1_CAPS)

//Tap Dance Declarations
enum {
  TD_LAY1_CAPS = 0
};

// [0,13] is either left key of split backspace (e.g. HHKB \| key) or 2U backspace
// [1,13] is either backslash or ISO Enter
// [2,12] is either ANSI Enter or key left of ISO Enter
// [2,13] is right key of split backspace (e.g. HHKB `~ key)
// [3,1] is right key of split left-shift (e.g ISO key)
// [3,13] is right key of split right-shift (e.g. HHKB Fn key)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
// [0] = {
// 	{KC_ESC,         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC},
// 	{KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT },
// 	{LT(1,KC_CAPS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_GJ,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_NO  },
// 	{KC_LSFT,        KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, FN_MO23},
// 	{KC_LCTL,        KC_LGUI, KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_RALT, FN_MO13, FN_MO23, KC_RCTL}
// },
[0] = {
	{KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC},
	{KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT },
	{MO(1),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_NO  },
	{KC_LSFT,   KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TT(3)  },
	{KC_LCTL,   KC_LGUI, KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_RALT, FN_MO13, FN_MO23, KC_RCTL}
},

// Fn1 Layer
[1] = {
	{KC_GRV,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL },
	{KC_CAPSLOCK,  KC_TRNS, KC_TRNS, M_ARRO,  M_ARRC,  KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_INS,  KC_PAUS, KC_TRNS},
	{KC_TRNS,      KC_TRNS, KC_TRNS, M_BRKO,  M_BRKC,  KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS,      KC_TRNS, KC_TRNS, M_FUCO,  M_FUCC,  KC_TRNS, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},

// Fn2 Layer
[2] = {
	{KC_TRNS, KC_MAIL, KC_CALC, KC_MYCM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_VOLU, KC_MSTP, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_VOLD, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},

// Fn3 Layer (zeal60 Configuration)
[3] = {
	{KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
}

};


/*bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  uint8_t layer;
  switch (keycode) {
    case FOO:
      if (record->event.pressed) {
        // Do something when pressed
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case KC_ENTER:
      // Play a tone when enter is pressed
      if (record->event.pressed) {
        PLAY_NOTE_ARRAY(tone_qwerty);
      }
      return true; // Let QMK send the enter press/release events
    default:
      layer = biton32(layer_state);
      if(layer == 1)
      {
        backlight_set_key_color( 2, 7, (HSV) { .h = 10, .s = 255, .v = 255} );
      }
      return true; 
  }
}*/

void dance_layer_caps(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count >= 2) {
    register_code(KC_CAPS);
    unregister_code(KC_CAPS);
    //reset_tap_dance (state);
  }
  else
  {
    layer_on(1);
  }
}

void dance_layer_caps_reset(qk_tap_dance_state_t *state, void *user_data)
{
  uint8_t layer = biton32(layer_state);
  if(layer == 1)
  {
    layer_off(1);
  }
}

//ACTION_TAP_DANCE_FN_ADVANCED(user_fn_on_each_tap, user_fn_on_dance_finished, user_fn_on_dance_reset)
//ACTION_TAP_DANCE_FN(null, user_fn_on_dance_finished, null)
//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_LAY1_CAPS]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL,dance_layer_caps,dance_layer_caps_reset)
// Other declarations would go here, separated by commas, if you have them
};


// macros go here
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed)
    {
        switch(id)
        {
            case ARRO: // [
                return MACRO(D(RALT), T(8), U(RALT), END);
            case ARRC: // ]
                return MACRO(D(RALT), T(9), U(RALT), END);
            case BRKO: // (
                return MACRO(D(LSFT), T(8), U(LSFT), END);
            case BRKC: // )
                return MACRO(D(LSFT), T(9), U(LSFT), END);
            case FUCO: // {
                return MACRO(D(RALT), T(7), U(RALT), END);
            case FUCC: // }
                return MACRO(D(RALT), T(0), U(RALT), END);
        }
    }
    return MACRO_NONE;
};
