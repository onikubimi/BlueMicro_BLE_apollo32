#ifndef KEYMAP_H
#define KEYMAP_H

#include <stdint.h>
#include "Key.h"
#include <array>

#include <stdint.h>
#include <array>
#include "hid_keycodes.h"
#include "hardware_config.h"
#include "keyboard_config.h"
#include "Key.h"

#define _L0 0 // デフォルトレイヤー

extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix; 
void setupKeymap();

#endif /* KEYMAP_H */
