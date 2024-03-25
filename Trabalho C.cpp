#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXN 100

typedef struct {
	char Nome[30];
	char Cidade[30];
	int qtdeEstudantes;
} Faculdade;

typedef struct {
	Faculdade Lista[MAXN];
}ListaFaculdades;

typedef struct{
	char NomeDiretor[30];
	char Regiao[30];
	ListaFaculdades Grupo;
}GrupoDeFaculdades;

int main (){
	int aux = 0, i = 0, k = 0;
	
	ListaFaculdades Facu;
	GrupoDeFaculdades Grupo;
	
	printf("Digite o nome do diretor: ");
	gets(Grupo.NomeDiretor);
	
	printf("Digite a regiao: ");
	gets(Grupo.Regiao);
	printf("\n");
	
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
	printf("Nome do diretor: %s - Regiao: %s\n\n",Grupo.NomeDiretor,Grupo.Regiao);
	printf("LISTA DE FACULDADES\n");
	printf("%-8s %-25s %-25s %-13s\n","#","NOME","CIDADE","QTDE-ESTUDANTES");
	for (k = 0; k < i; k++){
		printf("%-8d %-25s %-25s %-13d\n",k,Facu.Lista[k].Nome,Facu.Lista[k].Cidade,Facu.Lista[k].qtdeEstudantes);
	}
	
}

