#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
 
	int a=3, b=2, *p = NULL, *q = NULL;
	p = &a;
	q = p;
	*q = *q +1;
	q = &b;
	b = b + 1;
	printf("%d %d", *p,*q);
	return 0;
  

}
