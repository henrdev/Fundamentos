#include <stdio.h>
#include <stdlib.h>

  int main(){

    int num = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    if(num % 2 == 0){
      printf("Numero par = %d\n",num);
    }else{
      printf("Numero impar = %d\n",num);
    }

  return 0;

  }