#include <stdio.h>
#include <stdlib.h>

  int main(){

    double salarioFuncionario = 0, salarioComDesconto = 0, desconto = 0;

    printf("Digite o salario do funcionario\n");
    scanf("%lf",&salarioFuncionario);

    if(salarioFuncionario <= 1903.58){
      desconto = 0.0;
    }else if(salarioFuncionario > 1903.58 && salarioFuncionario <= 2826.65){
      desconto = 7.50;
    }else if(salarioFuncionario > 2826.65 && salarioFuncionario <= 3751.05){
      desconto = 15.0;
    }else if(salarioFuncionario > 3751.05 && salarioFuncionario <= 4664.68){
      desconto = 22.50;
    }else{
      desconto = 27.50; 
    }

    salarioComDesconto = salarioFuncionario - (salarioFuncionario * desconto / 100);

    printf("\nSalario sem desconto = R$ %.2lf\n",salarioFuncionario);
    printf("Salario com desconto = R$ %.2lf\n",salarioComDesconto);
    printf("Taxa de desconto aplicado = %.2lf\n",desconto);

  return 0;

  }