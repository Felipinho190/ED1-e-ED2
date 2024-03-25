#include<stdio.h>

void f4 (int n) { 

	if (n == 0) 
        printf(" FIM "); 
	else { 
        printf("%d ", n); 
        f4(n-1); 
        printf("%d ", n); 
 } 
} 

main(){
	f4(3);
}

