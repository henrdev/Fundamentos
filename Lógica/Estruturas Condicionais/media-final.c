#include <stdio.h>
#include <stdlib.h>

  int main(){

    double nota1 = 0, nota2 = 0, mediaFinal = 0;

    printf("==========TABELA GUIA==============\n");
    printf("MEDIA <= 4.9 : REPROVADO\n");
    printf("MEDIA 5.0 E 6.9 : RECUPERACAO FINAL\n");
    printf("MEDIA >= 7 : APROVADO\n");
    printf("===================================\n");

    printf("Digite a primeira nota:\n");
    scanf("%lf",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%lf",&nota2);
    
    mediaFinal = (nota1 + nota2) / 2;

    if(mediaFinal <= 4.9){
      printf("Reprovado, Media = %.2lf\n",mediaFinal);
    }else if(mediaFinal >= 5.0 && mediaFinal <= 6.9){
      printf("Recuperacao Final, Media = %.2lf\n",mediaFinal);
    }else{
      printf("Aprovado, Media = %.2lf\n",mediaFinal);
    } 

  return 0;

  }