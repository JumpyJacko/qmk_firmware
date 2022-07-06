#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 *
 * This file has been heavily edited by JumpyJacko.
 * Basically not even what it was like when it was generated.   
 */

/* Defining Homerow Mods for Readability (COLEMAK DH) */
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I RALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

/* Defining Homerow Mods for Readability (QWERTY) */
#define HOME_QA    LGUI_T(KC_A)
#define HOME_QS    LALT_T(KC_S)
#define HOME_QD    LSFT_T(KC_D)
#define HOME_QF    LCTL_T(KC_F)

#define HOME_QJ    RCTL_T(KC_J)
#define HOME_QK    RSFT_T(KC_K)
#define HOME_QL    RALT_T(KC_L)
#define HOME_QSCLN RGUI_T(KC_SCLN)

/* Defining Layers */
enum custom_layers {
    _ALPHA = 0,
    _QWERT,
    _NUMSYM,
    _NAVI,
    _ADJUST,
    _GAMING,
};

#define TYPE DF(_ALPHA)
#define QWER DF(_QWERT)
#define NUMS LT(_NUMSYM, KC_ENT)
#define NAVI LT(_NAVI, KC_TAB)
#define ADJS LT(_ADJUST, )
#define GAME DF(_GAMING)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA] = LAYOUT(     KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,   KC_J,   KC_L,   KC_U,     KC_Y,    KC_SCLN, 
                           HOME_A, HOME_R, HOME_S, HOME_T, KC_G,   KC_M,   HOME_N, HOME_E,   HOME_I,  HOME_O, 
                           KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,   KC_K,   KC_H,   KC_COMM,  KC_DOT,  KC_SLSH, 
                                                   NUMS, KC_BSPC,  KC_SPC, NAVI
                ),
                        /* Colemak-dh Layer
                        *
                        * ,-----------------------------.        ,-----------------------------.
                        * |  q  |  w  |  f  |  p  |  b  |        |  j  |  l  |  u  |  y  |  ;  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  a  |  r  |  s  |  t  |  g  |        |  m  |  n  |  e  |  i  |  o  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |  z  |  x  |  c  |  d  |  v  |        |  k  |  h  |  ,  |  .  |  /  |
                        * `-----------------------------|        |-----------------------------'
                        *                   | ent |bkspc|        | spc | tab |
                        *                   '-----------'        '-----------'
                        */
    [_QWERT] = LAYOUT(     KC_Q,    KC_W,    KC_E,    KC_R,    KC_B,   KC_J,   KC_L,    KC_U,      KC_Y,     KC_SCLN, 
                           HOME_QA, HOME_QS, HOME_QD, HOME_QF, KC_G,   KC_M,   HOME_QJ, HOME_QK,   HOME_QL,  HOME_QSCLN, 
                           KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,   KC_K,   KC_H,    KC_COMM,   KC_DOT,   KC_SLSH, 
                                                      NUMS,  KC_BSPC,  KC_SPC, NAVI
                ),
                        /* QWERTY Layer
                        *
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
                                                      NUMS,   KC_BSPC, KC_SPC, KC_TAB
                ),
                        /* Numbers and Symbols Layer (Basically Stolen from winternebs)
                        *
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
    [_NAVI] = LAYOUT(       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_9,    KC_F10, 
                           KC_F11,  KC_VOLU, KC_VOLD, KC_MUTE, KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F12, 
                           KC_MFFD, KC_MPLY, KC_MSTP, KC_MRWD, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                      KC_ENT,  KC_BSPC, KC_SPC,  NAVI
        ),
                        /* Fn, Nav, and Media Layer
                        * 
                        * ,-----------------------------.        ,-----------------------------.
                        * | Fn1 | Fn2 | Fn3 | Fn4 | Fn5 |        | Fn6 | Fn7 | Fn8 | Fn9 | F10 |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | F11 |VolUp|VolDn|Mute | --- |        |Left |Down | Up  |Right| F12 |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |Medi>|MediP|MediS|Medi<| --- |        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   | ent |bkspc|        | spc |~NAV~|
                        *                   '-----------'        '-----------'
                        */

    [_ADJUST] = LAYOUT(    KC_BTN2,  KC_MS_U,  KC_BTN1,  KC_NO,  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                           KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,  KC_NO,   KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,  KC_NO,
                           KC_NO,    KC_NO,    QWER,     TYPE,   GAME,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                                         NUMS,  KC_BSPC,  KC_SPC,   NAVI,
                        /* Adjust Layer (NUMS + NAV)
                        * 
                        * ,-----------------------------.        ,-----------------------------.
                        * |RClik| MsU |LClik| --- | --- |        | --- | --- | --- | --- | --- |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | MsL | MsD | MsR | --- | --- |        |mWhlL|mWhlD|mWhlU|mWhlR| --- |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * | --- | --- |QWERT|ALPHA|GAMES|        | --- | --- | --- | --- | --- |
                        * `-----------------------------|        |-----------------------------'
                        *                   |~NUM~|bkspc|        | spc |~NAV~|
                        *                   '-----------'        '-----------'
                        */
        ),

    [_GAMING] = LAYOUT(    KC_ESC,  KC_Q,  KC_W,   KC_E,   KC_R,    KC_T,    KC_Y,   KC_U,   KC_I,   KC_O, 
                           KC_LSFT, KC_A,  KC_S,   KC_D,   KC_F,    KC_G,    KC_H,   KC_J,   KC_K,   KC_L, 
                           KC_LCTL, KC_Z,  KC_X,   KC_C,   KC_V,    KC_B,    KC_N,   KC_M,   KC_P,   KC_LALT, 
                                                   KC_TAB, KC_SPC,  KC_BSPC, NAVI
        )
                        /* Gaming Layer
                        *
                        * ,-----------------------------.        ,-----------------------------.
                        * | Esc |  q  |  w  |  e  |  r  |        |  t  |  y  |  i  |  u  |  o  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |Shift|  a  |  s  |  d  |  f  |        |  g  |  h  |  j  |  k  |  l  |
                        * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
                        * |LCtrl|  z  |  x  |  c  |  v  |        |  b  |  n  |  m  |  p  |LfAlt|
                        * `-----------------------------|        |-----------------------------'
                        *                   | tab | spc |        |bkspc| ent |
                        *                   '-----------'        '-----------'
                        */

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUMSYM, _NAVI, _ADJUST);
}

