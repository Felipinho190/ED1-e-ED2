#include<stdio.h>
main(){
	int x,num,i,eprimo=0;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++){
		if(num%i==0){
			eprimo++;
	}
	if(eprimo==2){
	printf("Numero primo");
	}
	else{
	printf("Numero nao e primo");
	}		
  }
}