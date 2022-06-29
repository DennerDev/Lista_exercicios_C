// Exercicio 10 - (Concluido)

/*Faça um programa em C que leia o sexo (M ou F) e a altura (em metros) de uma pessoa.
Informe seu peso ideal, usando as seguintes fórmulas:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7 
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{

        char sexo;
        float alt;
        printf("Digite seu sexo <F/M>: ");
        scanf("%s", &sexo);
        
        if (sexo != 'f' && sexo != 'F' && sexo != 'M' && sexo != 'm')
                printf("Sexo inválido!!!!!");
        else
        {
                printf("Digite sua altura: ");
                scanf("%f", &alt);

                if ((sexo == 'M') || (sexo == 'm'))
                        printf("\nVocê é homem e seu peso ideal é %.2f ", 72.7 * alt - 58);
                else
                        printf("\nVocê é mulher e seu peso ideal é %.2f ", 62.1 * alt - 44.7);
        }
        return 0;
}
