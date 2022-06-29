// Exercico 17 -Conclido

/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
--> Álcool até 20 litros, desconto de 3% por litro
--> Álcool acima de 20 litros, desconto de 5% por litro
>>> Gasolina até 20 litros, desconto de 4% por litro
>>> Gasolina acima de 20 litros, desconto de 6% por litro
Escreva um programa em C que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina).
Calcule e imprima o valor a ser pago pelo cliente sabendo que o preço: 
--> o preço do litro da gasolina é R$ 5,30 
--> o preço do litro do álcool é R$ 3,90.
---------------------------------------------------------------------------------------

100 * 1       = 100
100 * 1.50    = 150
100 * 1.20    = 120
100 * 1.15    = 115

100 * 0.90    = 90
100 * 0.95    = 95
100 * 0.70    = 70
100 * 0.97    = 97
100 * 0.96    = 96
100 * 0.94    = 94
---------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
   char tipo;
   float li;
   
   printf ("Digite o tipo de combustível <A/G>: ");
   scanf ("%s",&tipo);
  
   if (tipo!='a' && tipo!='A' && tipo!='g' && tipo!='G') printf ("Tipo de combustível inválido!!");
   else{
           printf ("Quantos litros? ");
           scanf ("%f",&li);
           
           if (tipo=='a' || tipo =='A')
           {
                if (li <=20) printf ("Álcool: 3%% de desconto e pagará %.2f reais",li*3.90*0.97);
                else         printf ("Álcool: 5%% de desconto e pagará %.2f reais",li*3.90*0.95);
           }
           else if (li <=20) printf ("Gasolina: 4%% de desconto e pagará %.2f reais",li*5.30*0.96);
                else         printf ("Gasolina: 6%% de desconto e pagará %.2f reais",li*5.30*0.94);
       }
    return 0;
}

