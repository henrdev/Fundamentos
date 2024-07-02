#include <stdio.h>
#include <stdlib.h>

  int main(){

    double velocidadeMinima = 80, velocidadeDoVeiculo = 0, multa = 0;

    printf("Digite a velocidade do veiculo\n");
    scanf("%lf",&velocidadeDoVeiculo);

    if(velocidadeDoVeiculo <= 80){
      printf("Passou no radar\n");
      return 0;
    }else{
      printf("\nPego no radar!!!\n");
    }

    multa = (velocidadeDoVeiculo - velocidadeMinima) * 5;

    printf("Multado em = %.2lf R$\n", multa);

  return 0;

  }