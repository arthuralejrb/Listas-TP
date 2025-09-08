#include <stdio.h>


void quadrado(int *Y) {

    *Y *= *Y;

}

int main() {

    int A;
    scanf("%d", &A);

    quadrado(&A);
    printf("%d\n", A);

    return 0;
}