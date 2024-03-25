#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAXN 100

typedef struct{
	char Nome[30];
	char Cidade[30];
	int qtdeDeEstudantes;
}TipoFaculdade;

typedef struct{
	TipoFaculdade Lista[MAXN];
}ListaFaculdades;

int main(){
	ListaFaculdades Facu;
	int i = 0, aux = 0;
	
	while(aux==0){
		printf("Digite o nome da faculdade: ");
		(stdin,NULL);
		gets(Facu.Lista[i].Nome);
		
		printf("Digite a cidade da faculdade: ");
		(stdin,NULL);
		gets(Facu.Lista[i].Cidade);
		
		printf("Digite a quantidade de estudantes da faculdade:\t ");
		scanf("%d",&Facu.Lista[i].qtdeDeEstudantes);
		
		i++;
		
		printf("Deseja continuar? (0)-Sim (1)-Nao: ");
		printf("\n");
		scanf("%d",&aux);
	
		getchar();
	}
	printf("LISTA DE FACULDADES\n");
	printf("%-4s %-25s %-25s %10s\n","#", "NOME", "CIDADE", "QTDE-ESTUDANTES");
	for (int k =0; k < i; k++){
		printf("%-4d %-25s %-25s %-10d\n",k,Facu.Lista[k].Nome,Facu.Lista[k].Cidade,Facu.Lista[k].qtdeDeEstudantes);
	}
	
	
}
