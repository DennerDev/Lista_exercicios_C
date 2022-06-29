// Exercico 04 - (Concluido)


#include <stdio.h>
int main(void) {
    int n1, n2;

    printf ("Digite o primeiro numero: ");
    scanf  ("%d",&n1);
    
    printf ("Digite o primeiro numero: ");
    scanf  ("%d",&n2);

    if (n1 > n2)         printf ("O maior e %d ", n1);
    else if (n2 > n1)    printf ("O maior e %d ", n2);
    else                 printf ("Os numeros sao iguais ");

    return 0;
}