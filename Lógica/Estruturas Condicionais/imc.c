#include <stdio.h>
#include <stdlib.h>

  int main(){

    double pesoUsuario = 0, alturaUsuario = 0, imcUsuario = 0, faixa = 0;

    printf("Digite sua altura\n");
    scanf("%lf",&alturaUsuario);
    printf("Digite seu peso\n");
    scanf("%lf",&pesoUsuario);

    imcUsuario = pesoUsuario / (alturaUsuario * alturaUsuario);
    
    printf("\n==========DADOS==========\n");
    printf("IMC = %.2lf\n",imcUsuario);
    if(imcUsuario <= 18.5){
      printf("FAIXA = ABAIXO DO PESO\n");
    }else if(imcUsuario > 18.5 && imcUsuario <= 24.9){
      printf("FAIXA = PESO NORMAL\n");
    }else if(imcUsuario > 24.9 && imcUsuario <= 29.9){
      printf("FAIXA = PRE-OBESIDADE\n");
    }else if(imcUsuario > 29.9 && imcUsuario <= 34.9){
      printf("FAIXA = OBESIDADE 1\n");
    }else if(imcUsuario > 34.9 && imcUsuario <= 39.9){
      printf("FAIXA = OBESIDADE 2\n");
    }else{
      printf("FAIXA = OBESIDADE 3\n");
    }
    
   printf("=========================\n");

  return 0;

  }
