/*Exerc´ıcio 5. [Structs, Ponteiros] Defina um tipo abstrato de dados que ir´a representar bandas de m´usica.
Essa estrutura deve ter o nome da banda, que tipo de m´usica ela toca, o n´umero de integrantes, e em que
posi¸c˜ao do ranking essa banda est´a dentre as suas 5 bandas favoritas.
a) Crie uma fun¸c˜ao para preencher as 5 estruturas de bandas criadas no exemplo passado;
b) Ap´os criar e preencher, exiba todas as informa¸c˜oes das bandas/estruturas. N˜ao se esque¸ca de usar o
operador → para preencher os membros das structs;
p´agina 1 de 2
c) Crie uma fun¸c˜ao que pe¸ca ao usu´ario um n´umero de 1 at´e 5. Em seguida, seu programa deve exibir
informa¸c˜oes da banda cuja posi¸c˜ao no seu ranking ´e a que foi solicitada pelo usu´ario.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
char nome[20];
char tipodeMusica[20];
int numeroInteg;
int ranking;
}Banda;


int preencheBanda(Banda *grupo)
{

  printf("Digite o nome da banda : " );
  fgets(grupo->nome,20,stdin);
  grupo->nome[strcspn(grupo->nome,"\n")]='\0';
  printf("Digite o tipo de musica da banda : " );
  fgets(grupo->tipodeMusica,20,stdin);
  grupo->tipodeMusica[strcspn(grupo->tipodeMusica,"\n")]='\0';
  printf("Digite o numero de integrantes da banda : " );
  scanf("%d",&grupo->numeroInteg );
  printf("Digite o ranking da banda : " );
  scanf("%d",&grupo->ranking );
  getchar();
  printf("\n****************************************\n" );

}
int posiRank(Banda *grupo)
{
  int rank;

  printf("Digite o ranking entre 1 e 5 que queira vizualizar :" );
  scanf("%d",rank );

  if (rank && grupo->ranking == 1) { printf("A banda na 1ª posicao eh : %s \n",grupo->nome );}
  if (rank && grupo->ranking == 2) { printf("A banda na 2ª posicao eh : %s \n",grupo->nome );}
  if (rank && grupo->ranking == 3) { printf("A banda na 3ª posicao eh : %s \n",grupo->nome );}
  if (rank && grupo->ranking == 4) { printf("A banda na 4ª posicao eh : %s \n",grupo->nome );}
  if (rank && grupo->ranking == 5) { printf("A banda na 5ª posicao eh : %s \n",grupo->nome );}
  if (rank > 5  || rank <= 0  ) { printf("Ranking invalido/n" );}

}

void main()
{
  Banda grupo[5];

  printf("**A seguir coloque as informaçoes de 5 bandas das quais sao suas favoritas**\t \n\n" );
  for (int i = 0; i < 5; i++) { preencheBanda(&grupo[i]);}

  for (int i = 0; i < 5; i++) {
    printf("#O nome da banda : %s\t#Tipo de musica: %s\t#Integrantes: %d\t#Ranking: %d\n",grupo[i].nome,grupo[i].tipodeMusica,grupo[i].numeroInteg,grupo[i].ranking );
    printf("*************************************************************************************************\n" );
  }

  for (int i = 0; i < 5; i++) { posiRank(&grupo[i]); }

}
