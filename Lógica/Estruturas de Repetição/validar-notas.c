#include <stdio.h>
#include <stdlib.h>

  int main(){

    float nota1 = 0, nota2 = 0, mediaNotas = 0;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    while(nota1 < 1 || nota1 > 10){
      printf("Nota invalida, digite uma nota valida: ");
      scanf("%f",&nota1);
    }

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    while(nota2 < 1 || nota2 > 10){
      printf("Nota invalida, digite uma nota valida: ");
      scanf("%f",&nota2);
    }

    mediaNotas = (nota1 + nota2) / 2;

    printf("MEDIA SEMESTRAL %.2f\n",mediaNotas);

  return 0;

  }