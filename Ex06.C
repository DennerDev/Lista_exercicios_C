// Exercicio 06 - (Concluido) 

/* O índice de massa corpórea de uma pessoa (IMC) é dado pelo 
seu peso (em quilogramas) dividido
pelo quadrado de sua altura (em metros).
Faça um programa em C que leia o peso e altura de uma pessoa. */


#include <stdio.h>
int main(void) {
    float alt, pes, imc;    

    printf ("Digite a altura: ");
    scanf  ("%f",&alt);

    printf ("Digite o peso: ");
    scanf  ("%f",&pes);


    imc = pes/(alt*alt);
    printf ("Seu Imc e %.2f ", imc);

    if        (imc <= 18.5)  printf ("Voce esta Magro");
    else   if (imc <= 25 )   printf ("Peso Ideal");
    else   if (imc <= 30 )   printf ("Sobrepeso");
    else                     printf ("Obeso");
    

    return 0;
}

