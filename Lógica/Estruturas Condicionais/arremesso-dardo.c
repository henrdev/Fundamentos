#include <stdio.h>
#include <stdlib.h>

  int main(){

    int arremesso1 = 0, arremesso2 = 0, arremesso3 = 0, maiorArremesso = 0;

    printf("Arremesse a primeira vez\n");
    scanf("%d",&arremesso1);
    printf("Arremesse a segunda vez\n");
    scanf("%d",&arremesso2);
    printf("Arremesse a terceira vez\n");
    scanf("%d",&arremesso3);
  
    if(arremesso1 > arremesso2 && arremesso1 > arremesso3){
      maiorArremesso = arremesso1;
    }else if(arremesso2 > arremesso3){
      maiorArremesso = arremesso2;
    }else{
      maiorArremesso = arremesso3;
    } 

    printf("\nPrimeiro arremesso = %d\n",arremesso1);   
    printf("Segundo arremesso = %d\n",arremesso2);   
    printf("Terceiro arremesso = %d\n",arremesso3);   
    printf("\nMAIOR ARREMESSO = %d\n",maiorArremesso);

  return 0;

  }