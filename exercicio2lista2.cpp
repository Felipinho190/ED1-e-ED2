#include<stdio.h>
main(){
	int op;
	printf("Qual atividade deseja realizar?\n");
	printf("1-Imprimir na tela os numeros pares de 1 a 100\n2-Imprimir na tela os numeros impares de 1 a 100\n");
	printf("3-Imprimir na tela os numeros e a quantidade de numeros divisiveis por 5 de 1 a 100\n");
	printf("Escolha opcao: ");
	scanf("%d",&op);
	
	if(op==1){
		for(int i=1;i<=100;i++){
			if(i%2==0)
			printf("%d\n",i);
		}
	}
	if(op==2){
		for(int i=1;i<=100;i++){
			if(i%2!=0)
			printf("%d\n",i);
		}
	}
	if(op==3){
		int cont=0;
		for (int i=1;i<=100;i++){
			if(i%5==0){
				cont++;
				printf("%d\n",i);
			}
		}
		printf("Quantidade de numeros: %d ",cont);
	}
}