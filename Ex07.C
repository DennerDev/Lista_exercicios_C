// Exercico 07 - (Concluido)

/* Sabendo que a UNICID participará de um campeonato de futebol com uma universidade visitante,
faça um programa em C que:
Leia o placar de um jogo de futebol (os gols de cada time: Unicid X universidade visitante)
Informe o resultado da UNICID: Vitória, Derrota ou Empate.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Digite a quantidade de GOLS marcados pela Unicid: ");
    scanf ("%d",&n1);

    printf("Digite a quantidade de GOLS marcados pela Universodade Visitante: ");
    scanf ("%d",&n2);

    if (n1 > n2)             printf ("Vitoria da Unicid ");
    else if (n1 < n2)        printf ("Derrota da Unicid!!. Vitoria da Universidade visitante! ");
    else                     printf ("O Jogo Termina empatado!! ");

    return 0;
}
