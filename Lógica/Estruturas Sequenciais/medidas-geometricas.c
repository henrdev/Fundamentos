#include <stdio.h>
#include <stdlib.h>

  int main(){

    float a = 0, b = 0, c = 0, areaQuadrado = 0, areaTriangulo = 0, areaTrapezio = 0;

    printf("Digite a medida A: \n");
    scanf("%f",&a);
    printf("Digite a medida B: \n");
    scanf("%f",&b);
    printf("Digite a medida C: \n");
    scanf("%f",&c);

    areaQuadrado = a * a;
    areaTriangulo = (a * b) / 2;
    areaTrapezio = (a + b) * c / 2;

    printf("Area do quadrado = %.2f\n",areaQuadrado);
    printf("Area do triangulo = %.2f\n",areaTriangulo);
    printf("Area do trapezio = %.2f\n",areaTrapezio);

  return 0;

  }