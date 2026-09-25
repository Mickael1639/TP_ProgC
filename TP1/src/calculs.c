#include <stdio.h>

int main(void)
{
    int num1 = 12;
    int num2 = 5;
    char op = '+';
    int resultat;

    switch (op)
    {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 == 0)
                printf("Erreur : division par zero\n");
            else
            {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            }
            break;

        case '%':
            if (num2 == 0)
                printf("Erreur : modulo par zero\n");
            else
            {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Operateur inconnu : %c\n", op);
    }

    return 0;
}