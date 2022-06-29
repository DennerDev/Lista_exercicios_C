// Exercico 09 - (Concluido)

// Faça um programa em C que leia os pontos obtidos numa prova
// e o programa deverá classificarde acordo com o seguinte padrão:  

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pontuacao;

    printf ("Digite o a sua pontuação de 0 a 100: ");
    scanf  ("%d",&pontuacao);

    if      (pontuacao <= 30)  printf ("Sua pontuação foi regular %d",pontuacao);
    else if (pontuacao <= 60)  printf ("Sua pontuação foi Bom %d",pontuacao);
    else if (pontuacao <= 90)  printf ("Sua pontuação foi Muito Boa %d",pontuacao) ;
    else if (pontuacao <= 100) printf ("Sua pontuação foi Ótima %d",pontuacao);
    else                       printf ("Numero invalido %d",pontuacao);
    
    
    return 0;
}
