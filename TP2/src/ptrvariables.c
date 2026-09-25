#include <stdio.h>

int main(void)
{
    char c = 'A';
    short s = 1000;
    int i = 123456;
    long l = 123456789L;
    long long ll = 9223372036854775807LL;
    float f = 2.0f;
    double d = 3.14159265358979;
    long double ld = 3.14159265358979323846L;

    char        *pc  = &c;
    short       *ps  = &s;
    int         *pi  = &i;
    long        *pl  = &l;
    long long   *pll = &ll;
    float       *pf  = &f;
    double      *pd  = &d;
    long double *pld = &ld;

    unsigned char *bytes_ld = (unsigned char *)pld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  (hex) : %hhx\n", (void *)pc, *(unsigned char *)pc);
    printf("Adresse de s  : %p, Valeur de s  (hex) : %hx\n", (void *)ps, *(unsigned short *)ps);
    printf("Adresse de i  : %p, Valeur de i  (hex) : %x\n", (void *)pi, *(unsigned int *)pi);
    printf("Adresse de l  : %p, Valeur de l  (hex) : %lx\n", (void *)pl, *(unsigned long *)pl);
    printf("Adresse de ll : %p, Valeur de ll (hex) : %llx\n", (void *)pll, *(unsigned long long *)pll);
    printf("Adresse de f  : %p, Valeur de f  (hex) : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de d  : %p, Valeur de d  (hex) : %llx\n", (void *)pd, *(unsigned long long *)pd);
    printf("Adresse de ld : %p, Valeur de ld (hex) : ", (void *)pld);
    for (int k = (int)sizeof(long double) - 1; k >= 0; k--)
        printf("%02x", bytes_ld[k]);
    printf("\n");

    /* Manipulation des variables via leurs pointeurs */
    *pc  -= 1;
    *ps  -= 1;
    *pi  -= 1;
    *pl  -= 1;
    *pll -= 1;
    *pf   = 1.0f;
    *pd   = 1.0;
    *pld  = 1.0L;

    printf("\nApres la manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  (hex) : %hhx\n", (void *)pc, *(unsigned char *)pc);
    printf("Adresse de s  : %p, Valeur de s  (hex) : %hx\n", (void *)ps, *(unsigned short *)ps);
    printf("Adresse de i  : %p, Valeur de i  (hex) : %x\n", (void *)pi, *(unsigned int *)pi);
    printf("Adresse de l  : %p, Valeur de l  (hex) : %lx\n", (void *)pl, *(unsigned long *)pl);
    printf("Adresse de ll : %p, Valeur de ll (hex) : %llx\n", (void *)pll, *(unsigned long long *)pll);
    printf("Adresse de f  : %p, Valeur de f  (hex) : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de d  : %p, Valeur de d  (hex) : %llx\n", (void *)pd, *(unsigned long long *)pd);
    printf("Adresse de ld : %p, Valeur de ld (hex) : ", (void *)pld);
    for (int k = (int)sizeof(long double) - 1; k >= 0; k--)
        printf("%02x", bytes_ld[k]);
    printf("\n");

    return 0;
}