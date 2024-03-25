#include<stdio.h>
main(){
	float media = 0;
	int cont=0,maior=-1000,menor=1000,num,op=1,somatorio=0;

	while(op != 2){
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);

		somatorio += num;
		cont++;
		
		if(menor>num)
			menor=num;
			
		if(maior<num)
			maior=num;
					
		printf("Deseja digitar novo numero?\n1-Sim\n2-Nao\n");
		scanf("%d",&op);
		}
	media = somatorio / cont;
	
	printf("\nMaior valor: %d\n",maior);
	printf("\nMenor valor: %d\n", menor);
	printf("\nMedia dos valores: %.1f\n",media);
		
}