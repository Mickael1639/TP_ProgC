#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

void afficher(int *tab, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

int main(void)
{
    int tableau[TAILLE];

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
        tableau[i] = rand() % 200 - 100;

    printf("Tableau non trie :\n");
    afficher(tableau, TAILLE);

    /* Tri a bulles */
    for (int i = 0; i < TAILLE - 1; i++)
    {
        for (int j = 0; j < TAILLE - 1 - i; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("\nTableau trie par ordre croissant :\n");
    afficher(tableau, TAILLE);

    return 0;
}