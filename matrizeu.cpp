#include<stdio.h>
main(){
	int m[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("mat[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
			
		}
	}
	printf("\n");
	
}