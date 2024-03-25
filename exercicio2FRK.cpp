#include<stdio.h>
main(){
	int A,B;
	printf("Digite o primeiro numero: ");
	scanf("%d",&A);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&B);
	
	if(A>B){
		printf("%d",A);
	}
	else{
		printf("%d",B);
	}
}