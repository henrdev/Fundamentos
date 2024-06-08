#include <stdio.h>
#include <stdlib.h>

  int main(){

    double precoGasolina = 0,  novoPrecoGasolina = 0, aumentoGasolina = 0;

    printf("Digite o preco da gasolina:\n");
    scanf("%lf",&precoGasolina);
    printf("Digite a porcentagem de aumento:\n");
    scanf("%lf",&aumentoGasolina);

    novoPrecoGasolina = precoGasolina + (precoGasolina * aumentoGasolina / 100);

    printf("Valor original da gasolina: %.2lf\n",precoGasolina);
    printf("Valor da porcentagem aumento: %.2lf\n",aumentoGasolina);
    printf("Valor da gasolina: %.2lf\n", novoPrecoGasolina);

  return 0;

  }