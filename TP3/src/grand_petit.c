#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void)
{
    int tableau[TAILLE];

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
        tableau[i] = rand() % 1000 + 1;

    int max = tableau[0];
    int min = tableau[0];

    for (int i = 1; i < TAILLE; i++)
    {
        if (tableau[i] > max)
            max = tableau[i];

        if (tableau[i] < min)
            min = tableau[i];
    }

    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);

    return 0;
}