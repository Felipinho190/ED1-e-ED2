//fazer uma funcao que leia 5 valores

#include<stdio.h>

float leiaNumero ();
void imprimeVetor(float [],int tam);
float mediaSimplesVetor(float [],int tam);
int main(){
	int i;
	float vetNum[5],resMedia;
	
	for(i=0;i<5;i++){
		vetNum[i]=leiaNumero();
	}
	imprimeVetor(vetNum,5);
	
	resMedia=mediaSimplesVetor(vetNum,5);
	printf("\nMedia dos valores digitados: %.1f\n",resMedia);
	
}

float leiaNumero(){
	float num;
	printf("\nDigite um numero real:  ");
	scanf("%f",&num);
	
	return num;
}
void imprimeVetor(float v[],int t ){
		for(int i=0;i<5;i++){
		printf(" %.1f |",v[i]);
	}
	printf("\n");
	
}
float mediaSimplesVetor(float v[],int t){
	int i;
	float somatorio = 0,media;
	for(i=0;i<t;i++){
		somatorio+=v[i];
	}
	printf("\nSomatorio: %.1f",somatorio);
	media=somatorio/t;
	return media;
}

