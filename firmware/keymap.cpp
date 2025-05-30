#include "keymap.h"
#include <array>

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix = {
    KEYMAP(
        KC_Q, KC_W,
        KC_A, KC_S
    )
};

void setupKeymap() {
    for (int row = 0; row < MATRIX_ROWS; ++row) {
        for (int col = 0; col < MATRIX_COLS; ++col) {
            matrix[row][col].addActivation(_L0, Method::PRESS, matrix[row][col].getKeycode());
        }
    }
}
