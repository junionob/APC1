//
// Created by Junio  on 26/03/25.
//
#include <stdio.h>

int main() {
  printf("O tipo 'char' ocupa %lu bytes(s) na memória.\n ", sizeof(char));
  printf("O tipo 'int' ocupa %lu bytes(s) na memória.\n ", sizeof(int));
  printf("O tipo 'float' ocupa %lu bytes(s) na memória.\n ", sizeof(float));
  printf("O tipo 'double' ocupa %lu bytes(s) na memória.\n ", sizeof(double));
  printf("O tipo 'void' ocupa %lu bytes(s) na memória.\n ", sizeof(void));
  return 0;
}