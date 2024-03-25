#include<stdio.h>
#include<string.h>
main(){
	char caractere[30];
	int vogais=0,qtdLetras,cont=0,cont1=0,cont2=0,cont3=0,cont4=0;
	printf("Digite a cadeia de caracteres: ");
	gets(caractere);
	
	qtdLetras = strlen(caractere);
	
	printf("Quantidade de caracteres digitados: %d\n",qtdLetras);
	
	for(int i=0;i<=qtdLetras;i++){
		switch(caractere[i]){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				vogais++;
				break;
		}
	}
	printf("Quantidade de vogais: %d\n",vogais);
	
	for(int i=0;i<=qtdLetras;i++){
		switch(caractere[i]){
			case 'A':
			case 'a':
				cont++;
				break;
			case 'E':
			case 'e':
				cont1++;
				break;
			case 'I':
			case 'i':
				cont2++;
				break;
			case 'O':
			case 'o':
				cont3++;
				break;
			case 'U':
			case 'u':
				cont4++;
				break;		
		}	
	}printf("Quantidade de vogais digitadas: A:%d  E:%d  I:%d O:%d  U:%d ",cont,cont1,cont2,cont3,cont4);
}