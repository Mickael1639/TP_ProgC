#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

void afficher_entiers(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(p + i));
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}

void afficher_flottants(float *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f", *(p + i));
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}

int main(void)
{
    srand(time(NULL));

    int entiers[TAILLE];
    float flottants[TAILLE];

    int   *pi = entiers;
    float *pf = flottants;

    for (int i = 0; i < TAILLE; i++)
    {
        *(pi + i) = rand() % 150;
        *(pf + i) = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant multiplication) :\n");
    afficher_entiers(pi, TAILLE);

    printf("Tableau de flottants (avant multiplication) :\n");
    afficher_flottants(pf, TAILLE);

    for (int i = 0; i < TAILLE; i++)
    {
        if (i % 2 == 0)
        {
            *(pi + i) *= 3;
            *(pf + i) *= 3;
        }
    }

    printf("\nTableau d'entiers (apres multiplication) :\n");
    afficher_entiers(pi, TAILLE);

    printf("Tableau de flottants (apres multiplication) :\n");
    afficher_flottants(pf, TAILLE);

    return 0;
}