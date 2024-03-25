#include<stdio.h>
void escolha();
void tabuada(int, int);

main(){
	escolha();
}

void escolha(){
	int x, y;
	printf("Digite inicio da tabuada: ");
	scanf("%d",&x);
	printf("Digite fim da tabuada: ");
	scanf("%d",&y);	
	
	tabuada(x, y);
}

void tabuada(int inicio, int fim){
	int i, j, aux;
	for(i=inicio;i<=fim;i++){
			for(j=0;j<10;j++){
				aux = i*j;
				printf("\n%d * %d = %d",i,j,aux);
			}
			printf("\n");
		}
}

