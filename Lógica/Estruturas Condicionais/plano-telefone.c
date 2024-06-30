#include <stdio.h>
#include <stdlib.h>

  int main(){

    double tarifa = 50, pagamentoFinal = 0;
    int consumoDeMinutos = 0;

    printf("Digite a quantidade de minutos consumidos:\n");
    scanf("%d",&consumoDeMinutos);

    if(consumoDeMinutos > 100){
      pagamentoFinal = (consumoDeMinutos - 100) * 2 + tarifa;
    }else{
      pagamentoFinal = tarifa;
    }

    printf("Pagamento Total =  %.2lf\n",pagamentoFinal);

  return 0;

  }