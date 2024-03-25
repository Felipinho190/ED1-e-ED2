#include<stdio.h>
/*
Nome da função: multiplica
recebe como parâmetos dois valores inteiros (N1,N2)
objetivo: multiplicar os valores recebidos nos parâmetros.
retorno: um parâmetro inteiro (res) contendo o resultado
*/
void imprime_cabecalho();
void fim_cabecalho();

int multiplica(int N1, int N2){ //multiplica recebe N1,N2 e retorna um int
  
  int res;
  res = N1 * N2;
  return res; //retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void){
	
  int V1, V2, resultado;
  
  imprime_cabecalho();
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &V1);
  printf("Digite o segundo valor: ");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  fim_cabecalho();//chamada da função
  
  return 0;
}
void imprime_cabecalho(){
	printf("******************************\n");
	printf("*           INICIO           *\n");
	printf("******************************\n");
	return ;
}
void fim_cabecalho(){
	printf("******************************\n");
	printf("*           FIM            *\n");
	printf("******************************\n");
	return ;
}