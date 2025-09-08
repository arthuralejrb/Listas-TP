#include <stdio.h>


void troca(int *Y, int *K) {

    int l = *Y;
    *Y = *K;
    *K = l;


}


int main() {

    int A, B;
    scanf("%d%d", &A, &B);

    troca(&A, &B);

    printf("A:%d\nB:%d", A, B);

    return 0;
}