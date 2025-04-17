//
// Created by Junio  on 02/04/25.
//
#include <stdio.h>

int main() {
  char tecla;
  printf("Digite uma tecla: \n");
  scanf("%c", &tecla); //não sabe tecla = valor então precisa acessar endereço da varaável com operador '&';

  getchar();
  printf("Digitado: %c\n", tecla);

  printf("pressione outra tecla e deposis ENTER: ");
  scanf("%c", &tecla);
  getchar();
  printf("Você digitou '%c' \n", tecla);

  char nome[31];
  printf("Informe seu nome: ");
  scanf("%[^\n]s", nome);
  printf("Olá: %s!\n", nome);

  return 0;
}