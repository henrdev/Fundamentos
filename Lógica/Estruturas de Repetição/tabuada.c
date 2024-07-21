#include <stdio.h>
#include <stdlib.h>
	
  int  main(){
	
		int numeroDigitado = 0;
	
    printf("Digite o numero da tabuada: ");
		scanf("%d",&numeroDigitado);

		for(int i = 0; i <= 10 ;i++){
				printf("%d X %d = %d\n",i,numeroDigitado,(i * numeroDigitado));
		}	
		
	return 0;
	
	}
