#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int vNumeros[TAM];
unsigned long long qtdeTrocas = 0;
clock_t Ticks[2];

void ordenar_quick(int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vNumeros[meio];
   
   do{
      while (vNumeros[i] < pivo) i = i + 1;
      while (vNumeros[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vNumeros[i];
         vNumeros[i] = vNumeros[j];
         vNumeros[j] = aux;
         i = i + 1;
         j = j - 1;
         qtdeTrocas++;
      }
   }while(j > i);
   
   if(inicio < j) ordenar_quick(inicio, j);
   if(i < fim) ordenar_quick(i, fim);   

}


void ordenar_bolha ()
{
	int fim,i;
	for (fim=TAM-1; fim>0; fim--) 
	{	
	
		for (i=0; i<fim; i++) {
	
			if (vNumeros[i]>vNumeros[i+1]) 
			{
				
				int temp = vNumeros[i];      
				/* troca */
				vNumeros[i] = vNumeros[i+1];
				vNumeros[i+1] = temp;	
				qtdeTrocas++;					
			}
		}
	}
}


void gerarNumerosAleatorios() {
	int i;
	//srand( (unsigned)time(NULL) ); // Execute o experimento com esta linha desbilitada
	for (i = 0; i < TAM; i++)
     {
           vNumeros[i] = rand() % 100;
     }
}


void imprimirNumeros() {
	int i;
	for (i = 0; i < TAM; i++)
     {
        printf("%d ", vNumeros[i]);
     }
}
void ordenar_insertion()
{
   int i, j, atual;
   
   for(i = 1; i < TAM; i++) {
      atual = vNumeros[i];
      j = i - 1;
      
      while(j >= 0 && vNumeros[j] > atual) {
         vNumeros[j+1] = vNumeros[j];
         j--;
         qtdeTrocas++;
      }
      
      vNumeros[j+1] = atual;
   }
}


int main(int argc, char *argv[]) {
 
   gerarNumerosAleatorios();
   
   Ticks[0] = clock();
   
 	/*int vVetor[TAM];
    int vAux;

    srand(time(NULL));
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = (rand() % 1000) + 10; // Preenche o vetor com valores aleat�rios de 10 at� 99;
    }

    //Insertion_Sort(vVetor); // Chama a fun��o de Ordena��o;*/

   ordenar_bolha();
   //ordenar_quick(0, 1000000);
   //ordenar_insertion();

   Ticks[1] = clock();  

   double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
   printf("\nQtde de Trocas: %llu \n", qtdeTrocas); 
   printf("\nTempo gasto: %g ms.\n", Tempo);   

	//printf("\n%d bytes\n", sizeof( unsigned long long ) );

   return 0;
}

