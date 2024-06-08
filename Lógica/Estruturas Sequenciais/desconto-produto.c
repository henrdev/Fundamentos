#include <stdio.h>
#include <stdlib.h>

  int main(){

    double precoProduto = 0, descontoProduto = 0, calculoProduto = 0, valorDescontado = 0;

    printf("Digite o valor do produto:\n");
    scanf("%lf",&precoProduto);
    printf("Digite o valor do desconto:\n");
    scanf("%lf",&descontoProduto);

    calculoProduto = precoProduto - (precoProduto * descontoProduto / 100);
    valorDescontado = precoProduto * descontoProduto / 100;

    printf("\nValor do desconto = %.2lf \n",descontoProduto);
    printf("Preco original do produto = %.2lf \n", precoProduto);
    printf("Preco com desconto = %.2lf \n",calculoProduto);
    printf("Valor descontado = %.2lf \n",valorDescontado);
    
  return 0;

  }