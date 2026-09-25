#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5

typedef struct
{
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

int main(void)
{
    Etudiant etudiants[NB_ETUDIANTS];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Chloe");
    strcpy(etudiants[2].adresse, "8 Rue de la Paix, Marseille");
    etudiants[2].note1 = 18.0;
    etudiants[2].note2 = 11.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Hugo");
    strcpy(etudiants[3].adresse, "20 Boulevard Voltaire, Lille");
    etudiants[3].note1 = 9.5;
    etudiants[3].note2 = 14.5;

    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "3 Rue du Commerce, Toulouse");
    etudiants[4].note1 = 14.0;
    etudiants[4].note2 = 17.0;

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note1);
        printf("Note 2 : %.1f\n", etudiants[i].note2);
        printf("\n");
    }

    return 0;
}