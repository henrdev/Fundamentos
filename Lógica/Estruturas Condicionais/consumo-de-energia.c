#include <stdio.h>
#include <stdlib.h>

  int main(){

    double valorKwh = 0.75, tarifaMinima = 65.00, consumoEnergia = 0, contaEnergia = 0;

    printf("Digite o consumo de energia\n");
    scanf("%lf",&consumoEnergia);

    contaEnergia = consumoEnergia * valorKwh;

    if(contaEnergia <= tarifaMinima){
      printf("Valor a ser pago = R$ %.2lf\n", tarifaMinima);
    }else{
      printf("Valor a ser pago = R$ %.2lf\n", contaEnergia);
    }   

  return 0;

  }