#include<stdio.h>
main(){
	/*Uma secretária de um açougue precisa de um programa em que ela possa digitar o número do pedido(int),nome(char),
	telefone(char),endereço(char), e peso da carne (float) de um cliente. Após a entrada desses dados ela deseja que 
	o programa apresente na tela o que foi digitado, para que ela possa conferir se está tudo certo.*/
	
	char fone[10],end[30],nome[20];
	int ped;
	float peso;
	
	printf("Digite o numero do pedido: ");
	scanf("%d",&ped);
	
	printf("Digite o peso da carne: ");
	scanf("%f",&peso);
	
	printf("Digite o nome do cliente: ");
	fflush(stdin);
	gets(nome);
	
	printf("Digite o endereco do cliente: ");
	fflush(stdin);
	gets(end);
	
	printf("Digite o telefone do cliente: ");
	fflush(stdin);
	gets(fone);
	
	printf("\nNumero do pedido: %d\n",ped);
	printf("Peso da carne: %.2f\n",peso);
	printf("Nome do cliente: %s\n",nome);
	printf("Endereco do cliente: %s\n",end);
	printf("Telefone do cliente: %s\n",fone);
	
}