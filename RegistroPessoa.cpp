#include <stdio.h>
#include <string.h>

typedef struct {
	char Nome[30];
	int AnoNasc;
	float Salario;
} Pessoa;

int main() {
	
	Pessoa p1;	
	printf("Digite o nome: ");
	gets(p1.Nome);
	printf("Digite o ano de nascimento: ");
	scanf("%d",&p1.AnoNasc);
	printf("Digite o salario: "); 
	scanf("%f",&p1.Salario);
	
	printf("Nome: %s Idade: %d Salario: %.2f\n",p1.Nome,2022-p1.AnoNasc,p1.Salario);
	
	Pessoa p2;	
	strcpy(p2.Nome, "Maria da Silva");
	p2.AnoNasc = 1990;
	p2.Salario = 5000;
	printf("Nome: %s Ano: %d Salario: %.2f\n", 
			p2.Nome, p2.AnoNasc, p2.Salario);	
	
	return 0;
}
