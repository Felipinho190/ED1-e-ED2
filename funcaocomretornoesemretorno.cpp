#include<stdio.h>
// Protótipos das funções 
void imprime_cabecalho(void);
int multiplica(int n1, int n2);

int main(void){
  int v1, v2, resultado;
  
  imprime_cabecalho();//chamada da função
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &v1);
  printf("Digite o segundo valor: ");
  scanf("%d", &v2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(v1,v2);
  printf("Resultado = %d\n", resultado);
  return 0;
}
int multiplica(int n1, int n2){ //multiplica recebe N1,N2 e retorna um int
  int res;
  res = n1 * n2;
  return res; //retornando o valor para main
}
void imprime_cabecalho(){
	printf("******************************\n");
	printf("*           INICIO           *\n");
	printf("******************************\n");
	return ;
}
 