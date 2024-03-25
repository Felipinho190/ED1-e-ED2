#include<stdio.h>
main(){
	float nhe,nhf,H,transformar,transformar2;
	//nhe=Numero de horas extras em minutos; nhf=Numero de horas-falta em minutos//
	printf("Digite o numero de horas extras em minutos: ");
	scanf("%f",&nhe);
	
	printf("Digite o numero de horas-falta em minutos: ");
	scanf("%f",&nhf);

	H=(nhe)-(2/3*(nhf));
	if(H>2400){
		printf("Seu premio sera de R$500\n");
	}
	if(H>=1801 && H<=2400){
		printf("Seu premio sera de R$400\n");
	}
	if(H>=1201 && H<=1800){
		printf("Seu premio sera de R$300\n");
	}	
	if(H>=601 && H<=1200){
		printf("Seu premio sera de R$200\n");
	}
	if(H<=600){
		printf("Seu premio sera de R$100\n");
	}
			
	transformar=nhe/60;
	transformar2=nhf/60;
	
	printf("Numero de horas extras em horas: %.2f\n",transformar);
	printf("Numero de horas-falta em horas: %.2f\n",transformar2);
	
	
}