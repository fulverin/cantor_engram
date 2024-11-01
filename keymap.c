#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_ESC, KC_B, KC_Y, KC_O, KC_U, TO(2), TO(3), KC_L, KC_D, KC_W, KC_V, KC_Z, KC_TAB, KC_C, KC_I, KC_E, KC_A, TO(1), KC_NO, KC_H, KC_T, KC_S, KC_N, KC_Q, KC_LSFT, KC_G, KC_X, KC_J, KC_K, KC_TRNS, KC_NO, KC_R, KC_M, KC_F, KC_P, KC_DEL, KC_LGUI, KC_SPC, KC_BSPC, KC_ENT, LGUI(KC_SPC), KC_RCTL),
    [1] = LAYOUT_split_3x6_3(KC_ESC, KC_NO, KC_AMPR, KC_BSLS, KC_LCBR, TO(2), TO(3), KC_RCBR, KC_SLSH, KC_DLR, KC_SCLN, KC_PDOT, KC_NO, KC_PERC, KC_TILD, KC_QUOT, KC_LPRN, KC_NO, KC_NO, KC_RPRN, KC_DQUO, KC_PMNS, KC_COMM, KC_COLN, KC_NO, KC_EXLM, KC_HASH, KC_GRV, KC_LBRC, TO(0), KC_NO, KC_RBRC, KC_UNDS, KC_AT, KC_QUES, KC_DEL, KC_LGUI, KC_SPC, KC_BSPC, KC_ENT, LALT(KC_SPC), KC_RCTL),
    [2] = LAYOUT_split_3x6_3(KC_ESC, KC_NO,KC_PERC,KC_PSLS,KC_PMNS,KC_NO,TO(3),KC_PPLS,KC_ASTR,KC_CIRC,KC_NO,KC_NO,KC_8,KC_6,KC_4,KC_2,KC_0,TO(1),KC_NO,KC_1,KC_3,KC_5,KC_7,KC_9,KC_NO,KC_NO,KC_EXLM,KC_PIPE,KC_LT,TO(0),KC_NO,KC_GT,KC_AMPR,KC_PEQL,KC_NO,KC_NO,KC_LGUI,KC_SPC,KC_BSPC,KC_ENT,LALT(KC_SPC),KC_RCTL),
    [3] = LAYOUT_split_3x6_3(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, TO(2), KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_TAB, OSM(MOD_MEH), KC_LEFT, KC_UP, KC_RGHT, TO(1), KC_NO, KC_MS_L, KC_MS_U, KC_MS_R, KC_BRIU, KC_VOLU, KC_LSFT, KC_LCTL, KC_LALT, KC_DOWN, OSM(MOD_LSFT|MOD_LGUI), TO(0), KC_NO, KC_BTN1, KC_MS_D, KC_BTN2, KC_BRID, KC_VOLD, KC_LGUI, KC_SPC, KC_BSPC, KC_ENT, LALT(KC_SPC), KC_RCTL)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


 /*
  * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
  * │esc│ B │ Y │ O │ U │LT2│       │LT3│ L │ D │ W │ V │ Z │
  * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  * │tab│ C │ I │ E │ A │LT1│       │ _ │ H │ T │ S │ N │ Q │
  * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  * │sft│ C │ X │ J │ K │LT0│       │ _ │ R │ M │ F │ P │del│
  * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
  *               ┌───┐                   ┌───┐
  *               │GUI├───┐           ┌───┤Ctr│
  *               └───┤   ├───┐   ┌───┤alt├───┘
  *                   └───┤Bsp│   │Ent├───┘
  *                       └───┘   └───┘
  */
