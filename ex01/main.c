/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

void p(int nb);

void menger_sponge(int size, int lvl, int x, int y);

void menger_sponge_display(int size, int lvl, int x, int y);

int my_getnbr(char *s)
{
    int res = 0;
    int neg = (-1) * ((*s) == '-');
    s += (neg == -1);
    for (; *s && *s <= '9' && *s >= '0'; s++) {
        res *= 10;
        res += (*s - 48);
    }
    if (neg == -1)
        return (res * -1);
    return (res);
}

int main(int ac, char **av)
{
    int lvl = my_getnbr(av[2]);
    int size = my_getnbr(av[1]);

    if (ac == 3) {
        if (size > 0)
            menger_sponge(size, lvl, 0, 0);
    }
    return (0);
}
