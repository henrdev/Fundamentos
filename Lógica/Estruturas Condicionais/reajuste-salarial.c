#include <stdio.h>
#include <stdlib.h>

  int main(){

    double salarioAtualFuncionario = 0, novoSalarioFuncionario = 0, porcentagemAumentoSalarial = 0;
    int anosDeEmpresaFuncionario = 0, generoSexualFuncionario = 0;
    
    printf("==========TABELA SALARIAL==========\n");
    printf("MULHERES:\n");
    printf("MENOS DE 15 ANOS = 5 PORCENTO\n");
    printf("ENTRE 15 E 20 ANOS = 12 PORCENTO\n");
    printf("ACIMA DE 20 = 23 PORCENTO\n");
    printf("===================================\n");
    printf("HOMENS:\n");
    printf("MENOS DE 20 ANOS = 3 PORCENTO\n");
    printf("ENTRE 20 E 30 ANOS = 13 PORCENTO\n");
    printf("ACIMA DE 30 = 25 PORCENTO\n");
    printf("===================================\n");

    printf("\nDigite seu genero sexual: 1 - MASCULINO OU 2 - FEMININO\n");
    scanf("%d",&generoSexualFuncionario);
    printf("Digite o salario atual do funcionario:\n");
    scanf("%lf",&salarioAtualFuncionario);
    printf("Digite quantos anos o funcionario tem de empresa\n");
    scanf("%d",&anosDeEmpresaFuncionario);

    if(generoSexualFuncionario != 1 && generoSexualFuncionario != 2){
      printf("GENERO INVALIDO, REINICIE O PROGRAMA\n");
      return 0;
    }

    if(generoSexualFuncionario == 2){

      if(anosDeEmpresaFuncionario < 15){
        porcentagemAumentoSalarial = 0.05;
      }else if(anosDeEmpresaFuncionario >= 15 && anosDeEmpresaFuncionario <= 20){
        porcentagemAumentoSalarial = 0.12;
      }else{
        porcentagemAumentoSalarial = 0.23;
      }

    }else if(generoSexualFuncionario == 1){
      
      if(anosDeEmpresaFuncionario < 20){
        porcentagemAumentoSalarial = 0.03;
      }else if(anosDeEmpresaFuncionario >= 20 && anosDeEmpresaFuncionario <= 30){
        porcentagemAumentoSalarial = 0.13;
      }else{
        porcentagemAumentoSalarial = 0.25;
      }

    }

    novoSalarioFuncionario = salarioAtualFuncionario + (salarioAtualFuncionario * porcentagemAumentoSalarial);

    printf("SALARIO ATUAL = R$ %.2lf\n",salarioAtualFuncionario);
    printf("PORCENTAGEM DE AUMENTO = %.2lf\n",porcentagemAumentoSalarial * 100);
    printf("NOVO SALARIO = %.2lf\n",novoSalarioFuncionario);

  return 0;

  }