#include <stdio.h>


void troca(int *Y, int *K){

    int a = *Y;

    if(*Y > *K){
        *Y = *K;
        *K = a;
    }

}


int main() {

    int A, B;
    scanf("%d%d", &A,&B);

    troca(&A,&B);
    printf("%d\n%d", A,B);

    return 0;
}