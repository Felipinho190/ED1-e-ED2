#include<stdio.h>
#include<stdlib.h>

/*void incrementa(int valor, int* inc);

int main(){
	int a = 9;
	incrementa(a,&a);
	
	printf("%d",a);
}
void incrementa(int valor, int* inc){
	*inc = valor + 1;
}*/

int main(){
	int x = 1; 
	x++; 
	int *y = &x; 
	y = y + 1;
 	printf("%d\n",x); 
}

