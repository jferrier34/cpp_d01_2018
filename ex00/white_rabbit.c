/*
** EPITECH PROJECT, 2018
** white_rabbit.c
** File description:
** white_rabbit.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int follow_the_white_rabbit(void)
{
    int result = 0;
    int sum = 0;
    int check = 0;

    while (check == 0) {
        result = (random() % 37) + 1;
        sum = sum + result;
        if (result == 1 || result == 37 || sum >= 397) {
            check = 1;
            printf("RABBIT!!!");
            printf("\n");
            return (sum);
        }
        if (result >= 18 && result <= 21 || result == 6 ||
        result == 17 || result == 28 || result == 4 || result == 5)     {
            printf("left");
            printf("\n");
    }
        if (result == 13 || result >= 34 && result < 37 ) {
            printf("right");
            printf("\n");
        }
        if (result == 10 || result == 15 || result == 23) {
            printf("forward");
            printf("\n");
        }
        if (result == 26 || (result % 8 == 0)) {
            printf("backward");
            printf("\n");
        }
    }
    return (sum);
}

