#include <stdio.h>
#include <stdlib.h>

  int main(){
    
    double salarioDoCliente = 0, valorDoImovel = 0, parcelasImovel = 0, limiteExcedenteSalario = 0;
    int anosQuitamentoImovel = 0;

    printf("Digite o valor do imovel:\n");
    scanf("%lf",&valorDoImovel);
    printf("Digite o salario do cliente:\n");
    scanf("%lf",&salarioDoCliente);
    printf("Digite em quantos anos o cliente deseja pagar o imovel\n");
    scanf("%d",&anosQuitamentoImovel);

    parcelasImovel = valorDoImovel / (anosQuitamentoImovel * 12);
    limiteExcedenteSalario = salarioDoCliente * 0.30;

    if(parcelasImovel > limiteExcedenteSalario){
      printf("\nEmprestimo negado, o valor das parcelas excedeu 30 por cento do salario.\n");
      return 0;
    }else{
      printf("\nEmprestimo aprovado\n");
    }

    printf("\n==========DADOS==========\n");
    printf("VALOR DO IMOVEL = R$ %.2lf\n",valorDoImovel);
    printf("ANOS A PAGAR = R$ %d\n",anosQuitamentoImovel);
    printf("PARCELAS A PAGAR = R$ %.2lf\n",parcelasImovel);
    printf("============================\n");

  return 0;

  }