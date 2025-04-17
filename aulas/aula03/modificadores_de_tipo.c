//
// Created by Junio  on 26/03/25.
//
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  // unsigned char -> de 0 a 255

  // unsigned int -> de 0 a 4294967294
  // short int -> -32mil a 32mil
  // unsigned short int -> 0  a 65mil
  // long int -> -nonilhao a nonilhao
  // unsigned long int -> 0 a vigitinlhao

  // long double -> quase 0 a um numero grande

  printf("O tipo 'short int' ocupa %i bytes\n", sizeof(short int));
  printf("O tipo 'long int' ocupa %i bytes\n", sizeof(long int));
  printf("O tipo 'long double' ocupa %i bytes\n", sizeof(long double));

  printf("\n");

  printf("O tipo 'unsigned char' vai de 0 a %i \n", UCHAR_MAX);
  printf("O tipo 'unsigned int' vai de 0 a %u \n", UINT_MAX);
  printf("O tipo 'short int' vai de %i a %i \n", SHRT_MIN, SHRT_MAX);
  printf("O tipo 'unsigned short int' vai de 0 a %i \n", USHRT_MAX);
  printf("O tipo 'long int' vai de %li a %li \n", LONG_MIN, LONG_MAX);
  printf("O tipo 'unsigned long int' vai de 0 a %u \n", ULONG_MAX);
  printf("O tipo 'long double' vai de %E a %E \n", LDBL_MIN, LDBL_MAX);

  return 0;
}