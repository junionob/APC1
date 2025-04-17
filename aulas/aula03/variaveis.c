//
// Created by Junio  on 26/03/25.
//
#include <stdio.h>

int main() {
  char tecla;
  tecla = 'A';
  printf("Tecla = %c\n", tecla);

  tecla = 100;
  printf("Tecla = %c\n", tecla);

  int numero = 10;
  printf("Número = %i\n", numero);

  {
    int numero = 35;
    printf("Número = %c \n", numero);
  }

  float media_aritimetica = 9.5f;
  printf("Média:  %.1f \n", media_aritimetica);

  double dizima = 2.33333333333333;

  printf("Dizima: %.8f \n", dizima);

  return 0;
}


