// Exercicio 13 -
/*
Num certo país da América do Sul, a moeda nacional é a merreca (M$). No sistema monetário deste 
país não há cédulas, somente moedas de: M$ 100, M$ 50, M$ 10, M$ 5 e M$ 1. 
Faça um programa em C que leia um valor inteiro. 
Apresente na tela a quantidade mínima de moedas para fazer o valor especificado. 
Por exemplo, se o valor for M$ 379, devemos ter: 
3 moeda(s) de M$ 100 
1 moeda(s) de M$ 50 
2 moeda(s) de M$ 10 
1 moeda(s) de M$ 5 
4 moeda(s) de M$ 1 
Dica: considere apenas valores inteiros e use operações de divisão inteira (div) e resto da divisão 
inteira (%). */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    
    printf("digite um valor inteiro: ");
    scanf("%i", &num);
    printf("\nmoedas de 100 ---> %i", num / 100);
    num = num % 100;
    printf("\nmoedas de 50 ---> %i", num / 50);
    num = num % 50;
    printf("\nmoedas de 10 ---> %i", num / 10);
    num = num % 10;
    printf("\nmoedas de 5 ---> %i", num / 5);
    num = num % 5;
    printf("\nmoedas de 1 ---> %i", num / 1);
    num = num % 1;

    return 0;
}
