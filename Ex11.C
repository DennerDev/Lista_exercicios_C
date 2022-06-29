// Exercico - 11 (Concluido)

/*
Faça um programa em C que leia o sexo (M ou F) e a altura (em metros) de uma pessoa.
Informe seu peso ideal, usando as seguintes fórmulas:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7*/

#include <stdio.h>
int main(void) 
{
  float a, b, c;
  printf ("Digite a medida do 1º lado do triângulo: ");
  scanf ("%f",&a);
  printf ("Digite a medida do 2º lado do triângulo: ");
  scanf ("%f",&b);
  printf ("Digite a medida do 3º lado do triângulo: ");
  scanf ("%f",&c);

  if ((a<b+c) && (b<a+c) && (c<a+b) )
  {
      printf ("Existe triângulo");
      if ((a==b) && (b==c) && (a==c))       printf ("\nEquilatero");
      else if ((a==b) || (b==c) || (a==c))  printf ("\nIsósceles"); 
           else                             printf ("\nEscaleno");
  }
  else  printf ("As medidas NÃO formam um triângulo!!! ");

  return 0;
}
