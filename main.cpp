#include<stdio.h>
#include<stdlib.h>
//1) Desenvolva um algoritmo que imprima 50 números menores que 100 em ordem decrescente.
void Exercicio1(){
	int i;
	for(i = 99 ; i >= 49 ; i--){
		printf("%d ",i);
	}
}
//2) Desenvolva um algoritmo para ler 100 números inteiros, calcular e imprimir o quadrado de cada número lido.
void Exercicio2(){
	int i,num;
	for(i = 0 ; i < 100 ; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
		
		printf("O quadrado desse numero eh: %d\n\n",num*num);
	}
}
//3) Desenvolva um algoritmo que imprima 30 números entre 130 e 190 em ordem decrescente.
void Exercicio3(){
	for (int i = 190 ; i >= 160 ; i--){
		printf("%d ",i);
	}
}
//4) Modifique o exercício anterior para que ele imprima todos os números primos deste intervalo.
void Exercicio4(){
	int i,j,naoEhPrimo;
	for (i = 190 ; i >= 160 ; i--){
			
			//tudo aqui verifica se "i" é primo
			naoEhPrimo = 0;
			for(j = 2 ; j < i ; j++){
				if(i % j==0)
				naoEhPrimo = 1;
			}
			//i é primo?se for, imprime ele, caso contrário
			//nao imprime
			if (naoEhPrimo != 1)
			printf("%d ",i);
	}
}
//5) Escreva um programa que solicite 10 números ao usuário e mostre o maior número.
void Exercicio5(){
	int i,numero,maiorValor;
	for(i = 0 ; i < 10 ; i++){
		printf("Digite um numero: ");
		scanf("%d",&numero);
		if(i==0){
			maiorValor=numero;
		}
		else if (numero>maiorValor){
			maiorValor = numero;
		}
	}
	printf("O maior valor eh: %d\n",maiorValor);
}
/*1) Escreva um programa que peça duas informações ao usuário: dia e mês. O programa deve identificar:
a) se o dia da semana (numerados de 1 a 7) é “dia de semana”, “fim de semana” ou “dia inválido”; 
b) se um mês digitado pelo usuário é de alta ou baixa temporada 
(considerar os seguintes meses como alta temporada: dezembro, janeiro, fevereiro, junho e julho)*/
void Exercicio1Switch(){
	int dia;
	printf("Informe o dia: ");
	scanf("%d",&dia);
	
	switch(dia){
	case 1: //Domingo
		printf("Fim de semana\n");
		break;
	case 2: //Segunda
		printf("Dia de semana\n");
		break;
	case 3://Terça
		printf("Dia de semana\n");
		break;
	case 4://Quarta
		printf("Dia de semana\n");
		break;
	case 5://Quinta
		printf("Dia de semana\n");
		break;
	case 6://Sexta
		printf("Dia de semana\n");
		break;
	case 7://Sábado
		printf("Fim de semana\n");
		break;
		default:
			printf("Dia invalido\n");
	}
	int mes;
	printf("Informe o mes: ");
	scanf("%d",&mes);
	
	switch(mes){
	case 1://janeiro
	case 2://fevereiro
		printf("Alta temporada");
		break;
	case 3://março
	case 4://abril
	case 5://Maio
		printf("Baixa temporada");
		break;
	case 6://Junho
	case 7://Julho
		printf("Alta temporada");
		break;
	case 8://Agosto
	case 9://Setembro
	case 10://Outubro	
	case 11://Novembro
		printf("Baixa temporada");
		break;
	case 12://Dezembro
		printf("Alta temporada");
		break;
	}
}
//2) Escreva um programa que indique o número de dias existentes em um mês (considere fevereiro = 28 dias).
void Exercicio2Switch(){
	int mes;
	printf("Informe o mes: ");
	scanf("%d",&mes);
	
	switch(mes){
	case 1://janeiro
		printf("31 dias\n");
		break;
	case 2://fevereiro
		printf("28 dias\n");
		break;
	case 3://março
		printf("31 dias\n");
		break;
	case 4://abril
		printf("30 dias\n");
		break;
	case 5://Maio
		printf("31 dias\n");
		break;
	case 6://Junho
		printf("30 dias\n");
		break;
	case 7://Julho
		printf("31 dias\n");
		break;
	case 8://Agosto
		printf("31 dias\n");
		break;
	case 9://Setembro
		printf("30 dias\n");
		break;
	case 10://Outubro
		printf("31 dias\n");
		break;
	case 11://Novembro
		printf("30 dias\n");
		break;
	case 12://Dezembro
		printf("31 dias\n");
		break;
	}
}
/*3) Faça uma calculadora que leia do usuário uma expressão aritmética entre dois inteiros e retorne o resultado:
7 + 5   -> os inteiros: 7 e 5; a operação: +
8  - 6  -> os inteiros: 8 e 6; a operação: -
...

No entanto, o usuário pode representar a multiplicação com os seguintes caracteres: *, x ou X. 
Ele pode também representar a divisão pelos caracteres /, \ ou : .*/

void Exercicio3Switch(){
	int numero1,numero2;
	char operador;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&numero1);
	printf("Informe o segundo numero: ");
	scanf("%d",&numero2);
	fflush(stdin);
	printf("Informe a operacao:  ");
	scanf("%c",&operador);
	
	switch(operador){
	case '+':
		printf("A operacao eh soma.\n");
		printf("%d %c %d => os inteiros: %d e %d; a operacao: %c",numero1,operador,numero2,numero1,numero2,operador);
		break;
	case '-':
		printf("A operacao eh subtracao.\n");
		printf("%d %c %d => os inteiros: %d e %d; a operacao: %c",numero1,operador,numero2,numero1,numero2,operador);
		break;
	case'*':
	case'x':
	case'X':
		printf("A operacao eh multiplicacao.\n");
		printf("%d %c %d => os inteiros: %d e %d; a operacao: %c",numero1,operador,numero2,numero1,numero2,operador);
		break;
	case'/':
	case'\\':
	case':':
		printf("A operacao eh divisao.\n");
		printf("%d %c %d => os inteiros: %d e %d; a operacao: %c",numero1,operador,numero2,numero1,numero2,operador);
		break;	
	}
}
void ExercicioExtra(){
	int x,y,valor;
	printf("Informe o valor: ");
	scanf("%d", &valor);
	
	//numero de linhas do triangulo
	for(y = 0; y <= valor ; y++){
		for(x = 0 ; x < y ; x++)//controla as colunas
		{
			printf("* ");
		}
	//completou a linha
	printf("\n");
	}
	
}
void ExercicioExtra2(){
	int num;
	printf("Digite um numero inteiro(para interromper digite 0): ");
	scanf("%d",&num);
		
	while(num != 0){
		
		printf("O quadrado desse numero eh: %d\n\n",num*num);
		
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
	if(num==0)
	printf("Finalizado");
	}
}

main(){
	int x, *y, count;
	
	x = 100;
	count = 999;
	y = &x;
	count = *y;
	
	printf("%d",count);
	
	
	//Exercicio1();
	//Exercicio2();
	//Exercicio3();
	//Exercicio4();
	//Exercicio5();
	//Exercicio1Switch();
	//Exercicio2Switch();
	//Exercicio3Switch();
	//ExercicioExtra();
	//ExercicioExtra2();
}
