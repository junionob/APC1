//
// Created by Junio  on 02/04/25.
//
#include<stdio.h>

int main(){
  // ++ aumenta 1
  // -- diminui 1

  int num = 5;
  printf("O pre-incremento de %i é %i\n", num, ++num);
  printf("O decremento de %i é %i\n", num, --num);
  printf("O pos-incremento de %i é %i\n", num, num++);
  printf("O pos-decremento de %i é %i\n", num, num--);

}