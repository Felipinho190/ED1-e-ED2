#include<stdio.h>
main(){
	int num,i,eprimo=0;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0)
			eprimo++;
	}
  	if(eprimo==2){
	printf("Numero primo");
	}
	else{
	printf("Numero nao e primo");
	}		
}