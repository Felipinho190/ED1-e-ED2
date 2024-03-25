#include <stdio.h>
#include <stdlib.h>
main(){
	
	int meses,ncasais=1,nmeses=1, ncasaisant=0, fat, mesesaux;
	printf ("Digite um numero de meses: \n \n ");
	scanf ("%d", &meses);
	
	while (nmeses < meses){
		ncasais = ncasaisant + ncasais;
		ncasaisant=ncasais - ncasaisant;
		nmeses++;	
	}
	mesesaux = meses;
	
	for(fat = 1; mesesaux > 1; mesesaux = mesesaux - 1)
	fat = fat * mesesaux;

	printf ("A) \n");
	printf ("Quando o numero de meses for : %d  \n", meses);
	printf ("O numero de casais sera: %d \n", ncasais);
	
	printf ("B) \n");
	printf ("Fatorial: %d",meses);
	printf (" - %d",fat);
}
