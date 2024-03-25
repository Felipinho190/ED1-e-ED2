#include<stdio.h>
float media3(int a, int b, int c){
	float resultado;
	resultado = (a+b+c)/3.0;
	return resultado;
}	
int main(){
	float x= media3(5,6,8);
	printf("x = %f",x);
	
}