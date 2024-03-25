#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
main()
{ 
	int numero,numeroescolhido, novamente;
	
	srand (time(NULL));
	numero=rand()%11;
		
	do {
		printf ("Escolha um numero de 0 a 10:  \n");
		scanf ("%d", &numeroescolhido);
		
		if (numero < numeroescolhido){
			printf ("O numero escolhido e maior \n");
			system("pause");
				
			printf ("Digite 1 para tentar novamente ou 2 para encerrar: \n ");
			scanf ("%d", &novamente);
		
		} 
		else if (numero > numeroescolhido){
		
			printf ("O numero escolhido e menor \n");
			system("pause");
			
			printf ("Digite 1 para tentar novamente ou 2 para encerrar: \n ");
			scanf ("%d", &novamente);
			
		} 
	} while (novamente==1 && numero!=numeroescolhido);
	
	if (numero == numeroescolhido){
		printf("Parabens, voce acertou !!!");
	}

}

