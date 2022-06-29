/*
18) Escreva um programa em C que leia a idade de: 2 homens e de 2 mulheres
Calcule e escreva:
A soma das idades do homem mais velho com a mulher mais nova
O produto das idades do homem mais novo com a mulher mais velha. 
*/

#include <stdio.h>
int main(void)
{
  int h1, h2, m1, m2, maxh, maxm, minh, minm;
  printf("Digite a idade do 1º homem..: ");
  scanf("%d", &h1);
  printf("Digite a idade do 2º homem..: ");
  scanf("%d", &h2);
  printf("Digite a idade da 1ª mulher.: ");
  scanf("%d", &m1);
  printf("Digite a idade da 2ª mulher.: ");
  scanf("%d", &m2);
  if (h1 > h2)
  {
    maxh = h1;
    minh = h2;
  }
  else
  {
    maxh = h2;
    minh = h1;
  }

  if (m1 > m2)
  {
    maxm = m1;
    minm = m2;
  }
  else
  {
    maxm = m2;
    minm = m1;
  }
  printf("\nSoma do homem mais velho + mulher mais nova = %d", maxh + minm);
  printf("\nProduto do homem mais novo * mulher mais velha = %d", minh * maxm);

  return 0;
}