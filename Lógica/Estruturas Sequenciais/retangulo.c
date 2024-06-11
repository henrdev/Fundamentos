#include <stdio.h>
#include <stdlib.h>

  int main(){
    
    float baseRetangulo = 0, alturaRetangulo = 0, areaRetangulo = 0, perimetro = 0;

    printf("Digite a base do retangulo: \n");
    scanf("%f",&baseRetangulo);
    printf("Digite a altura do retangulo: \n");
    scanf("%f",&alturaRetangulo);

    areaRetangulo = baseRetangulo * alturaRetangulo;
    perimetro = 2 * (baseRetangulo * alturaRetangulo);

    printf("Area do retangulo = %.2f\n",areaRetangulo);
    printf("Perimetro do retangulo = %.2f\n",perimetro);

  return 0;

  }