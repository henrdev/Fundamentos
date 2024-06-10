#include <stdio.h>
#include <stdlib.h>

  int main(){
  
    int distanciaPercorrida = 0;
    float combustivelGasto = 0, consumoMedio = 0;

    printf("Digite a distancia percorrida em KM: \n");
    scanf("%d",&distanciaPercorrida);
    printf("Digite a quantidade de combustivel gasto: \n");
    scanf("%f",&combustivelGasto);

    consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("Consumo medio = %.2f KM/L\n",consumoMedio);
  
  return 0;

  }