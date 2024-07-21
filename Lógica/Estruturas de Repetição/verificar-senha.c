#include <stdio.h>
#include <stdlib.h>

  int main(){

    int senhaFinal = 123456, senhaDigitada = 0;

    printf("Digite a senha: ");
    scanf("%d",&senhaDigitada);

    while(senhaDigitada != senhaFinal){
      printf("Senha Invalida, digite a senha novamente: ");
      scanf("%d",&senhaDigitada);
    }

    printf("Acesso Permitido\n");

  return 0;

  }