#include <stdio.h>

void afficher_octets(void *adresse, int taille)
{
    unsigned char *octet = (unsigned char *)adresse;

    for (int i = 0; i < taille; i++)
        printf(" %02x", octet[i]);
    printf("\n");
}

int main(void)
{
    short s = 0x0302;
    int i = 0x04030201;
    long l = 0x0807060504030201L;
    float f = 2.25f;
    double d = 1.0;
    long double ld = 1.0L;

    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(short));

    printf("\nOctets de int :\n");
    afficher_octets(&i, sizeof(int));

    printf("\nOctets de long int :\n");
    afficher_octets(&l, sizeof(long));

    printf("\nOctets de float :\n");
    afficher_octets(&f, sizeof(float));

    printf("\nOctets de double :\n");
    afficher_octets(&d, sizeof(double));

    printf("\nOctets de long double :\n");
    afficher_octets(&ld, sizeof(long double));

    return 0;
}