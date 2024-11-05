#include <stdio.h>

int main() {
    int n, i=0, j=0;
    
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    
    int mat[n][n];
    
    for(i=0; i<n;i++){
        for(j=0; j<n; j++){
            if(j<=i)
                mat[i][j]=j+1;
            else
                mat[i][j]=0;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}