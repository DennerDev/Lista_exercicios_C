//Exercico 08 - (Concluido) 

/* Faça um programa em C que leia 3 (três) notas de um aluno.
 Calcule a média e apresente a média na tela; */

#include <stdio.h>
int main (void) {
    float n1, n2, n3, med;

    printf ("Digite a primeira nota do aluno: ");
    scanf  ("%f", &n1);

    printf ("Digite a segunda nota do aluno: ");
    scanf  ("%f", &n2);

    printf ("Digite a terceira nota do aluno: ");
    scanf  ("%f", &n3);

    med = (n1+n2+n3)/3;
    
    printf ("Sua media e %2.f ", med);

    if (med >= 7)   printf ("\nAprovado");
    else            printf ("\nReprovado");

    return 0;
}

