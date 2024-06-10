#include <stdio.h>
#include <stdlib.h>

  int main(){

    int codPeca = 0, quantidadePecasCompradas = 0;
    double valorUnitarioPorPeca = 0, pagamentoPecas = 0;

    printf("Digite o codigo da peca\n");
    scanf("%d",&codPeca);
    printf("Digite a quantidade compradas por peca:\n");
    scanf("%d",&quantidadePecasCompradas);
    printf("Digite o valor por peca:");
    scanf("%lf",&valorUnitarioPorPeca);

    pagamentoPecas = quantidadePecasCompradas * valorUnitarioPorPeca;

    printf("\nDados da compra\nCodigo da peca: %d\nQuantidade comprada por peca: %d\nValor por peca: %.2lf\nPagamento Total %.2lf\n",codPeca,quantidadePecasCompradas,valorUnitarioPorPeca,pagamentoPecas);

  return 0;

  }
