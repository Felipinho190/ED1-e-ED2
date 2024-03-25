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
	int vetor[10];
	for(int i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d",&vetor[i]);
	}
	for(int i=0;i<10;i++){
		if(Epar(vetor[i])==1){
			printf("%d = Numero par\n",vetor[i]);	
		}
		else{
			printf("%d = Numero impar\n",vetor[i]);
		}
	}
}