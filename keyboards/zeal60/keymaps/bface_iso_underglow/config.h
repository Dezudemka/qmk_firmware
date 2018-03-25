#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define TAPPING_TERM 200

/* enable/disable LEDs based on layout */
#undef BACKLIGHT_USE_SPLIT_BACKSPACE
#define BACKLIGHT_USE_SPLIT_BACKSPACE 0

#undef BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define BACKLIGHT_USE_SPLIT_LEFT_SHIFT 1

#undef BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 1

#undef BACKLIGHT_USE_7U_SPACEBAR
#define BACKLIGHT_USE_7U_SPACEBAR 0

#undef BACKLIGHT_USE_ISO_ENTER
#define BACKLIGHT_USE_ISO_ENTER 1

#define TAPPING_TOGGLE 3
// enable/disable LEDs based on layout
#undef BACKLIGHT_USE_SPLIT_BACKSPACE
#define BACKLIGHT_USE_SPLIT_BACKSPACE 0
#undef BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define BACKLIGHT_USE_SPLIT_LEFT_SHIFT 1
#undef BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 1
#undef BACKLIGHT_USE_7U_SPACEBAR
#define BACKLIGHT_USE_7U_SPACEBAR 0
#undef BACKLIGHT_USE_ISO_ENTER
#define BACKLIGHT_USE_ISO_ENTER 1
// disable backlight when USB suspended (PC sleep/hibernate/shutdown)
#undef BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED
#define BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// disable backlight after timeout in minutes, 0 = no timeout
#undef BACKLIGHT_DISABLE_AFTER_TIMEOUT
#define BACKLIGHT_DISABLE_AFTER_TIMEOUT 45

// These define which keys in the matrix are alphas/mods
// Used for backlight effects so colors are different for
// alphas vs. mods
// Each value is for a row, bit 0 is column 0
// Alpha=0 Mod1
#undef BACKLIGHT_ALPHAS_MODS_ROW_0
#define BACKLIGHT_ALPHAS_MODS_ROW_0 0b0010000000000001
#undef BACKLIGHT_ALPHAS_MODS_ROW_1
#define BACKLIGHT_ALPHAS_MODS_ROW_1 0b0010000000000001
#undef BACKLIGHT_ALPHAS_MODS_ROW_2
#define BACKLIGHT_ALPHAS_MODS_ROW_2 0b0000000000000001
#undef BACKLIGHT_ALPHAS_MODS_ROW_3
#define BACKLIGHT_ALPHAS_MODS_ROW_3 0b0011000000000001
#undef BACKLIGHT_ALPHAS_MODS_ROW_4
#define BACKLIGHT_ALPHAS_MODS_ROW_4 0b0011110000000111

// #define RGBLIGHT_ANIMATIONS    // Underglow animations. 
#define RGB_DI_PIN B0          // The pin your RGB strip is wired to
#define RGBLED_NUM 15          // Number of LEDs
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// Enable current limiting for RGB underglow.
#define USB_MAX_POWER_CONSUMPTION 511
#define RGBSTRIP_CURRENT_LIMIT 800        // Strip current limit in mA.
#define RGBSTRIP_MAX_CURRENT_PER_LIGHT 40 // mA per light when at max brightness.



#endif //CONFIG_USER_H
