#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello";
    char str2[50] = " World!";
    char copie[50];
    char concat[100];
    int longueur1 = 0;
    int longueur2 = 0;
    int i;

    /* 1. Calcul de la longueur de str1 */
    while (str1[longueur1] != '\0')
        longueur1++;

    while (str2[longueur2] != '\0')
        longueur2++;

    printf("Longueur de \"%s\" : %d\n", str1, longueur1);
    printf("Longueur de \"%s\" : %d\n", str2, longueur2);

    /* 2. Copie de str1 dans copie */
    for (i = 0; i <= longueur1; i++)
        copie[i] = str1[i];

    printf("Copie de str1 : %s\n", copie);

    /* 3. Concatenation de str1 et str2 dans concat */
    for (i = 0; i < longueur1; i++)
        concat[i] = str1[i];

    for (i = 0; i <= longueur2; i++)
        concat[longueur1 + i] = str2[i];

    printf("Concatenation : %s\n", concat);

    return 0;
}