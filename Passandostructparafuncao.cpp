#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	char Nome[30];
	char Cidade[30];
	int anoNasc;
}Aluno;

void imprimeDados(Aluno aluno){
	printf("\n---------Dados digitados--------\n");
	printf("Nome: %s",aluno.Nome);
	printf("Cidade: %s",aluno.Cidade);
	printf("Ano Nasc.: %d",aluno.anoNasc);
}

int main(){
	
	Aluno a1;
	
	printf("Digite seu nome: ");
	fgets(a1.Nome,30,stdin);
	
	printf("Digite sua cidade: ");
	fgets(a1.Cidade,30,stdin);
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d",&a1.anoNasc);
	
	imprimeDados(a1);
	
}

