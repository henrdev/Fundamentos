#include <stdio.h>
#include <stdlib.h>

  int main(){

    int anoNascimento = 0, anoAtual = 2024, idade = 0, situacao = 0;

    printf("Digite o ano de nascimento\n");
    scanf("%d",&anoNascimento);

    idade = anoAtual - anoNascimento;

    if(idade < 18){
      situacao = 18 - idade;
      printf("Faltam %d Anos para o alistamento obrigatorio!\n",situacao);
    }else{
      situacao = idade - 18;
      printf("Ja se passaram %d anos, apos o dia do alistamento!\n",situacao);
    }
    
  return 0;

  }