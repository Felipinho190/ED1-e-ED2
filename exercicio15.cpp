#include<stdio.h>
#include<math.h>
main(){
	int n1,n2,op,soma,raiz;
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	printf("Esolha uma opcao:\n1-Soma\n2-Raiz quadrada\n3-Finalizar\n");
	scanf("%d",&op);
	
	if(op==1){
	soma=n1+n2;
	printf("O resultado da soma e: %d",soma);
	}
	if(op==2){
		raiz=(int)sqrt(n2);
		printf("A raiz quadrada de %d e igual a %d", n2,raiz);
	}
	if(op==3){
		printf("Finalizado");
	}
}