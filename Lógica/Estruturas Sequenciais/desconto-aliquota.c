#include <stdio.h>
#include <stdlib.h>

  int main(){

    double calculoSalario = 0, porcentagemAliquota = 0, valorDiaFuncionario = 0, pagamentoFinal = 0;
    int diasTrabalhadosFuncionario = 0;

    printf("======Digite os seguintes dados======\n\n");
    printf("Quanto o funcionario recebe por dia:\n");
    scanf("%lf",&valorDiaFuncionario);
    printf("Dias trabalhados:\n");
    scanf("%d",&diasTrabalhadosFuncionario);
    printf("Porcentagem da aliquota:\n");
    scanf("%lf",&porcentagemAliquota);

    calculoSalario = diasTrabalhadosFuncionario * valorDiaFuncionario;
    pagamentoFinal = calculoSalario - (calculoSalario * porcentagemAliquota / 100);

    printf("\nSalario = %.2lf\n",calculoSalario);
    printf("Novo salario com desconto = %.2lf\n",pagamentoFinal);
    
  return 0;

  }
