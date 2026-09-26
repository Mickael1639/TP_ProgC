#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int comparer(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int recherche_dichotomique(int *tab, int taille, int cible)
{
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite)
    {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == cible)
            return 1;
        else if (tab[milieu] < cible)
            gauche = milieu + 1;
        else
            droite = milieu - 1;
    }

    return 0;
}

int main(void)
{
    int tableau[TAILLE];
    int cible;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
        tableau[i] = rand() % 200 - 100;

    qsort(tableau, TAILLE, sizeof(int), comparer);

    printf("Tableau trie :\n");
    for (int i = 0; i < TAILLE; i++)
        printf("%d ", tableau[i]);
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible);

    if (recherche_dichotomique(tableau, TAILLE, cible))
        printf("\nResultat : entier present\n");
    else
        printf("\nResultat : entier absent\n");

    return 0;
}