// Exercicio - 12  (Cooncluido)
/*
Faça um programa em C que leia um número inteiro entre 1 e 12.
Informe o mês correspondente por extenso.
Caso o usuário forneça um número fora do intervalo indicado, exiba uma mensagem de erro.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mes;

    printf ("Digite o numero do mês coresponde: ");
    scanf  ("%d",&mes);

    if      (mes <= 1)   printf ("Voce está no mês de Janeiro:    %d",mes);
    else if (mes <= 2)   printf ("Voce está no mês de Fevereiro:  %d",mes);
    else if (mes <= 3)   printf ("Voce está no mês de Marco:      %d",mes);
    else if (mes <= 4)   printf ("Voce está no mês de Abril:      %d",mes);
    else if (mes <= 5)   printf ("Voce está no mês de Maio:       %d",mes);
    else if (mes <= 6)   printf ("Voce está no mês de Junho:      %d",mes);
    else if (mes <= 7)   printf ("Voce está no mês de Julho:      %d",mes);
    else if (mes <= 8)   printf ("Voce está no mês de Agosto:     %d",mes);
    else if (mes <= 9)   printf ("Voce está no mês de Setembro:   %d",mes);
    else if (mes <= 10)  printf ("Voce está no mês de Outobro:    %d",mes);
    else if (mes <= 11)  printf ("Voce está no mês de Novembro:   %d",mes);
    else if (mes <= 12)  printf ("Voce está no mês de Dezembro:   %d",mes);
    else                 printf ("Erro !!, Digite um numero de 1 a 12, apenas:  %d",mes);
    
    
    return 0;
}