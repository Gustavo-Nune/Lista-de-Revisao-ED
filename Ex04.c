/*Exerc´ıcio 4. [Aloca¸c˜ao Dinˆamica] Fa¸ca um programa que leia um valor N e crie dinamicamente um
vetor com essa quantidade de elementos. Em seguida, passe esse vetor para uma fun¸c˜ao que vai ler os
elementos desse vetor. Depois, no programa principal, imprima os valores do vetor preenchido. Al´em disso,
antes de finalizar o programa, lembre-se de liberar a ´area de mem´oria alocada para armazenar os valores do
vetor.
*/

#include <stdlib.h>
#include <stdio.h>


void main()
{
  int n,*vetor;

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n );

  vetor = (int *)malloc(n*sizeof(int));

  for (size_t i = 0; i < n; i++) {
    printf("%d\n",vetor[i] );
  }

  free(vetor);
}
