//
// Created by Junio  on 16/04/25.
//
#include<stdio.h>

int main(){
  int idade = 0;

  printf("Informe sua idade: ");
  scanf("%i", &idade);

  if(idade >= 16){
    if(idade >= 18 && idade <= 70){
      printf("Você é obrigado a votar\n");
      } else {
        printf("Você pode votar\n");
        }
  } else {
    printf("Você não pode votar!\n");
  }
  return 0;
}
