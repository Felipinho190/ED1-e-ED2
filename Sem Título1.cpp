#include<stdio.h>
#include<string.h>
main(){
	char senha[6];
	printf("Digite a senha: ");
	scanf("%s",senha);
	
	if(strcmp(senha,"ABCDE")==0){
		printf("Senha correta");
	}
	else{
		printf("Senha incorreta");
	}
}