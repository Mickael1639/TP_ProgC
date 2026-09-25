#include <stdio.h>

int main(void)
{
    int n = 7;
    long u0 = 0, u1 = 1;

    printf("%ld", u0);
    if (n > 1)
        printf(", %ld", u1);

    for (int i = 2; i < n; i++)
    {
        long suivant = u0 + u1;
        printf(", %ld", suivant);
        u0 = u1;
        u1 = suivant;
    }

    printf("\n");

    return 0;
}