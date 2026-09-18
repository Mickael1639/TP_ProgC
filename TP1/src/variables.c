#include<stdio.h>

int main(void)
{
    signed char        c1  = -42;
    unsigned char      c2  = 200;

    short              s1  = -1000;
    unsigned short     s2  = 40000;

    int                i1  = -123456;
    unsigned int       i2  = 3000000000U;

    long int           l1  = -123456789L;
    unsigned long int  l2  = 4000000000UL;

    long long int      ll1 = -9223372036854775807LL;
    unsigned long long ll2 = 18446744073709551615ULL;

    float              f1  = 3.14f;
    double             d1  = 3.14159265358979;
    long double        ld1 = 3.14159265358979323846L;

    printf("signed char        : %d\n", c1);
    printf("unsigned char      : %u\n", c2);

    printf("short              : %hd\n", s1);
    printf("unsigned short     : %hu\n", s2);

    printf("int                : %d\n", i1);
    printf("unsigned int       : %u\n", i2);

    printf("long int           : %ld\n", l1);
    printf("unsigned long int  : %lu\n", l2);

    printf("long long int      : %lld\n", ll1);
    printf("unsigned long long : %llu\n", ll2);

    printf("float              : %f\n", f1);
    printf("double             : %f\n", d1);
    printf("long double        : %Lf\n", ld1);

    return 0;
}
