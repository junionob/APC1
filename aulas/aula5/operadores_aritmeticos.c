//
// Created by Junio  on 02/04/25.
//
#include<stdio.h>
int main(){
  // + SOMA
  // - SUBTRAÇÃO
  // * MULTIPLICAÇÃO
  // / DIVISÃO
  // % RESTO DA DIVISÃO

  int num1 = 10;
  int num2 = 20;

  printf("\n");

  int sum = num1 + num2;
  printf("A soma de %i e %i = %i \n", num1, num2, sum);

  int subtracao = num1 - num2;
  printf("A subtração de %i e %i = %i \n", num1, num2, subtracao);

  int multiplicacao = num1 * num2;
  printf("A multiplicacao de %i por %i = %i \n", num1, num2, multiplicacao);

  float divisao = num1 * 1.0f / num2;
  printf("A divisão de %i por %i = %.1f \n", num1, num2, divisao);

  int resto = num1 % num2;
  printf("O resto da divisão entre %i e %i = %i \n", num1, num2, resto);



  int oper = 1 / 2 + 5 * 4 % 1 - 2;
  printf("A operação: '1 / 2 + 5 * 4 %% 1 - 2' resulta em: %i\n", oper );

  oper = 1 / 2 + 5 * 4 % (1 - 2);
  printf("A operação: '1 / 2 + 5 * 4 %% (1 - 2)' resulta em: %i", oper );

  printf("\n");
  return 0;
  }