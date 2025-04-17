//
// Created by Junio  on 16/04/25.
//
#include<stdio.h>

int main(){
  int numero;

  while (numero != 0) {
    printf("ENTRE COM NÚMERO INTERIO ou  0 PARA SAIR: ");
    scanf("%i",&numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
      printf("O numero: %i eh par \n", numero);
    } else {
      printf("O numero: %i não eh par \n", numero);
    }

    printf("Resto da divisão %d\n", numero % 2);
  }

  return 0;
}