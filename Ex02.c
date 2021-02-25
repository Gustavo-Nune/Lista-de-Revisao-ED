/*Exerc´ıcio 2. [Arquivos] Fa¸ca um programa que receba do usu´ario um arquivo texto. Crie outro arquivo
texto de sa´ıda contendo o texto do arquivo de entrada original, por´em substituindo todas as vogais pelo
caractere ‘*’. Al´em disso, mostre na tela quantas linhas esse arquivo possui. Dentro do programa fa¸ca
o controle de erros, isto ´e, insira comandos que mostre se os arquivos foram abertos com sucesso, e caso
contr´ario, imprima uma mensagem de erro encerrando o programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QNTSLETRAS 33

// Main
void main()
{
  FILE *arqEntrada;
  FILE *arqSaida;

// Variaveis
char vogal[] = {'a','e','i','o','u','A','E','I','O','U'},letexto[QNTSLETRAS];

// Abre os arquivos
  arqEntrada = fopen("Entrada.txt","r");
  arqSaida = fopen("Arquivo_Criptografado.txt","w");

// Verifica se há erros
  if(arqEntrada == NULL)
  {
    printf("\n\n#### Ocorreu um erro ao abrir o arquivo ####\n#### O programa esta sendo encerrado ####\n\n" );
  }
  if(arqSaida == NULL)
  {
    printf("\n\n#### Ocorreu um erro ao abrir o arquivo ####\n#### O programa esta sendo encerrado ####\n\n" );
  }

// Copia os arquivos e escreve na string
  fread(&letexto,sizeof(char),QNTSLETRAS,arqEntrada);

// Troca as as vogais por '*'
    for (int k = 0; k < QNTSLETRAS; k++) {
    for (int i = 0; i < 10; i++) {
      if (letexto[k] == vogal[i]) {
        letexto[k] = '*';
      }
    }
  }

// Escreve no arquivo de saida
  fwrite(&letexto,sizeof(char),QNTSLETRAS,arqSaida);

// Fecha os arquivos
fclose(arqEntrada);
fclose(arqSaida);
}
