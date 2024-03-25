#include<stdio.h>
main(){
	double lab,semestral,final,media;
	printf("Digite a nota de laboratorio: ");
	scanf("%f", &lab);
	
	printf("Digite a nota da avaliacao semestral: ");
	scanf("%f",&semestral);
	
	printf("Digite a nota do exame final: ");
	scanf("%f", &final);
	
	media= (lab*2+semestral*3+final*5)/10;
		
	if(media>=8.01 && media<=10){
		printf("Seu conceito e A");
	}
	if(media>=7.01 && media<=8){
		printf("Seu conceito e B");
	}
	if(media>=6.01 && media<=7){
		printf("Seu conceito e D");
	}	
	if(media>=5.01 && media<=6){
		printf("Seu conceito e E");
	}
	if (media<5){
		printf("Seu conceito e F");
	}
}
