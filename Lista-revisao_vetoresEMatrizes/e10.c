#include <stdio.h>

int main() {

    int matA[2][2];
    int matB[2][2];
    int matC[2][2];
    char o;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d%d", &matA[i][j], &matB[i][j]);
            
        }
    }

    scanf(" %c", o);
while(scanf(" %c", o)) {
        
        if(o == 'a') {
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    matC[i][j] = matA[i][j] + matB[i][j];
                }
            }
    
        }else if(o == 'b') {
    
            for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                matC[i][j] = matB[i][j] - matA[i][j];
                }
            }
    
        }else {
            printf("Matriz A: \n");
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    printf("%d ", matA[i][j]);    
                }printf("\n");
            }
    
            printf("Matriz B: \n");
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    printf("%d ", matB[i][j]);    
                }printf("\n");
            }
    
            printf("Matriz C: \n");
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    printf("%d ", matC[i][j]);    
                }printf("\n");
            }
    
        }
}
    
    return 0;
}