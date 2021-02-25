/*Exerc´ıcio 3. [Recurs˜ao] Escreva uma fun¸c˜ao recursiva para calcular o valor de um n´umero inteiro de base
x elevada a um expoente inteiro y*/

#include <stdio.h>
#include <stdlib.h>


int potencia(int x, int y)
{
  if (y <= 1) {return x;}
  else{return (potencia(x,y-1)*x);}
}

void main()
{
  int base,expoente,p;

  printf("Digite o valor da base:\n" );
  scanf("%d",&base );
  printf("Digite o valor do expoente:\n" );
  scanf("%d",&expoente );

   p = potencia(base,expoente);

   printf("O resultado da potencia eh : %d\n",p );

}
