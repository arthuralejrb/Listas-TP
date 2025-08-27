#include <stdio.h>


int main() {

    float N;
    scanf("%f", &N);

    if(N > 20) {
        printf("Lucro: %.2f", N * 0.45);
    }else {
        printf("Lucro: %.2f", N * 0.3);
    }

    return 0;
}