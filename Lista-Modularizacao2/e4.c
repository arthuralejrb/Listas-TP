#include <stdio.h>


void quadrado(int *Y) {
    *Y = *Y * *Y;

}


int main () {

    int A;
    scanf("%d", &A);

    quadrado(&A);
    printf("%d", A);
    return 0;
}