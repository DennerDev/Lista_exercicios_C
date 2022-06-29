// Exercicio 03 -  (Concluido)

/*Faça um programa em C que peça para o usuário digitar o salário e o total gasto no mês.
O programa deverá apresentar na tela: */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int salario, gastos;

    printf ("Digite o valor do seu salário mensal: ");
    scanf  ("%d",&salario);

    printf ("Digite a volor gasto este mês: ");
    scanf  ("%d",&gastos);

    if   (salario > gastos)   printf ("Gastos dentro do orçamento");
    else                      printf ("Orçamento estourado");
    
    return 0;
}
