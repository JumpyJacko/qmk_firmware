#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 *
 * This file has been heavily edited by JumpyJacko.
 * Basically not even what it was like when it was generated.   
 */

/* Defining Homerow Mods for Readability (COLEMAK) */
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

#define HOME_N LCTL_T(KC_N)
#define HOME_E LSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O LGUI_T(KC_O)

/* Defining Homerow Mods for Readability (QWERTY) */
#define HOME_QA    LGUI_T(KC_A)
#define HOME_QS    LALT_T(KC_S)
#define HOME_QD    LSFT_T(KC_D)
#define HOME_QF    LCTL_T(KC_F)

#define HOME_QJ    LCTL_T(KC_J)
#define HOME_QK    LSFT_T(KC_K)
#define HOME_QL    LALT_T(KC_L)
#define HOME_QSCLN LGUI_T(KC_SCLN)

/* Defining Layers - Now in artsey.h*/

/* Switch between default layers */
#define COLE DF(_COLEMAK)
#define QWER DF(_QWERTY)
#define ARTS DF(_A_BASE)

/* Layer keys */
#define NUMS LT(_NUMSYM, KC_ENT)
#define NAVI LT(_NAVI, KC_TAB)

#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(     KC_Q,   KC_W,   KC_F,   KC_P,    KC_G,   KC_J,  KC_L,   KC_U,     KC_Y,    KC_SCLN, 
                           HOME_A, HOME_R, HOME_S, HOME_T,  KC_D,   KC_H,  HOME_N, HOME_E,   HOME_I,  HOME_O, 
                           KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,   KC_K,  KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, 
                                                   KC_BSPC, NUMS,   NAVI,  KC_SPC
        ),
                        /* Colemak Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |  q  |  w  |  f  |  p  |  g  |        |  j  |  l  |  u  |  y  |  ;  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  a  |  r  |  s  |  t  |  d  |        |  h  |  n  |  e  |  i  |  o  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  z  |  x  |  c  |  v  |  b  |        |  k  |  m  |  ,  |  .  |  /  |
                        * `-----------------------------|        |-----------------------------'
                        *                   | ent |bkspc|        | spc | tab |
                        *                   '-----------'        '-----------'
                        */
    [_QWERTY] = LAYOUT(     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,      KC_O,     KC_P, 
                           HOME_QA, HOME_QS, HOME_QD, HOME_QF, KC_G,   KC_H,   HOME_QJ, HOME_QK,   HOME_QL,  HOME_QSCLN, 
                           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM,   KC_DOT,   KC_SLSH, 
                                                      KC_BSPC, NUMS,   NAVI,   KC_SPC
        ),
                        /* QWERTY Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |  q  |  w  |  e  |  r  |  t  |        |  y  |  u  |  i  |  o  |  p  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  a  |  s  |  d  |  f  |  g  |        |  h  |  j  |  k  |  l  |  ;  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  z  |  x  |  c  |  v  |  b  |        |  n  |  m  |  ,  |  .  |  /  |
                        * `-----------------------------|        |-----------------------------'
                        *                   | ent |bkspc|        | spc | tab |
                        *                   '-----------'        '-----------'
                        */
    [_NUMSYM] = LAYOUT(    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, 
                           KC_DLR,  KC_PLUS, KC_LPRN, KC_RPRN, KC_AT,   KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, KC_ASTR, 
                           KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_TILD, KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC,
                                                      KC_BSPC, NUMS,    NAVI, KC_SPC
        ),
                        /* Numbers and Symbols Layer (Basically Stolen from winternebs)
                        * ,-----------------------------.        ,-----------------------------.
                        * |  1  |  2  |  3  |  4  |  5  |        |  6  |  7  |  8  |  9  |  0  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  $  |  +  |  (  |  )  |  @  |        |  |  |  -  |  =  |  _  |  *  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  !  |  #  |  {  |  }  |  ~  |        |  &  |  [  |  ]  |  %  |  ^  |
                        * `-----------------------------|        |-----------------------------'
                        *                   |~NUM~|bkspc|        | spc | tab |
                        *                   '-----------'        '-----------'
                        */
    [_NAVI] = LAYOUT(      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_9,    KC_F10, 
                           KC_F11,  KC_VOLU, KC_VOLD, KC_MUTE, KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F12, 
                           KC_MFFD, KC_MPLY, KC_MSTP, KC_MRWD, KC_NO,   KC_BSLS, KC_GRV,  KC_NO,   KC_NO,   KC_NO,
                                                      KC_BSPC, NUMS,    NAVI,    KC_SPC
        ),
                        /* Fn, Nav, and Media Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * | Fn1 | Fn2 | Fn3 | Fn4 | Fn5 |        | Fn6 | Fn7 | Fn8 | Fn9 | F10 |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | F11 |VolUp|VolDn|Mute | --- |        |Left |Down | Up  |Right| F12 |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |Medi>|MediP|MediS|Medi<| --- |        |  \  |  `  | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   | ent |bkspc|        | spc |~NAV~|
                        *                   '-----------'        '-----------'
                        */

    [_ADJUST] = LAYOUT(    KC_NO,    KC_BTN2,  KC_MS_U,  KC_BTN1,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    NK_TOGG,
                           KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,    KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,  KC_NO,
                           KC_NO,    KC_NO,    ARTS,     QWER,     COLE,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                                         KC_BSPC,  NUMS,     NAVI,     KC_SPC
        ),
                        /* Adjust Layer (NUMS + NAV)
                        * ,-----------------------------.        ,-----------------------------.
                        * | --- |RClik| MsU |LClik| --- |        | --- | --- | --- | --- |tNKRO|
                        * |-----|-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | MsL | MsD | MsR | --- |        |mWhlL|mWhlD|mWhlU|mWhlR| --- |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- |ARTSE|QWERT|ALPHA|        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |~NUM~|bkspc|        | spc |~NAV~|
                        *                   '-----------'        '-----------'
                        */

    [_A_BASE] = LAYOUT(    A_BASE_S, A_BASE_T, A_BASE_R, A_BASE_A,  KC_NO,    KC_NO,  A_BASE_A,   A_BASE_R,   A_BASE_T,  A_BASE_S,
                           A_BASE_O, A_BASE_I, A_BASE_Y, A_BASE_E,  KC_NO,    KC_NO,  A_BASE_E,   A_BASE_Y,   A_BASE_I,  A_BASE_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,  KC_NO,      KC_NO,      KC_NO,     KC_NO, 
                                                         QWER,      KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey Base Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |  s  |  t  |  r  |  a  | --- |        | --- |  a  |  r  |  t  |  s  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  o  |  i  |  y  |  e  | --- |        | --- |  e  |  y  |  i  |  o  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |ALPHA| spc |        | spc |ALPHA|
                        *                   '-----------'        '-----------'
                        */

    [_A_NUM] = LAYOUT(     A_NUM_S,  A_NUM_T,  A_NUM_R,  A_NUM_A,  KC_NO,    KC_NO,  A_NUM_A,   A_NUM_R,   A_NUM_T,  A_NUM_S,
                           A_NUM_O,  A_NUM_I,  A_NUM_Y,  A_NUM_E,  KC_NO,    KC_NO,  A_NUM_E,   A_NUM_Y,   A_NUM_I,  A_NUM_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,      KC_NO,    KC_NO, 
                                                         QWER,     KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey NUM Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * | ~ ~ |  3 |8| 2 |7| 1  | --- |        | - - |  1 |7| 2 |8| 3  | ~~~ |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- |  6 |0| 5 |9| 4  | --- |        | --- |  4 |0| 5 |0| 6  | --- |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |ALPHA| spc |        | spc |ALPHA|
                        *                   '-----------'        '-----------'
                        */

    [_A_NAV] = LAYOUT(     A_NAV_S,  A_NAV_T,  A_NAV_R,  A_NAV_A,  KC_NO,    KC_NO,  A_NAV_A,   A_NAV_R,   A_NAV_T,  A_NAV_S,
                           A_NAV_O,  A_NAV_I,  A_NAV_Y,  A_NAV_E,  KC_NO,    KC_NO,  A_NAV_E,   A_NAV_Y,   A_NAV_I,  A_NAV_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,      KC_NO,    KC_NO, 
                                                         QWER,     KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey NAV Layer
                        * I don't know the layout lol 
                        */

    [_A_SYM] = LAYOUT(     A_SYM_S,  A_SYM_T,  A_SYM_R,  A_SYM_A,  KC_NO,    KC_NO,  A_SYM_A,   A_SYM_R,   A_SYM_T,  A_SYM_S,
                           A_SYM_O,  A_SYM_I,  A_SYM_Y,  A_SYM_E,  KC_NO,    KC_NO,  A_SYM_E,   A_SYM_Y,   A_SYM_I,  A_SYM_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,     KC_NO,    KC_NO, 
                                                         QWER,     KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey SYM Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |  `  |  ;  |  \  |  !  | --- |        | --- |  !  |  \  |  ;  |  `  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  =  |  -  |  ?  | ~ ~ | --- |        | --- | ~ ~ |  ?  |  -  |  =  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |ALPHA| spc |        | spc |ALPHA|
                        *                   '-----------'        '-----------'
                        */

    [_A_BRAC] = LAYOUT(    A_BRAC_S, A_BRAC_T, A_BRAC_R, A_BRAC_A, KC_NO,    KC_NO,  A_BRAC_A,  A_BRAC_R,  A_BRAC_T, A_BRAC_S,
                           A_BRAC_O, A_BRAC_I, A_BRAC_Y, A_BRAC_E, KC_NO,    KC_NO,  A_BRAC_E,  A_BRAC_Y,  A_BRAC_I, A_BRAC_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,     KC_NO,    KC_NO, 
                                                         QWER,     KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey BRAC Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |  }  |  (  |  )  | ~ ~ | --- |        | --- | ~ ~ |  (  |  )  |  {  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  {  |  [  |  ]  | --- | --- |        | --- | --- |  [  |  ]  |  }  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |ALPHA| spc |        | spc |ALPHA|
                        *                   '-----------'        '-----------'
                        */

    [_A_MOU] = LAYOUT(     A_MOU_S,  A_MOU_T,  A_MOU_R,  A_MOU_A,  KC_NO,    KC_NO,  A_MOU_A,   A_MOU_R,   A_MOU_T,  A_MOU_S,
                           A_MOU_O,  A_MOU_I,  A_MOU_Y,  A_MOU_E,  KC_NO,    KC_NO,  A_MOU_E,   A_MOU_Y,   A_MOU_I,  A_MOU_O, 
                           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,     KC_NO,    KC_NO, 
                                                         QWER,     KC_SPC,   KC_SPC, QWER
        ),
                        /* Artsey MOU Layer
                        * I also don't know this layout
                        */

    [_A_CUSTOM] = LAYOUT(  A_CUSTOM_S,  A_CUSTOM_T,  A_CUSTOM_R,  A_CUSTOM_A,  KC_NO,  KC_NO,  A_CUSTOM_A,  A_CUSTOM_R,   A_CUSTOM_T,  A_CUSTOM_S,
                           A_CUSTOM_O,  A_CUSTOM_I,  A_CUSTOM_Y,  A_CUSTOM_E,  KC_NO,  KC_NO,  A_CUSTOM_E,  A_CUSTOM_Y,   A_CUSTOM_I,  A_CUSTOM_O, 
                           KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,  KC_NO,  KC_NO,       KC_NO,        KC_NO,       KC_NO, 
                                                                  QWER,        KC_SPC, KC_SPC, QWER
        ),
                        /* Artsey Custom Layer
                        * ,-----------------------------.        ,-----------------------------.
                        * |ALPHA|VolUp| Ins |Mute | --- |        | --- | Mute|  \  |VolUp|ALPHA|
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | ~ ~ |VolDn|PrtSc|RShif| --- |        | --- |RShif|PrtSc|VolDn| ~ ~|
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |ALPHA| spc |        | spc |ALPHA|
                        *                   '-----------'        '-----------'
                        */
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUMSYM, _NAVI, _ADJUST);
}
