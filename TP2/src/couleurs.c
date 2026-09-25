#include <stdio.h>

#define NB_COULEURS 10

typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

int main(void)
{
    Couleur couleurs[NB_COULEURS] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xaa, 0xbb, 0xcc, 0x80},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0x33, 0x66, 0x99, 0xcc},
        {0x7f, 0x7f, 0x7f, 0xff},
        {0x01, 0x02, 0x03, 0x04}
    };

    for (int i = 0; i < NB_COULEURS; i++)
    {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].r);
        printf("Vert  : %u\n", couleurs[i].g);
        printf("Bleu  : %u\n", couleurs[i].b);
        printf("Alpha : %u\n", couleurs[i].a);
        printf("\n");
    }

    return 0;
}