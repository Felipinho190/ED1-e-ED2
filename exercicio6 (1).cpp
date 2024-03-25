#include<stdio.h>
main(){
	float altura,pesoIdeal;
	int op;
	
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite o sexo:\n1-Homem\n2-Mulher\nOpcao: ");
	scanf("%d",&op);
	
	if(op==1){
		pesoIdeal=(72.7*altura)-58;
	}
	else{
		pesoIdeal=(62.1*altura)-44.7;
	}
	printf("Peso ideal: %.1f\n",pesoIdeal);

}
