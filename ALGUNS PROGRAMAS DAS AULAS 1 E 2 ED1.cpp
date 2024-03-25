#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXN 100
typedef int TipoChave;

typedef struct{
	TipoChave Chave;
	char Nome[10];
	int Idade;
} TipoRegistro;

typedef int TipoIndice;

typedef struct{
	TipoRegistro Item[MAXN + 1];
	TipoIndice n;
}TipoTabela;

void Inicializa (TipoTabela *T){
	// -> em C é usado para acessar um membro de uma estrutura que é referenciada pelo ponteiro em questão. 
	T->n = 0;
}

void Insere(TipoRegistro Reg, TipoTabela *T){
	if(T->n == MAXN)
		printf("Erro: Tabela cheia\n");
	else{
		T->n++;
		T->Item[T->n] = Reg;
	}
}
void ListaTabela(TipoTabela *T){
	
	printf("\n");
	printf("%-8s %-15s %-8s\n", "CHAVE", "NOME", "IDADE");
	printf("------------------------------------\n");
	for(int i=1; i<=T->n; i++){
		printf("%-8d %-15s %-8d\n", T->Item[i].Chave, T->Item[i].Nome, T->Item[i].Idade);
	}
	printf("----------------------------------\n\n");
}
int main (int argc, char *argv[] ){
	
	TipoTabela tabelaDeAlunos;

	Inicializa(&tabelaDeAlunos);

	TipoRegistro a1, a2, a3, a4, a5;
	
	a1.Chave = 10; a1.Idade = 32; strcpy(a1.Nome, "Maria");
	Insere(a1, &tabelaDeAlunos);
	
	a2.Chave = 31; a2.Idade = 21; strcpy(a2.Nome, "Pedro");
	Insere(a2, &tabelaDeAlunos);

	a3.Chave = 8; a3.Idade = 15; strcpy(a3.Nome, "Samara");
	Insere(a3, &tabelaDeAlunos);

	a4.Chave = 15; a4.Idade = 41; strcpy(a4.Nome, "Joao");
	Insere(a4, &tabelaDeAlunos);

	a5.Chave = 4; a5.Idade = 27; strcpy(a5.Nome, "Carla");
	Insere(a5, &tabelaDeAlunos);
	
	ListaTabela(&tabelaDeAlunos);
	
	return 0;
	
}
