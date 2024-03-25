#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
	int x, *p, **q;
	p = &x;
	q = &p;
	x = 10;
	printf("\n%d\n", *p);
	return 0;

}
