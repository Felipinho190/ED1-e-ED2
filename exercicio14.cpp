#include<stdio.h>
main(){
	int op;
	printf("Digite o codigo do seu cargo:\n1-Escrituario\n2-Secretario\n3-Caixa\n4-Gerente\n5-Diretor\nOpcao: ");
	scanf("%d",&op);
	
	if(op==1){
		printf("O cargo de escrituario tem direito a 50%% de aumento no salario.");
	}
	if(op==2){
		printf("O cargo de secretario tem direito a 35%% de aumento no salario.");
	}
	if(op==3){
		printf("O cargo de caixa tem direito a 20%% de aumento no salario.");
	}
	if(op==4){
		printf("O cargo de gerente tem direito a 10%% de aumento no salario.");
	}
	if(op==5){
		printf("O cargo de diretor nao tem direito a aumento no salario.");
	}
	
}