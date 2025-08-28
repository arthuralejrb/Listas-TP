#include <stdio.h>

int main() {

    int A[10];
    int B[10];
    int P[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d%d", &A[i],&B[i]);
    }


    int L = 0, R = 9;

    while(R >= 0) {
        P[L] = A[L] * B[R];
        L++;
        R--;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", P[i]);
    }printf("\n");


    return 0;
}