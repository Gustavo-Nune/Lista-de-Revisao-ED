/*Exerc´ıcio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma fun¸c˜ao onde ela deve depositar
o resultado de seus c´alculos. Escreva uma fun¸c˜ao que converta uma quantidade de minutos na nota¸c˜ao
horas/minutos. A fun¸c˜ao recebe como parˆametro:
• um n´umero inteiro (totalMinutos); e
• os endere¸cos de duas vari´aveis inteiras, horas e minutos.
A fun¸c˜ao deve ent˜ao atribuir valores `as vari´aveis passadas por referˆencia, de modo que os valores atribu´ıdos
respeitem as seguintes condi¸c˜oes:
minutos < 60
60 ∗ horas + minutos = totalMinutos
Escreva tamb´em a fun¸c˜ao principal (main) que use a fun¸c˜ao desenvolvida.*/

#include <stdio.h>
#include <stdlib.h>

int converteMinutos(int total,int *Ponthr,int *Pontmin)
{
  int resto;

   if(total>=60){
    *Ponthr = total/60 ;
    total = total%60;
  }
  if(total<60){
     *Pontmin = total%60;
  }
}

void main()
{
  int totalMinutos,horas,minutos;

  printf("Digite a quantidade de minutos\n" );
  scanf("%d",&totalMinutos);

  converteMinutos(totalMinutos,&horas,&minutos);

  printf("Os minutos convertidos sao : %d:%d\n",horas,minutos );

}
