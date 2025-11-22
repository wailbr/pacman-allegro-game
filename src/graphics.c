#include "graphics.h"

#define PACMAN_PATH "assets/characters/pacman/"
#define GHOST_PATH "assets/characters/ghosts/"

BITMAP* load_sprite(const char* file_path) {
    BITMAP* sprite = load_bitmap(file_path, NULL);
    if (!sprite) {
        allegro_message("Impossible de charger le sprite : %s", file_path);
    }
    return sprite;
}

void draw_pacman(BITMAP* buffer, BITMAP* sprite, int x, int y) {
    draw_sprite(buffer, sprite, x, y);
}

void draw_labyrinth(BITMAP* buffer, int (*labyrinth)[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (labyrinth[i][j] == 1) {
                rectfill(buffer, j * 40, i * 40, (j + 1) * 40 - 1, (i + 1) * 40 - 1, makecol(0, 0, 255));
            } else if (labyrinth[i][j] == 2) {
                rectfill(buffer, j * 40 + 15, i * 40 + 15, (j + 1) * 40 - 15, (i + 1) * 40 - 15, makecol(255, 255, 0));
            }
        }
    }
}
