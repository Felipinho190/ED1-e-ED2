#include<stdio.h>
main(){
	int aulas,faltas,presenca;
	float frequencia;
	
	printf("Digite a quantidade de aulas: ");
	scanf("%d",&aulas);
	
	printf("Digite o numero de faltas: ");
	scanf("%d",&faltas);
	
	presenca = aulas - faltas;  
	frequencia =((float)presenca/aulas)*100;
	
	if(frequencia>=75){
		printf("FREQUENCIA SUFICIENTE");
	}
	else{
		printf("FREQUENCIA INSUFICIENTE");
	}
}