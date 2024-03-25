#include<stdio.h>
int main(){
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%d",&x);
	printf("O dobro de %d e %d.\n"
	"O quadrado de %d e %d.\n", x,2*x,x,x*x); //informando ao sistemas os diversos valores de x
}
