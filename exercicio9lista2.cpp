#include <stdio.h>
main(){
	int num, eprimo, cont = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	printf("Os numeros primos existentes nesse intervalo: ");
	
	for (int i=1; i<=num; i++){
		eprimo=0;
		for (int j=1; j<=i; j++){
			if (i%j==0)
				eprimo++;	
		}
		if (eprimo==2){
			cont++;
			printf("%d ", i);
		}
	}
	printf("\nA quantidade de numeros primos e: %d", cont);
}
