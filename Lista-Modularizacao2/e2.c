#include <stdio.h>


void dobrar(int *Y) {

    *Y *= 2;

}

int main() {

    int A;
    scanf("%d", &A);

    dobrar(&A);
    printf("%d\n", A);


    return 0;
}