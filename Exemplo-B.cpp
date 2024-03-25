#include <stdio.h>
#include <string.h>
#define MAXN 100

/*
Implemente um programa em C que leia o nome, o ano de nascimento e o salário de várias pessoas.
Imprima o nome, a idade e o salário das pessoas.
*/

typedef struct {	
	char Nome[30];
	int AnoNasc;
	float Salario;	
} TipoPessoa;


typedef struct {	
	TipoPessoa Lista[MAXN];	
} ListaDePessoas;

int main(int argc, char *argv[]) {  
	
	ListaDePessoas Pessoas;
	
	int i = 0, flagContinuar;	
	//Lendo os dados das pessoas
	do {	

		printf("\n%d) Digite o nome da pessoa: ", i);
		gets(Pessoas.Lista[i].Nome);	
		
		printf("%d) Digite o ano de nascimento: ", i);
		scanf("%d", &Pessoas.Lista[i].AnoNasc);
		
		printf("%d) Digite o salario: ", i);
		scanf("%f", &Pessoas.Lista[i].Salario);
				
		getchar();
		printf("-----------------------------------------\n\n", i);
		
		i++;
		if (i == MAXN)
			break;
		
		printf("Continuar? (1-Sim / 0-Nao): ");
		scanf("%d", &flagContinuar);
			
		getchar();
		
	} while(flagContinuar);
	
	
	//Imprime os dados das pessoas
	printf("LISTA DE PESSOAS\n");
	printf("%-4s %-15s %-10s %-10s\n", "#", "NOME", "IDADE", "SALARIO");
	for(int k=0; k<i; k++) {		
        printf("%-4d %-15s %-10d %-10.2f\n", k, 
			Pessoas.Lista[k].Nome, 2020-Pessoas.Lista[k].AnoNasc, Pessoas.Lista[k].Salario);
	}		

   return 0;
}

