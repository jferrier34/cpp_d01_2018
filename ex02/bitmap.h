/*
** EPITECH PROJECT, 2019
** bitmap.h
** File description:
** bitmap.h
*/

#ifndef BITMAP_H
#define BITMAP_H
#define BMP_MAGIC 0x424D

#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct __attribute__((packed)) bmp_header   {
    int16_t magic;
    int32_t size;
    int16_t _app1;
    int16_t _app2;
    int32_t offset;
} bmp_header_t;

typedef struct __attribute__((packed)) bmp_info_header {
    int32_t size;
    uint32_t width;
    uint32_t height;
    int16_t planes;
    int16_t bpp;
    int32_t compression;
    int32_t raw_data_size;
    int32_t h_resolution;
    int32_t v_resolution;
    int32_t palette_size;
    int32_t important_colors;
} bmp_info_header_t;

void make_bmp_header(bmp_header_t *header, size_t size);
void make_bmp_info_header(bmp_info_header_t *header, size_t size);

#endif
