#include <stdio.h>
#include <stdlib.h>

  int main(){

    double alturaParede = 0, larguraParede = 0, litroPorMetro = 2, valorArea = 0, valorFinal = 0;

    printf("Digite a altura da parede:\n");
    scanf("%lf",&alturaParede);
    printf("Digite a largura da parede:\n");
    scanf("%lf",&larguraParede);

    valorArea = alturaParede * larguraParede;
    valorFinal = valorArea / 2;

    printf("Area a ser pintada: %.2lf metros\n",valorArea);
    printf("Tinta necessaria: %.2lf Litros\n",valorFinal);

  return 0;

  }

