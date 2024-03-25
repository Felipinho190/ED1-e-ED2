#include<stdio.h>
main(){
	float diaria,limpeza,total;
	
	printf("Digite o numero de diarias: ");
	scanf("%f",&diaria);
	
	if(diaria<0){
		total=0;
		printf("Total da conta: R$%.2f",total);
	}
	if(diaria<=5){
		total=(diaria*60)+(8*diaria);
		printf("Total da conta: R$%.2f",total);
	}
	if(diaria<=15){
		total=(diaria*60)+(6.5*diaria);
		printf("Total da conta: R$%.2f",total);
	}
	if(diaria>15){
		total=(diaria*60)+(5.5*diaria);
		printf("Total da conta: R$%.2f",total);
	}
	
}