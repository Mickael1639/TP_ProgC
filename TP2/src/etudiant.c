#include <stdio.h>

#define NB_ETUDIANTS 5

int main(void)
{
    char noms_prenoms[NB_ETUDIANTS][50] = {
        "Dupont Marie",
        "Martin Lucas",
        "Bernard Chloe",
        "Petit Hugo",
        "Robert Emma"
    };

    char adresses[NB_ETUDIANTS][100] = {
        "12 Rue des Lilas, Paris",
        "5 Avenue Victor Hugo, Lyon",
        "8 Rue de la Paix, Marseille",
        "20 Boulevard Voltaire, Lille",
        "3 Rue du Commerce, Toulouse"
    };

    float notes_prog[NB_ETUDIANTS]  = {15.5, 12.0, 18.0, 9.5, 14.0};
    float notes_sysx[NB_ETUDIANTS]  = {13.0, 16.5, 11.0, 14.5, 17.0};

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Etudiant %d\n", i + 1);
        printf("  Nom et prenom      : %s\n", noms_prenoms[i]);
        printf("  Adresse            : %s\n", adresses[i]);
        printf("  Note Programmation : %.1f\n", notes_prog[i]);
        printf("  Note Systeme Expl. : %.1f\n", notes_sysx[i]);
        printf("\n");
    }

    return 0;
}