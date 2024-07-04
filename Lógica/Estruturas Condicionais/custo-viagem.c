#include <stdio.h>
#include <stdlib.h>

  int main(){

    double distanciaPercorrida = 0, valorLimiteTaxa = 0, pagamentTotal = 0;

    printf("Digite a distancia percorrida pelo veiculo\n");
    scanf("%lf",&distanciaPercorrida);

    if(distanciaPercorrida <= 200){
      valorLimiteTaxa = 0.50;
    }else{
      valorLimiteTaxa = 0.45;
    }

    pagamentTotal = distanciaPercorrida * valorLimiteTaxa;

    printf("Valor total a pagar = R$ %.2lf\n",pagamentTotal);

  return 0;

  }