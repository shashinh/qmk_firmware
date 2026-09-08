#pragma once

/* Makes LCTL_T(KC_ESC) (and any other mod-tap) resolve to "hold" the
 * instant another key is pressed, instead of waiting the full tapping
 * term — this is what gave you the "instant Ctrl+R" feel before. */
#define HOLD_ON_OTHER_KEY_PRESS
