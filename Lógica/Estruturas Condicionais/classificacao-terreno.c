#include <stdio.h>
#include <stdlib.h>

  int main(){

    double larguraTerreno = 0, comprimentoTerreno = 0, areaTerreno = 0;

    printf("==========CLASSIFICAO==========\n");
    printf("ATE 99M² = TERRENO POPULAR\n");
    printf("ENTRE 100M² E 499M² = TERRENO MASTER\n");
    printf("MAIOR QUE 500M² TERRENO VIP\n");
    printf("===============================\n");

    printf("Digite a largura do terreno\n");
    scanf("%lf",&larguraTerreno);
    printf("Digite o comprimento do terreno\n");
    scanf("%lf",&comprimentoTerreno);

    areaTerreno = larguraTerreno * comprimentoTerreno;

    if(areaTerreno < 100){
      printf("TERRENO POPULAR: AREA = %.2lf M²\n",areaTerreno);
    }else if(areaTerreno >= 100 && areaTerreno < 500){
      printf("TERRENO MASTER: AREA = %.2lf M²\n",areaTerreno);
    }else{
      printf("TERRENO VIP: AREA = %.2lf M²\n",areaTerreno);
    }

  return 0;

  }