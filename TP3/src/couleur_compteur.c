#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_COULEURS 100
#define NB_COULEURS_POSSIBLES 5

typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct
{
    Couleur couleur;
    int occurrences;
} CompteurCouleur;

int main(void)
{
    Couleur palette[NB_COULEURS_POSSIBLES] = {
        {0xff, 0x23, 0x23, 0x45},
        {0xff, 0x00, 0x23, 0x12},
        {0x00, 0xa0, 0x40, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0x7f, 0x7f, 0x7f, 0xff}
    };

    Couleur couleurs[NB_COULEURS];
    CompteurCouleur distinctes[NB_COULEURS];
    int nb_distinctes = 0;

    srand(time(NULL));

    for (int i = 0; i < NB_COULEURS; i++)
        couleurs[i] = palette[rand() % NB_COULEURS_POSSIBLES];

    for (int i = 0; i < NB_COULEURS; i++)
    {
        int trouve = 0;

        for (int j = 0; j < nb_distinctes; j++)
        {
            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a)
            {
                distinctes[j].occurrences++;
                trouve = 1;
                break;
            }
        }

        if (!trouve)
        {
            distinctes[nb_distinctes].couleur = couleurs[i];
            distinctes[nb_distinctes].occurrences = 1;
            nb_distinctes++;
        }
    }

    for (int i = 0; i < nb_distinctes; i++)
    {
        printf("%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].occurrences);
    }

    return 0;
}