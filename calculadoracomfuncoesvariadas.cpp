#include<stdio.h>
void soma (float, float);
float sub (float, float);
void  mul ();
void div ();
void menu();

main(){
	menu();
}

void menu(){
	float a, b, res;
	int op;
	
	printf("Digite a opcao: \n1 - soma\n2 - sub\n3 - div\n4 - mult\nDigite a opcao: ");
	scanf("%d",&op);
	
	if(op == 1 || op ==2){
		printf("Digite primeiro valor: ");
		scanf("%f",&a);
		printf("\nDigite segundo valor: ");	
		scanf("%f",&b);
	}
	
	if(op == 1){
		soma(a,b);
	}
	if(op == 2){
		res = sub(a,b);
		printf("%.1f - %.1f = %.1f\n",a,b,res);
	}
	if(op == 3){
		div();
	}
	if(op == 4){
		mul();
	}
}

void soma(float x, float y){
	float aux = x + y;
	printf("%.1f + %.1f = %.1f\n",x,y,aux);
}
float sub(float x, float y){
	float aux = x - y;
	return aux;
}
void div(){
	float x,y, aux ;
	printf("Digite primeiro valor: ");
	scanf("%f",&x);
	printf("\nDigite segundo valor: ");	
	scanf("%f",&y);
	
	aux = x / y;
	printf("%.1f / %.1f = %.1f\n",x,y,aux);
}

void mul(){
	float x,y, aux ;
	printf("Digite primeiro valor: ");
	scanf("%f",&x);
	printf("\nDigite segundo valor: ");	
	scanf("%f",&y);
	
	aux = x * y;
	printf("%.1f * %.1f = %.1f\n",x,y,aux);
}