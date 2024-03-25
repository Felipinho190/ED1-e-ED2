#include<stdio.h>
main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=5 && idade<=7){
		printf("Sua categoria e Infantil A");
	}
	if(idade>=8 && idade<=10){
		printf("Sua categoria e Infantil B");
	}
	if(idade>=11 && idade<=13){
		printf("Sua categoria e Juvenil A");
	}
	if(idade>=14 && idade<=17){
		printf("Sua categoria e Juvenil B");
	}
	if(idade>=18){
		printf("Sua categoria e Senior");
	}
}
