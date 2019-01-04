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
    size_t x = origin->x;
    size_t y = origin->y;

    for (y ; y < origin->y + size; ++y)
        for (x; x < origin->x + size; ++x)
            img[y][x] = color;
}

