#include <stdio.h>
#include <stdlib.h>

  int main(){

    double porcentagemAumento = 0, salarioFuncionario = 0;

    printf("Digite o salario do funcionario:\n");
    scanf("%lf",&salarioFuncionario);
    printf("Digite a porcentagem do aumento:\n");
    scanf("%lf",&porcentagemAumento);

    salarioFuncionario = salarioFuncionario + (salarioFuncionario * porcentagemAumento / 100);

    printf("\nPorcentagem de aumento = %.2lf\n",porcentagemAumento);
    printf("Novo Salario = %.2lf\n",salarioFuncionario); 

  return 0;

  }