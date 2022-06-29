// Exercicio 16 -

/*
Ler 3 números (considere que poderá ocorrer valores iguais). Apresente os números em ordem 
CRESCENTE.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("digite um numero: ");
    scanf("%i", &a);

    printf("digite um numero: ");
    scanf("%i", &b);

    printf("digite um numero: ");
    scanf("%i", &c);
    
    if (a >= b && a >= c && b >= c)
        printf("ordem crescente %i %i %i", c, b, a);
    else if (b >= a && b >= c && a >= c)
        printf("ordem crescente %i %i %i", c, a, b);
    else if (c >= a && c >= b && a >= b)
        printf("ordem crescente %i %i %i", b, a, c);
    else if (c >= a && c >= b && b >= a)
        printf("ordem crescente %i %i %i", a, b, c);
    else if (b >= c && b >= a && c >= a)
        printf("ordem crescente %i %i %i", a, c, b);
    else
        printf("ordem crescente %i %i %i", b, c, a);
    return 0;
}
