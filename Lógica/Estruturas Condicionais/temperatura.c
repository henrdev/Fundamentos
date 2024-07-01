#include <stdio.h>
#include <stdlib.h>

  int main(){
    
    double tempFahrenheit = 0, tempCelsius = 0, tempConversor = 0;
    char tempOpcao;

    printf("Digite para qual temperatura deseja converter\n");  
    printf("Fahrenheit para Celisus - 'F'\nCelsius para Fahrenheit - 'C'\n\n");
    scanf("%c",&tempOpcao);

    if(tempOpcao == 'f' || tempOpcao == 'F'){
      printf("\nInforme a temperatura em Fahrenheit:\n");
      scanf("%lf",&tempFahrenheit);
      tempConversor = (tempFahrenheit - 32) / 1.8;
    }else if(tempOpcao == 'c' || tempOpcao == 'C'){
      printf("\nInforme a temperatura em celsius:\n");
      scanf("%lf",&tempCelsius);
      tempConversor = (tempCelsius * 1.8) + 32;
    }else{
      printf("\nOpcao inexistente, tente novamente...\n");
    }

    printf("\nTemperatura = %.3lf\n", tempConversor);

  return 0;

  }