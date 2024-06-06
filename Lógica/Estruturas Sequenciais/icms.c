#include <stdio.h>
#include <stdlib.h>

  int main(){
    
    double valorDaMercadoria = 0,valorComIcms = 0, icms = 0;
  
    printf("Digite o preco da mercadoria:\n");
    scanf("%lf",&valorDaMercadoria);
    printf("Digite a porcentagem do icms:\n");
    scanf("%lf",&icms);

    valorComIcms = valorDaMercadoria - (valorDaMercadoria * icms / 100);

    printf("Valor da taxa ICMS: %.2lf Porcento\n",icms);
    printf("Preco original da mercadoria: %.2lf\n",valorDaMercadoria);
    printf("Preco com desconto ICMS: %.2lf\n",valorComIcms);

  return 0;

  }