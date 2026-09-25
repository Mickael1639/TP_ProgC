#include <stdio.h>

int main(void)
{
    unsigned int d = 0x10001000;

    unsigned int bit4  = (d >> (32 - 4))  & 1;
    unsigned int bit20 = (d >> (32 - 20)) & 1;

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}