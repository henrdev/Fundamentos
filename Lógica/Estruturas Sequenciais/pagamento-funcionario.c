#include <stdio.h>
#include <stdlib.h>

  int main(){

    int numeroFuncionario = 0, horasTrabalhadasFuncionario = 0, diasTrabalhadosFuncionario = 0;
    double valorHoraFuncionario = 0, pagamentoFuncionario = 0, salarioFuncionario = 0;

    printf("Digite o numero do funcionario:\n");
    scanf("%d",&numeroFuncionario);
    printf("Digite a quantidade de dias trabalhadas pelo funcionario:\n");
    scanf("%d",&diasTrabalhadosFuncionario);
    printf("Digite o valor hora do funcionario:\n");
    scanf("%lf",&valorHoraFuncionario);
    printf("Digite as horas trabalhadas por esse funcionario:\n");
    scanf("%d",&horasTrabalhadasFuncionario);

    salarioFuncionario = valorHoraFuncionario * horasTrabalhadasFuncionario;
    pagamentoFuncionario = salarioFuncionario * diasTrabalhadosFuncionario;

    printf("Dados Funcionario\nNumero Funcionario: %d\nDias Trabalhados: %d\nSalario Funcionario: %.2lf\n",numeroFuncionario,diasTrabalhadosFuncionario,pagamentoFuncionario);

  return 0;

  }