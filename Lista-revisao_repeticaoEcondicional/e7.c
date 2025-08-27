#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    if(N % 5 == 0 ) {
        printf("É divisível por 5\n");
    }else {
        printf("Não é divisível por 5\n");
    }

    return 0;
}