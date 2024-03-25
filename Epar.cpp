#include<stdio.h>
int Epar(int x){
	if(x % 2==0){
		return 1;
	}
	else{
		return 0;
	}
}

main(){
	int valor;
	printf("Digite um numero: ");
	scanf("%d",&valor);
	
	if(Epar(valor)==1){
		printf("Numero par\n");
	}
	else{
		printf("Numero impar\n");
	}
	
	
}