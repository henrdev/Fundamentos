#include <stdio.h>
#include <stdlib.h>

  int main(){

    float c = 0, f = 0;

    printf("Digite os graus Fahrenheit:\n");
    scanf("%f",&f);

    c = (f - 32) / 1.8;

    printf("Equivalente = %f graus celsius \n", c);  
    
  return 0;

  }