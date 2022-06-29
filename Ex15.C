// Exercico 15 - (Concluido)


#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale (LC_ALL,"Portuguese");
    
    int a,b,c;
  printf ("Digite o 1º nº: ");
  scanf ("%d",&a);

  printf ("Digite o 2º nº: ");
  scanf ("%d",&b);

  printf ("Digite o 3º nº: ");
  scanf ("%d",&c);
  
  if (a==b && a==c && b==c) printf ("TODOS os números são iguais");
  else{
          if (a>=b && a>c)   // a é o MAIOR
           {
             if (b>c)  printf ("\nA soma entre %d com %d é %d",a,b,a+b);
             else      printf ("\nA soma entre %d com %d é %d",a,c,a+c);
           }

          else if (b>a && b>=c)  // b é o MAIOR
               {
                 if (a>c) printf ("\nA soma entre %d com %d é %d",b,a,b+a);
                 else     printf ("\nA soma entre %d com %d é %d",b,c,b+c);
               } 
              else if (a>b) printf ("\nA soma entre %d com %d é %d",c,a,c+a);
                   else     printf ("\nA soma entre %d com %d é %d",c,b,c+b);
      }
    return 0;
}

