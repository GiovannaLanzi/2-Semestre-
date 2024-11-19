#include <stdio.h>
int main (void){
	int linha = 1, coluna = 1;
	int i, j, mat[linha][coluna];
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(j%2 == 1)
				mat[i][j]=1;
			else 
				mat[i][j]=0;
		}
	}
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d", mat[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
