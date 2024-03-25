#include<stdio.h>
#include<math.h>
main(){
	char animal,mora;
	float peso,cal;
	
	printf("Animal - C para cachorro G para gato:\n ");
	scanf("%c",&animal);
	fflush(stdin);
	
	printf("Seu animal permanece dentro (D) ou fora (F) de casa? Escolha a opcao:\n ");
	fflush(stdin);
	scanf("%c",&mora);
	
	printf("Digite o peso do seu animal:\n ");
	scanf("%f",&peso);
	
	cal=70* pow(peso,0.75);
	
	//cachorro
	if(animal=='C'){
		if(mora=='F'){
			cal= cal*1.8;
		}
		else{
			cal=cal*1.6;
		}
		printf("Seu cachorro precisa de %f calorias",cal);
	}
	//gato
	else{
		if(mora=='F'){
			cal= cal*1.4;
		}
		else{
			cal=cal*1.2;
		}
		printf("Seu gato  precisa de %f calorias",cal);
	}	
	return 0;
}