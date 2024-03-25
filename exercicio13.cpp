#include<stdio.h>
main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=0 && idade<=2){
		printf("Recem nascido");
	}
	if(idade>=3 && idade <=11){
		printf("Crianca 1");
	}
	if(idade>=12 && idade<=19){
		printf("Adolescente");
		
	}if(idade>=20 && idade<=55){
		printf("Adulto");
		
	}if (idade>55){
		printf("Idoso");
	}
	
}
	
		
		
	

