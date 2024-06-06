#include <stdio.h>
#include <stdlib.h>

  int main(){

    double valorDiaVeiculo = 90, valorPorKm = 0.20, pagamentFinalVeiculo = 0;
    int diasAlugadosVeiculo = 0, distanciaPercorrida = 0;

    printf("Digite a quantidade de dias alugadas do veiculo:\n");
    scanf("%d",&diasAlugadosVeiculo);
    printf("Digite a quantidade de KM percorrido pelo veiculo:\n");
    scanf("%d",&distanciaPercorrida);

    pagamentFinalVeiculo = (valorDiaVeiculo * diasAlugadosVeiculo) + (valorPorKm * distanciaPercorrida);

    printf("\nPagamento Final = %.2lf\n",pagamentFinalVeiculo);

  return 0;

  }