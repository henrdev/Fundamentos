#include <stdio.h>
#include <stdlib.h>

  int main(){

    double valorDespesa = 0, porcentagemGorjeta = 0, pagamentoFinal = 0, valorPagoPessoa = 0;
    int quantidadePessoas = 0;

    printf("Digite o valor da despesa:\n");
    scanf("%lf",&valorDespesa);
    printf("Digite o valor da gorjeta:\n");
    scanf("%lf",&porcentagemGorjeta);
    printf("Digite quantas pessoas divira a conta:\n");
    scanf("%d",&quantidadePessoas);

    pagamentoFinal = valorDespesa + (valorDespesa * porcentagemGorjeta / 100);
    valorPagoPessoa = pagamentoFinal / quantidadePessoas;

    printf("\nQuantidade de pessoas a pagar = %d\n",quantidadePessoas);
    printf("Valor da conta = %.2f\n",pagamentoFinal);
    printf("Cada pessoa pagara = %.2f\n",valorPagoPessoa);

  return 0;

  }