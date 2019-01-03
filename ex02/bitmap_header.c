/*
** EPITECH PROJECT, 2019
** bitmap_header.c
** File description:
** bitmap_header.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "./bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    header->magic = 0x4D42;
    header->offset = 54;
    header->size = 54 + (size * size) * 4;
    header->_app1 = 0;
    header->_app2 = 0;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = 40;
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->raw_data_size = size * size * 4;
}
