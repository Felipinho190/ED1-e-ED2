#include<stdio.h>
main(){
	int cont = 0, aux = 1;
	float num, somatorio = 0, maior = -10000, menor = 100000, media;
	
	printf("Para finalizar digite 0\n\n");
	
	while(aux !=0){
		printf("Digite um numero: ");
		scanf("%f",&num);
		if(num != 0){
			cont++;
			somatorio += num;
			if(maior < num)
				maior = num;

			if(menor > num)
				menor = num;	
		}
		else
			aux = 0;
	}
	media = somatorio/cont;
	printf("Quantidade de numeros digitados: %d\n", cont);
	printf("Somatorio dos numeros: %.1f\n", somatorio);
	printf("Maior numero: %.1f\n", maior);
	printf("Menor numero: %.1f\n", menor);
	printf("Media: %.1f\n", media);
}
