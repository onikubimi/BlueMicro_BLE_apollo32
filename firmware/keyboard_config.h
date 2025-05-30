#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

#define DEVICE_NAME       "apollo32"
#define DEVICE_MODEL      "apollo32_2.0"                      
#define MANUFACTURER_NAME       "onikubimi"


#define KEYBOARD_SIDE SINGLE
#define KEYMAP( \
      k00, k01, \
      k10, k11 \
) \
{ \
    { k00, k01 }, \
    { k10, k11 }, \
} 

#endif /* KEYBOARD_CONFIG_H */
