#include <stdio.h>
#include <stdlib.h>

  int main(){

    int glicoseUsuario = 0;

    printf("Digite o nivel da glicose:\n");
    scanf("%d",&glicoseUsuario);

    if(glicoseUsuario <= 100){
      printf("Nivel: Normal\n");
    }else if(glicoseUsuario <= 140){
      printf("Nivel: Elevado\n");
    }else{
      printf("Nivel: Diabetes\n");
    }

  return 0;

  }