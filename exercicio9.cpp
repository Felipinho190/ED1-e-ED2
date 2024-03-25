#include<stdio.h>
main(){
	double preco, codigo;
	printf("Digite o preco do produto: ");
	scanf("%lf",&preco);
	
	printf("Digite o codigo de origem: ");
	scanf("%lf",&codigo);
	
	if(codigo==1){
		printf("A procedencia e Sul");
	}
	if(codigo==2){
		printf("A procedencia e Norte");
	}
	if(codigo==3){
		printf("A procedencia e Leste");
	}
	if(codigo==4){
		printf("A procedencia e Oeste");
	}
	if (codigo==5  || codigo==6){
		printf("A procedencia e Nordeste");
	}
	if(codigo==7.8 || codigo==9){
		printf("A procedencia e Sudeste");
	}
	if(codigo>=10 && codigo<=20){
		printf("A procedencia e Centro Oeste");
	}
	if(codigo>=21 && codigo<=30){
		printf("A procedencia e  Noroeste");
	}
}
