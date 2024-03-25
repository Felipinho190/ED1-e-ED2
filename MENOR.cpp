#include<stdio.h>
main(){
	int a,b,c,menor;
	
	printf("Digite primeiro valor: "); // 5
	scanf("%d",&a);
	
	printf("Digite segundo valor: "); // 7
	scanf("%d",&b);
	
	printf("Digite o terceiro valor: "); // 4
	scanf("%d",&c);
	
	if(a < b){
		if(a < c)
			menor = a;
		else
			menor = c;	
	}
	else{
		if (b < c)
			menor = b;
		else
			menor = c;		
	}
		
	printf("Menor numero = %d", menor);
}
	