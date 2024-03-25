#include <stdio.h>
#include <string.h>

#define MAXN 100

typedef struct {
	char Nome[30];
	int AnoNasc;
	float Salario;
} Pessoa;

typedef struct {
	Pessoa Lista[MAXN];
	int n;
} ListaDePessoas;

int main() {
	
	Pessoa p1;	
	strcpy(p1.Nome, "Renan Rodrigues");
	p1.AnoNasc = 1984;
	p1.Salario = 1000;	
		
	Pessoa p2;	
	strcpy(p2.Nome, "Maria da Silva");
	p2.AnoNasc = 1990;
	p2.Salario = 5000;
	
	Pessoa p3;	
	strcpy(p3.Nome, "Jose Bezerra");
	p3.AnoNasc = 1983;
	p3.Salario = 1500;
	
	Pessoa p4;	
	strcpy(p4.Nome, "Lucia Maria");
	p4.AnoNasc = 2002;
	p4.Salario = 2600;
		
	ListaDePessoas listaDePessoas;
	listaDePessoas.n = 0;
	
	listaDePessoas.Lista[listaDePessoas.n++] = p1;
	listaDePessoas.Lista[listaDePessoas.n++] = p2;
	listaDePessoas.Lista[listaDePessoas.n++] = p3;
	listaDePessoas.Lista[listaDePessoas.n++] = p4;

	for(int i=0; i<listaDePessoas.n; i++) {	
		printf("%s \n", listaDePessoas.Lista[i].Nome);
		printf("%d \n", listaDePessoas.Lista[i].AnoNasc);
		printf("%.2f \n", listaDePessoas.Lista[i].Salario);
		printf("------------\n");
	}
	
	return 0;
}
