#include <stdio.h>

int primo(int num) {

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}


int main() {

    int N;
    scanf("%d", &N);

    if(primo(N)) {
        printf("o número é primo\n");
    }else {
        printf("o número não é primo\n");
    }

    return 0;
}

