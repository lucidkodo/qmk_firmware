#include QMK_KEYBOARD_H

enum sofle_layers {
    _COLEMAK,
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    KC_COLEMAK = SAFE_RANGE,
    KC_QWERTY,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_WINL,
    KC_WINR
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =+  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  | Enter|
 * |------+------+------+------+------+------|  PLAY |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |Space | /LOWER  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_COLEMAK] = LAYOUT( \
  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,     KC_8,     KC_9,    KC_0,     KC_EQL,   \
  KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                           KC_J,    KC_L,     KC_U,     KC_Y,    KC_SCLN,  KC_QUOT,  \
  KC_TAB,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                           KC_M,    KC_N,     KC_E,     KC_I,    KC_O,     KC_ENT,   \
  KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,  KC_MPLY,        XXXXXXX,  KC_K,    KC_H,     KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT, \
                   KC_LGUI, KC_LALT,  KC_LCTRL, KC_SPC, KC_LOWER,       KC_BSPC,  KC_RAISE, KC_RCTRL, KC_RALT, KC_RGUI                     \
),


/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | / Space /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,      KC_9,    KC_0,  KC_BSPC,    \
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,      KC_O,    KC_P,  KC_LBRC,    \
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,      KC_L,    KC_SCLN,  KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,     XXXXXXX, KC_N,     KC_M,     KC_COMM,   KC_DOT,  KC_SLSH,  KC_RSFT, \
                 KC_LGUI,KC_LALT,KC_LCTRL, KC_LOWER, KC_SPC,      KC_ENT,  KC_RAISE, KC_RCTRL, KC_RALT,   KC_RGUI                     \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  PLAY |    |       |------+------+------+------+------+------|
 * | Shift|      |  -   |      |      |      |-------|    |-------|   {  |   }  |   [  |   ]  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT( \
  _______,   KC_F1,     KC_F2,   KC_F3,    KC_F4,   KC_F5,                           KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,   \
  KC_GRV,    KC_1,      KC_2,    KC_3,     KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_F12,   \
  _______,   KC_EXLM,   KC_AT,   KC_HASH,  KC_DLR,  KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  _______,   _______,   KC_UNDS, KC_MINS,  _______, _______, _______,       _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_BSLS, _______, \
                        _______, _______,  _______, _______, _______,       _______, _______, _______, _______, _______                    \
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      | Caps |                    |      |      |      |      |      |       |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+-------|
 * |      |      |     |      |      |       |                    |      | PWrd |  Up  | NWrd |      |       |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+-------|
 * | Tab  | LAt  | LCtl |LShift|      |      |-------.    ,-------|      | Left | Down | Rigth|      |       |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|KC_WINL|KC_WINR|     |      |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
  _______, _______, _______, _______, _______, KC_CAPS,                           _______,  _______ , _______,  _______ ,  _______, _______, \
  _______, _______, _______, _______, _______, _______,                           KC_PGUP,  KC_PRVWD, KC_UP  ,  KC_NXTWD,  XXXXXXX, XXXXXXX, \
  _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______,                           KC_PGDN,  KC_LEFT , KC_DOWN,  KC_RGHT ,  XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  _______,       _______,  KC_WINL,  KC_WINR , XXXXXXX,  XXXXXXX,   XXXXXXX, _______, \
                    _______, _______, _______, _______,  _______,       _______,  _______, _______, _______, _______                         \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |QWERTY|COLEMAK|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX ,   XXXXXXX,  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  RESET   , XXXXXXX,  KC_QWERTY, KC_COLEMAK, CG_TOGG,  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX , XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX,                       XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
  XXXXXXX , XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
                      _______,   _______,    _______,  _______, _______,     _______, _______, _______, _______, _______                    \
  )
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    // Tutorial link: https://docs.splitkb.com/hc/en-us/articles/360013811280-How-do-I-convert-an-image-for-use-on-an-OLED-display
    // Converter: https://javl.github.io/image2cpp/

    static const char PROGMEM clack_fig[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x80, 0xc0, 0x60, 0x20, 0x30, 0x90, 0xc8, 0xcc, 0xe4, 0xf2, 0xf2, 0xf2, 0xf6, 0xe4, 0xe4,
        0xe4, 0xe4, 0xe4, 0xec, 0xc8, 0xc8, 0x48, 0x08, 0x18, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x70, 0x0e,
        0x83, 0xf0, 0xf8, 0xf2, 0xe7, 0xe7, 0xe7, 0xcf, 0xcf, 0xcf, 0xdf, 0xdf, 0x9f, 0x9f, 0x9f, 0x9f,
        0x9f, 0x1f, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x38, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00,
        0x04, 0x04, 0x04, 0x04, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40,
        0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0xfc, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xc7, 0x81, 0x38, 0x3e,
        0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x30, 0x19, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x60, 0x40, 0x40, 0x40, 0x60, 0x20, 0x00, 0x00, 0x00,
        0x40, 0x40, 0x40, 0x60, 0x7f, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x38, 0x64, 0x44, 0x44, 0x44,
        0x24, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x1f, 0x31, 0x40, 0x40, 0x40, 0x40, 0x20, 0x00, 0x00, 0x00,
        0x00, 0x7f, 0x0e, 0x06, 0x07, 0x0d, 0x18, 0x70, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60,
        0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03,
        0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x09, 0x09, 0x09, 0x1b, 0x13, 0x13, 0x33, 0x27, 0x27, 0x67,
        0x4f, 0x4f, 0x4c, 0x40, 0x40, 0x60, 0x30, 0x08, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(clack_fig, sizeof(clack_fig));
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n"), false);
    oled_write_ln_P(PSTR("mode"), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("> mac"), false);
    } else {
        oled_write_ln_P(PSTR("> win"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _COLEMAK:
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("CmkDH"), false);
            break;
        case _QWERTY:
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("layer"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
        case _COLEMAK:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(led_usb_state.caps_lock ? PSTR("CAPS ") : PSTR("    "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
        // oled_scroll_left();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_LEFT);
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_RIGHT);
            }
            break;
        case KC_WINL:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_LEFT);
            }
            break;
        case KC_WINR:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_RIGHT);
            }
            break;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
    return true;
}

#endif
