#include<stdio.h>
main(){
	int valor;
	printf("Digite um valor de 1 a 7: ");
	scanf("%d",&valor);
	
	switch(valor){
		case 1:
			printf("Domingo\n");
		break;
		
		case 2:
			printf("Segunda\n");
		break;
		
		case 3:
			printf("Terça\n");
		break;
		
		case 4:
			printf("Quarta\n");
		break;
		
		case 5:
			printf("Quinta\n");
		break;
		
		case 6:
			printf("Sexta\n");
		break;
		
		case 7:
			printf("Sabado\n");
		break;
		
		default: //default é mostrado somente quando todas as alternativas anteriores forem falsas
			printf("Erro: Valor invalido! Digite somente valores de 1 a 7\n");
			
	}
}