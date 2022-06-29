// Exercicio 05 - (Concluido)
/*
Faça um programa em C que leia o valor atual do salário de um funcionário. 
Informe o valor de seu salário REAJUSTADO, de acordo com os percentuais indicados a seguir: 
50% para aqueles que recebem até R$ 2.000,00. 
20% para aqueles que recebem mais de R$ 2.000,00 e menos de R$ 5.000,00. 
10% para os demais.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float sal;

    printf ("Digite o seu salário atual: ");
    scanf  ("%f",&sal);

    if      (sal <= 2000)      printf("Seu reajuste salárial será de 50%% %.2f ", sal*1.50);
    else if (sal <= 5000)      printf("Seu reajuste salárial será de 20%% %.2f ", sal*1.20);
    else                       printf("Seu reajuste salárial será de 10%% %.2f ", sal*1.10);
    
    
    

    return 0;
}
