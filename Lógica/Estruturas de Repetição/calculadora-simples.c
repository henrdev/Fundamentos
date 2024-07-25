#include <stdio.h>
#include <stdlib.h>

  int main(){

    int opcao = 0;
    double operador1 = 0, operador2 = 0, calculo = 0;

    do{
      
      printf("\n1 - SOMAR\n");
      printf("2 - SUBTRAIR\n");
      printf("3 - MULTIPLICAR\n");
      printf("4 - DIVIDIR\n");
      printf("0 - SAIR\n");

      printf("\nDigite a opcao desejada: ");
      scanf("%d",&opcao);
      
      if(opcao == 0){
        printf("\nPrograma Finalizado!\n");
        break;
      }else if(opcao < 0 || opcao > 4){
        printf("Opcao invalida, inicialize novamente o programa!\n");
        break;
      }

      printf("\nDigite um numero: ");
      scanf("%lf",&operador1);
      printf("Digite outro numero: ");
      scanf("%lf",&operador2);

      if(opcao == 4){
        while(operador2 == 0){
          printf("\nO divisor não pode ser zero, digite os numeros novamente!\n");
          printf("Digite um numero: ");
          scanf("%lf",&operador1);
          printf("Digite outro numero: ");
          scanf("%lf",&operador2);
        }
      }

      switch (opcao){
        case 1:{
          calculo = operador1 + operador2;
        }break;
        case 2:{
          calculo = operador1 - operador2;
        }break;
        case 3:{
          calculo = operador1 * operador2;
        }break;
        case 4:{
          calculo = operador1 / operador2;
        }break;
      }

      printf("\nRESULTADO = %.2lf\n", calculo);

      operador1 = 0;
      operador2 = 0;
    
    }while(opcao != 0);

  return 0;

  }