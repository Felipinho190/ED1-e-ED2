#include<stdio.h>
#include<stdlib.h>

int f2(int n){ 
      if (n == 0) 
		printf("Zero"); 
      else { 
		printf("%d ",n); 
		printf("%d ",n); 
		f2(n-1); 
	}	 
} 
main(){
	f2(5);
}
