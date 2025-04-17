//
// Created by Junio  on 02/04/25.
//
#include <stdio.h>

int main() {
  int numero;

  printf("Informe um número inteiro: ");
  scanf("%i", &numero);
  printf("O número informado foi: %i\n", numero);

  float nota;
  printf("Informe uma nota entre 0.0 a 9.9 :");
  scanf("%f", &nota);
  printf("Você digitou: %.1f\n", nota );

}