#include <stdio.h>
#include <stdlib.h>

  int main(){

    double pi = 3.14159, raio = 0, area = 0;

    printf("Digite o valor do raio:\n");
    scanf("%lf",&raio);

    area = pi * (raio*raio);

    printf("Valor area do circulo = %.2lf metros\n",area);

  return 0;

  }
