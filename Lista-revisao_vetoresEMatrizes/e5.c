#include <stdio.h>

int main() {

    long long int Y, primo = 1, c = 0, f = 1;
    long long int fat[20];
    int primos[20];

    for(int i = 0; i < 20; i++) {
        scanf("%d", &Y);

        for(int j = 2; j < Y - 1; j++) {
            if(Y % j == 0) {
                primo = 0;
            }
        }

        for(int j = Y; j >= 1; j++){
            f *= i;
        }

        fat[i] = f;
        f = 1;

        if(primo == 1){
            primos[c];
            c++;
        }

    }

    for(int i = 0; i < 20; i++) {
        printf("%d ", fat[i]);
    }

    return 0;
}