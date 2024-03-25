#include<stdio.h>
 0main(){
	float altura;
	int m,f,sexo;
	printf("Digite seu sexo: Masculino(1) Feminino(2):%d ",sexo);
	scanf("%d",m,f);
	printf("Digite sua altura: ");
	scanf("%.2f",&altura);
	m= (72.7*altura)-58;
	f= (62.1*altura)-44.7;
	
	if(sexo=1){
			printf("Seu peso ideal e: %d",m);
	}
	else{
		printf("Seu peso ideal e: %d",f);
	}
	
	
	
	
}
