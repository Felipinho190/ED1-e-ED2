#include<stdio.h>
main(){
	int num1,num2;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite um numero: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("Maior: %d\n",num1);
		printf("Menor: %d",num2);
	}
	if(num1<num2){
		printf("Maior: %d\n",num2);
		printf("Menor: %d",num1);
	}
	if(num1==num2)
		printf("Iguais: %d",num2);
}