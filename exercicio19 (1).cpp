#include<stdio.h>
main(){
	//numdep:numero de dependentes,numhorastrab:numero de horas trabalhadas//
	float salariominimo,valorhorastrab,numhorastrab,horasextras,IRFF,salmes,salliq,salbruto,gratificacao,salarioreceber;
	int numdep,dep;
	printf("Digite o valor do salario minimo: ");
	scanf("%f",&salariominimo);
	
	printf("Digite o valor de horas trabalhadas: ");
	scanf("%f",&numhorastrab);
	
	printf("Digite a quantidade de dependentes: ");
	scanf("%d",&numdep);
	
	printf("Digite a quantidade de horas extras trabalhadas: ");
	scanf("%f",&horasextras);
	
	valorhorastrab=salariominimo/5;
	salmes=numhorastrab*valorhorastrab;
	
	if(numdep>=1){
		dep=numdep*32;	
	}
	
	horasextras=valorhorastrab*1.5;
	salbruto=salmes+dep+horasextras;
			
	if(salbruto<200){
		IRFF==0;
	}
	if(salbruto>=200 && salbruto<=500){
		IRFF==0.1;
	}
	if(salbruto>500){
		IRFF=0.2;
	}
	salliq=salbruto-IRFF;
	
	if(salliq<=350){
		gratificacao=100;
	}
	if(salliq>350){
		gratificacao=50;
	}
	salarioreceber=salliq+gratificacao;
	printf("Seu salario a receber sera de: R$ %.2f ",salarioreceber);
}
	