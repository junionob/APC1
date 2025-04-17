//
// Created by Junio  on 02/04/25.
//
#include<stdio.h>

int main(){
  // && - E
  // || - ou
  // ! - nao
  printf("\n");
  printf("Tabela da verdade\n");
  printf("0 e 0 = %i\n", 0 && 0);
  printf("1 e 0 = %i\n", 1 && 0);
  printf("0 e 1 = %i\n", 0 && 1);
  printf("1 e 1 = %i\n", 1 && 1);

  printf("\n");
  printf("0 ou 0 = %i\n", 0 || 0);
  printf("1 ou 0 = %i\n", 1 || 0);
  printf("0 ou 1 = %i\n", 0 || 1);
  printf("1 ou 1 = %i\n", 1 || 1);

  printf("\n");
  printf("Não 0 = %i\n", !0);
  printf("Não 1 = %i\n", !1);

  printf("\n");
}