#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAXN 100

typedef struct {
	char Nome[30];
	char Cidade[30];
	int qtdeEstudantes;
} Faculdade;

typedef struct {
	Faculdade Lista[MAXN];
}ListaFaculdades;

int main (){
	ListaFaculdades Facu;
	int aux = 0, i = 0, k = 0;
	
	while(aux==0){
		printf("Digite o nome da faculdade: ");
		gets(Facu.Lista[i].Nome);
		fflush(stdin);
		
		printf("Cidade em que esta localizada: ");
		gets(Facu.Lista[i].Cidade);
		fflush(stdin);
		
		printf("Digite a quantidade de estudantes: ");
		scanf("%d",&Facu.Lista[i].qtdeEstudantes);
		
		i++;
		
		printf("Deseja continuar? (0)-Sim (1)-Nao:\n ");
		scanf("%d",&aux);
		
		getchar();
	}
	printf("LISTA DE FACULDADES\n");
	printf("%-8s %-25s %-25s %-13s\n","#","NOME","CIDADE","QTDE-ESTUDANTES");
	for (k = 0; k < i; k++){
		printf("%-8d %-25s %-25s %-13d\n",k,Facu.Lista[k].Nome,Facu.Lista[k].Cidade,Facu.Lista[k].qtdeEstudantes);
	}
	
}

