#include <stdio.h>
#include <stdlib.h>

  int main(){

    double precoProduto = 0, quantidadeComprada = 0, valorDaMercadoria = 0;
    int codigoProduto = 0;

    printf("==========MENU DE COMPRAS==========\n");
    printf("Codigo 1 - R$ 5.00\n");
    printf("Codigo 2 - R$ 3.50\n");
    printf("Codigo 3 - R$ 4.80\n");
    printf("Codigo 4 - R$ 8.90\n");
    printf("Codigo 5 - R$ 7.32\n");
    printf("===================================\n");

    printf("Digite o codigo do produto:\n");
    scanf("%d",&codigoProduto);
    printf("Digite a quantidade comprada:\n");
    scanf("%lf",&quantidadeComprada);

    switch (codigoProduto){
      case 1:
        precoProduto = 5.00;        
      break;
      case 2:
        precoProduto = 3.50;
      break;      
      case 3:
        precoProduto = 4.80;
      break;
      case 4:
        precoProduto = 8.90;
      break;
      case 5: 
        precoProduto = 7.32;
      break;
      default:
        printf("Codigo invalido, tente novamente...\n");
      return 0;
    }

    valorDaMercadoria = precoProduto * quantidadeComprada;

    printf("Valor total da mercadoria = %.2lf\n", valorDaMercadoria);
    
  return 0;

  }