#include <stdio.h>


int checar_palindromo(int N) {

    int inv = 0;
    int o = N;

    while(N > 0) {
        inv *= 10;
        inv += N % 10;
        N /= 10;
    }

    if(inv == o)  
        return 1;

    return 0;
}


int main() {

    int N;
    scanf("%d", &N);

    if(checar_palindromo(N))
        printf("É palíndromo\n");
    else 
        printf("Não é capicua\n");
    return 0;
}