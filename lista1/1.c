#include <stdio.h>

int main() {
    int lin=3, col=5, i=0, j=0, jg1=0, jg2=0, jg3=0;
    int mat[lin][col];
    
    for(i=0; i<lin;i++){
        for(j=0; j<col; j++){
            printf("Jogador %d. Digite valor da jogada %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            
            if(i==0)
                jg1 = jg1 + mat[i][j];
            else if(i==1)
                jg2 = jg2 + mat[i][j];
            else
                jg3 = jg3 + mat[i][j];
        }
    }
    printf("\n--------------------------\n");
    printf("Pontuação dos Jogadores\n");
    printf("Jogador 1: %d", jg1);
    printf("\nJogador 2: %d", jg2);
    printf("\nJogador 3: %d\n\n", jg3);
    
    if(jg1 > jg2){
        if(jg1 > jg3)
            printf("Vencedor 1 ");
        else
            printf("Vencedor 3 ");
    }
    else if(jg2 > jg3)
        printf("Vencedor 2 ");
    else
        printf("Vencedor 3 ");

    return 0;
}