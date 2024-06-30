#include <stdio.h>
#include <stdlib.h>

  int main(){

    double precoDoProduto = 0, precoDaMercadoria = 0, valorPagoCliente = 0, trocoDoCliente = 0, quantidadeCompradasProduto = 0;

    printf("Digite o preco do produto:\n");
    scanf("%lf",&precoDoProduto);
    printf("Digite a quantidade de itens comprado:\n");
    scanf("%lf",&quantidadeCompradasProduto);
    printf("Digite o valor pago pelo cliente:\n");
    scanf("%lf",&valorPagoCliente);

    precoDaMercadoria = precoDoProduto * quantidadeCompradasProduto;

    if(valorPagoCliente < precoDaMercadoria){
      printf("Dinheiro insuficiente\n");
      return 0;
    }else{
      trocoDoCliente = valorPagoCliente - precoDaMercadoria;
    }

    printf("Preco da mercadoria = %.2lf\n",precoDaMercadoria);
    printf("Valor pago pelo cliente = %.2lf\n",valorPagoCliente);
    printf("Troco do cliente = %.2lf\n",trocoDoCliente);

  return 0;

  }