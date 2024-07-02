#include <stdio.h>
#include <stdlib.h>

  int main(){

    double salarioAtualFunc = 0, novoSalarioFunc = 0, porcentagemAumento = 0;

    printf("Digite o salario atual do funcionario:\n");
    scanf("%lf",&salarioAtualFunc);

    if(salarioAtualFunc <= 1000){
      porcentagemAumento = 20;
    }else if(salarioAtualFunc > 1000 && salarioAtualFunc <= 3000){
      porcentagemAumento = 30;
    }else if(salarioAtualFunc > 3000 && salarioAtualFunc <= 8000){
      porcentagemAumento = 10;
    }else{
      porcentagemAumento = 5;
    }

    novoSalarioFunc = salarioAtualFunc + (salarioAtualFunc * porcentagemAumento / 100);

    printf("Salario atual funcionario = %.2lf\n",salarioAtualFunc);
    printf("Salario com aumento = %.2lf\n",novoSalarioFunc);
    printf("Porcentagem de aumento = %.2lf\n",porcentagemAumento);

  return 0;

  }