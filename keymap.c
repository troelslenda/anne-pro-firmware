#include QMK_KEYBOARD_H
#include "quantum.h"
#include "anne_pro_lighting.h"

// Tap Dance Declarations
enum {
  TDEGRV = 0,
  TDLCTL = 1,
  TDRCTL = 2
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TDEGRV] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_GRV),
  [TDLCTL] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_BTN4),
  [TDRCTL] = ACTION_TAP_DANCE_DOUBLE(KC_RCTL, KC_BTN5)
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      TD(TDEGRV),   KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_BSPC,
      KC_TAB,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,
      KC_CAPS,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,                        KC_ENT,
      KC_LSFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,                                        KC_RSFT,
      TD(TDLCTL),   KC_LWIN,        KC_LALT,                        KC_SPACE,                                                                                       KC_RALT,        MO(1),          MO(2),          TD(TDRCTL)
  ),
  /* 1st layer for the */
  [1] = LAYOUT(
      KC_GRV,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DEL,
      OSL(4),       XXXXXXX,        KC_UP,          XXXXXXX,        APL_RGB,        APL_RAT,        APL_BRT,        APL_MOD,        XXXXXXX,        KC_SLCK,        KC_PAUS,        KC_HOME,        KC_END,         KC_PSCR,
      XXXXXXX,      KC_LEFT,        KC_DOWN,        KC_RGHT,        KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_VOLD,        KC_MUTE,        KC_VOLU,        KC_PGUP,        KC_PGDN,                        XXXXXXX,
      _______,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        TG(3),          XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_INS,         XXXXXXX,                                        _______,
      _______,      _______,        _______,                                        XXXXXXX,                                                                        _______,        _______,        _______,        _______
  ),
  [2] = LAYOUT(
      XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
      XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,        DM_REC1,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        DM_PLY1,        XXXXXXX,        XXXXXXX,        XXXXXXX,
      XXXXXXX,      XXXXXXX,        DM_RSTP,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,
      _______,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        _______,
      _______,      _______,        _______,                                        XXXXXXX,                                                                        _______,        _______,        _______,        _______
  ),
  [3] = LAYOUT(
      TG(3),        APB_HC1,        APB_HC2,        APB_HC3,        APB_HC4,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        APB_LGC,        APB_OFF,        APB_ON,         XXXXXXX,
      XXXXXXX,      APB_HS1,        APB_HS2,        APB_HS3,        APB_HS4,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
      XXXXXXX,      APB_HD1,        APB_HD2,        APB_HD3,        APB_HD4,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,
      XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,
      APB_HLQ,      XXXXXXX,        XXXXXXX,                                        XXXXXXX,                                                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  [4] = LAYOUT(
      RESET,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
      XXXXXXX,      M(0),           M(1),           M(2),           M(3),           XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
      XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,
      _______,      XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        _______,
      _______,      _______,        _______,                                        XXXXXXX,                                                                        _______,        _______,        _______,        _______
  ),
};

void illuminate_key(int key) {
    uint8_t keybuf[] = {
        key, 255, 0, 0, 2
    };
    anne_pro_lighting_set_keys(1, keybuf);
}

void illuminate_layer_one(void) {
    uint8_t keybuf[] = {
        1, 255, 0, 0, 2,
        16, 0, 0, 255, 1,
        29, 0, 0, 255, 1,
        30, 0, 0, 255, 1,
        31, 0, 0, 255, 1,
        32, 255, 0, 0, 1,
        33, 255, 255, 0, 1,
        34, 255, 0, 0, 1,
        35, 255, 0, 0, 1,
        36, 255, 255, 0, 1,
        37, 255, 0, 0, 1,

    };
    anne_pro_lighting_set_keys(11, keybuf);
}


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 1:
            illuminate_layer_one();
            break;
        case 2:
            illuminate_key(2);
        break;
        case 3:
        // illuminate_key(3);
        break;
        case 4:
            illuminate_key(4);
        break;
    default: //  for any other layers, or the default layer
            anne_pro_lighting_mode(APL_MODE_PINK);
        break;
    }
  return state;
}



const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch(id) {
            case 0:
                SEND_STRING("ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQC0ORx55GLFysFpZJE6a3/gR0KjLbHo5j3ir+J8AkVC9wxNQfQ9mMrS76ao9I4VTsdqsY3MUgWHhzbrkXvLao9lPZALzew4+VpFgg5aP2azHQwdtLDsy/vFcKPFzMqe7gzbVvV/Elnb/OtwEKUqC8niK81ol0q3Ug+drNuqSVLJ7IGzOh8rRK8YAiCaYRivwJuYs1ieS9bZNZsSbmifmZYDhoViqTpFTKEHy8mGE6D8BZD34P0X2XEuqYtpqIStkNLN1JdMC+fF0hVgfDag9+xen25KRnQ8+TdmNaUyCUcJNGF2dEODLcNAWIo+vjnzhAVRVgHoaJPOMq2dHIlHI656kOTIA5DR6+mnOC61kxPp8FmTEPFIQvSdpKmWrh5ECYjt7J0CMebgxCGEa7AUZEfx6srqNvqbL/muvm3hu57bAUpBMrifMCkRC7+eqWa70nGMUEu43v0hiCvoChlHUWek1HGUJkV4WoyC93pOktsuKMG6CnVExga+XFQOfn2qw5U=troelslenda");
                return MACRO_NONE;
            case 1:
                SEND_STRING("troelslenda@gmail.com");
                return MACRO_NONE;
            case 2:
                SEND_STRING("MACRO 1");
                return MACRO_NONE;
            case 3:
                SEND_STRING("MACRO 2");
                return MACRO_NONE;

        }
    }
    return MACRO_NONE;
};
