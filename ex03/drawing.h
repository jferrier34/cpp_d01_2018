/*
** EPITECH PROJECT, 2019
** drawing.h
** File description:
** drawing.h
*/

#ifndef DRAWING_H
#define DRAWING_H

#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct point {
    unsigned int x;
    unsigned int y;
} point_t;

void draw_square(uint32_t **img, const point_t *origin,
size_t size, uint32_t color);

#endif
