#include<stdio.h>
main(){
	int n1,n2;
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	if(n1<n2){
		printf("O menor numero e: %d",n1);
	}
	else{
		printf("O menor numero e: %d",n2);
	}
}
