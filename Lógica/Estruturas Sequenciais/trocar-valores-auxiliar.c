#include <stdio.h>
#include <stdlib.h>

  int main(){

    int x = 0, y = 0, auxiliar = 0;

    printf("Digite o valor de X:\n");
    scanf("%d",&x);
    printf("Digite o valor de Y:\n");
    scanf("%d",&y);

    printf("\nValor de X = %d\n",x);
    printf("Valor de Y = %d\n",y);

    auxiliar = x;
    x = y;
    y = auxiliar;

    printf("\nValor de X = %d\n",x);
    printf("Valor de Y = %d\n",y);

  return 0;

  }