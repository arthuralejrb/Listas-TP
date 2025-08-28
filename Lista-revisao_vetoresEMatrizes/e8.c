#include <stdio.h>

int main() {

    int mat[3][3];
    int vet[3];


    for(int i = 0; i < 3; i++)   {
     for(int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i =  0; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            vet[i] += mat[j][i];
        }
    }


    for(int i = 0; i < 3; i++) {
        printf("%d ", vet[i]);
    }printf("\n");


    return 0;
}