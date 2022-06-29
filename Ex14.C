// Exercico - 14  (Concluido)


/* Faça um programa em C que leia dois números inteiros.
Informe se os números são iguais ou, caso não sejam, exiba-os em ordem crescente.*/

#include <stdio.h>
int main(void)
{
  int a, b,c ;
  printf ("Digite o 1º nº: ");
  scanf ("%d",&a);

  printf ("Digite o 2º nº: ");
  scanf ("%d",&b);
  
  printf ("Digite o 3º nº: ");
  scanf ("%d",&c);
  
  if ((a==b)&& (a==c)&& (b==c))   printf ("Os números são iguais");
  else if ( (a>b) && (a>=c))      printf ("O maior é %d ",a);
       else if ( (b>=a) && (b>c)) printf ("O maior é %d ",b);
            else                  printf ("O maior é %d ",c);

  return 0;
}