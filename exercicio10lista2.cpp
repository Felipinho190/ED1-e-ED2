#include <stdio.h>
main(){
	int ordem[4] = {}, i, j, x, y, p, q, aux=0, aux_crescente=0, aux_decrescente=0;
	
	printf("DIGITE 4 NUMEROS\n\n");
	
	for (i=1; i<5; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", &ordem[aux]);
		aux++; 
		
	}
	printf("\nOs numeros ordenados de forma crescente: ");
	
	for (i=0; i<4; i++){
		for (j=i; j<4; j++){ 
			if (ordem[i] > ordem[j]){ 
				aux_crescente = ordem[i];
				ordem[i] = ordem[j];
				ordem[j] = aux_crescente;
			}
		}
	}
	for (p=0; p<4; p++){ 
		printf(" %d ", ordem[p]);
		if (p<3){
			printf("->");
		}
	}
	
	
	printf("\nOs numeros ordenados de forma decrescente: ");
	for (x=0; x<4; x++){
		for (y=x; y<4; y++){
			if(ordem[x] < ordem[y]){ 
				aux_decrescente = ordem[y];
				ordem[y] = ordem[x];
				ordem[x] = aux_decrescente;
			}
		}
	}
	for (q=0; q<4; q++){ 
		printf(" %d ", ordem[q]);
		if (q<3){
			printf("->");
		}
	}
}
