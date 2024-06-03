#include <stdio.h>
#include <stdlib.h>

  int main(){

    float polegadas = 0, cm = 0;

    printf("Digite as medidas em polegadas: ");
    scanf("%f",&polegadas);

    cm = polegadas * 2.54;

    printf("Equivalente = %.2f CM\n",cm);

  return 0;

  }