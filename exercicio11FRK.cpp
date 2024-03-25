#include<stdio.h>
main(){
	int num1,num2,res;
	float res2;
	char op;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite um numero: ");
	scanf("%d",&num2);
	
	printf("Qual operacao deseja realizar? (A)dicao\n(S)ubtracao\n(M)ultiplicacao\n(D)ivisao\n(R)esto\n");
	fflush(stdin);
	scanf("%c",&op);
	
	if(op=='A'){
		res=num1+num2;
		printf("%d",res);
	}
	if(op=='S'){
		res=num1-num2;
		printf("%d",res);
	}
	if(op=='M'){
		res=num1*num2;
		printf("%d",res);
	}
	if(op=='D'){
		res2=(float)num1/num2;
		printf("%f",res2);
	}
	if(op=='R'){
		res=num1%num2;
		printf("%d",res);
	}
	if(op!='A'&& op!='S'&& op!='M'&& op!='D'&& op!='R'){
		printf("Operacao invalida");
	}
}