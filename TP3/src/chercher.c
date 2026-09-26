#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void)
{
    int tableau[TAILLE];
    int cible;
    int trouve = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
        tableau[i] = rand() % 200 - 100;

    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++)
        printf("%d ", tableau[i]);
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible);

    for (int i = 0; i < TAILLE; i++)
    {
        if (tableau[i] == cible)
        {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("\nResultat : entier present\n");
    else
        printf("\nResultat : entier absent\n");

    return 0;
}