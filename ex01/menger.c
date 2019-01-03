/*
** EPITECH PROJECT, 2019
** menger.c
** File description:
** menger.c
*/

#include "./menger.h"

void menger_sponge(int size, int lvl, int x, int y)
{
    if (size > 1) {
        menger_sponge_display(size, lvl, 0, 0);
    }
}

void p(int nb)
{
    if (nb < 10) {
        printf("00%d ", nb);
    }
    else if (nb < 100) {
        printf("0%d ", nb);
    }
    else
        printf("%d ", nb);
}

void menger_sponge_display(int size, int lvl, int x, int y)
{
    int first = size / 3;
    int second = 0;
    int third = 0;
        p(first);
        printf("");
        p(second = first + x);
        printf("");
        p(third = first + y);
        printf("");
        printf("\n");
        if (lvl > 1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (i != 1 || j != 1)
            menger_sponge_display(first, lvl - 1, i * first + x, j * first + y);
            }
        }
    }
}

