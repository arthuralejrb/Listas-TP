#include <stdio.h>

int main() {

    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
    int Y;


    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 3; j++) {
            scanf("%d", matA[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 3; j++) {
            scanf("%d", matB[i][j]);
        }
    }

    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 3; j++) {
            if(matA[i][j] > matB[i][j]){
                matC[i][j] = matA[i][j];
            }else {
                matC[i][j] = matB[i][j];
            }
        }
    }



    return 0;
}