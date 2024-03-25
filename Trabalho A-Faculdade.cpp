#include<stdio.h>
#include<string.h>

  struct Faculdade {
	char Nome[30];
	char Cidade[30];
	int qtdeEstudantes;
};

main(){
	struct Faculdade f1;
	printf("Digite o nome da faculdade:  ");
	gets(f1.Nome);
	
	printf("Digite a cidade em que está localizada: ");
	fflush(stdin);
	gets(f1.Cidade);
	
	printf("Digite a quantidade de estudantes: ");
	scanf("%d",&f1.qtdeEstudantes);
	printf("\n");
	
	printf("A faculdade %s esta localizada na cidade de %s com %d estudantes",f1.Nome,f1.Cidade,f1.qtdeEstudantes);
}
