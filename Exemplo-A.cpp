#include <stdio.h>
#include <string.h>
/*
Implemente um programa em C que leia o nome, o ano de nascimento e o salário de uma pessoa. 
Imprima o nome, a idade e o salário da pessoa.
*/

typedef struct {
	char Nome[30];
	int AnoNasc;
	float Salario;	
} TipoPessoa;

int main(int argc, char *argv[]) {  

	TipoPessoa p;
	
	//Lendo os dados da pessoa
	printf("Digite o nome da pessoa: ");	
	gets(p.Nome);
		
	printf("Digite o ano de nascimento: ");	
	scanf("%d", &p.AnoNasc);
	
	printf("Digite salario: ");	
	scanf("%f", &p.Salario);
	
	//Imprime os dados das pessoas
	printf("\nA pessoa %s tem %d anos de idade e possui salario de R$ %.2f", 
		p.Nome, (2020 - p.AnoNasc), p.Salario);

   return 0;
}
