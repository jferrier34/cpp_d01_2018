/*
** EPITECH PROJECT, 2019
** drawing.c
** File description:
** drawing.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin,
size_t size, uint32_t color) {
    for (size_t i = origin->x; i < size; i++) {
        for (size_t j = origin->y; j < size; j++) {
            img[i][j] = color;
        }
    }
}
