#include<stdio.h>
int main(){
	
  float nota1,nota2,media;
  int op;
  
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %.2f\n",media);
    
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &op);
  
  }while (op==1);
  
}
