#include <stdio.h>

int main(void)
{
    long somme = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (i % 11 == 0)
            continue;

        if (i % 5 == 0 || i % 7 == 0)
            somme += i;

        if (somme > 5000)
            break;
    }

    printf("Somme finale = %ld\n", somme);

    return 0;
}