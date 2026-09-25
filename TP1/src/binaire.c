#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int idx = 0; idx < taille; idx++)
    {
        unsigned int n = (unsigned int)nombres[idx];

        printf("%d en binaire : ", nombres[idx]);

        for (int i = 31; i >= 0; i--)
        {
            unsigned int bit = (n >> i) & 1;
            printf("%u", bit);
        }

        printf("\n");
    }

    return 0;
}