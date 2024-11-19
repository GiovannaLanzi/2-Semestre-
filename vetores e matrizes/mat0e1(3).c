#include <stdio.h>
int main(void){
	int linha = 10, coluna = 10;
	int i, j, mat[linha][coluna];
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(j<=i)
				mat[i][j]=0;
			else 
				mat[i][j]=1;
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
