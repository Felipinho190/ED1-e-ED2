#include<stdio.h>
main(){
	int temperatura;
	
	printf("Digite a temperatura em Graus: ");
	scanf("%d",&temperatura);
	
	if(temperatura<22){
		printf("FRIO");
	}else{
		printf("QUENTE");
	}
}
