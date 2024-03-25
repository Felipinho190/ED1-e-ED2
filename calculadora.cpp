#include<stdio.h>
void soma (float, float);
void sub (float, float);
void mul (float, float);
void div (float, float);
void menu();

main(){
	menu();	
}
void menu(){
	float a, b;
	int op;
	
	printf("Digite primeiro valor: ");
	scanf("%f",&a);
	printf("\nDigite segundo valor: ");	
	scanf("%f",&b);
	printf("Digite a opcao: \n1 - soma\n2 - sub\n3 - div\n4 - mult\nDigite a opcao: ");
	scanf("%d",&op);
	
	if(op == 1)
		soma(a,b);
		
	if(op==2)
		sub(a,b);
		
	if(op == 3)
		div(a,b);
	
	if(op == 4)
		mul(a,b);
}
void soma(float x, float y){
	float aux = x + y;
	printf("%.1f + %.1f = %.1f\n",x,y,aux);
}
void sub(float x, float y){
	float aux = x - y;
	printf("%.1f - %.1f = %.1f\n",x,y,aux);
}
void div(float x, float y){
	float aux = x / y;
	printf("%.1f / %.1f = %.1f\n",x,y,aux);
}
void mul(float x, float y){
	float aux = x * y;
	printf("%.1f * %.1f = %.1f\n",x,y,aux);
}