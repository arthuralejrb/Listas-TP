#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);

    if(N > 20) {
        printf("Maior que 20.");
    }else if (N == 20) {
        printf("Igual a 20.");
    }else {
        printf("Menor do que 20.");
    }

    return 0;
}