/* Combo Definitions */
enum combos { 
  BSPC_SPC_ESC,         // Backspace + Space = Escape
  SPC_HOME_O_QUOTE,     // Space + O = ' and "
  SPC_SLSH_BSLS,        // Space + / = "\"
  SPC_SCLN_DEL,         // Space + ; = Delete
  ZC_COPY,              // Z + C = Control + C (Copy),  Stolen from QMK Combo Docs
  XV_PASTE              // X + V = Control + V (Paste), Stolen from QMK Combo Docs
};

const uint16_t PROGMEM bspc_spc_esc[] = { KC_BSPC, KC_SPC, COMBO_END};
const uint16_t PROGMEM spc_home_o_quote[] = { KC_SPC, HOME_O, COMBO_END};
const uint16_t PROGMEM spc_slsh_bsls[] = { KC_SPC, KC_SLSH, COMBO_END};
const uint16_t PROGMEM spc_scln_del[] = { KC_SPC, KC_SCLN, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_X, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [BSPC_SPC_ESC] = COMBO(bspc_spc_esc, KC_ESC),
  [SPC_HOME_O_QUOTE] = COMBO(spc_home_o_quote, KC_QUOTE),
  [SPC_SLSH_BSLS] = COMBO(spc_slsh_bsls, KC_BSLS),
  [SPC_SCLN_DEL] = COMBO(spc_scln_del, KC_DEL),
  [ZC_COPY] = COMBO_ACTION(copy_combo),
  [XV_PASTE] = COMBO_ACTION(paste_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case ZC_COPY:
      if (pressed) {
        tap_code16(LCTL(KC_C));
      }
      break;
    case XV_PASTE:
      if (pressed) {
        tap_code16(LCTL(KC_V));
      }
      break;
  }
}
