#include <stdio.h>


int main() {

    int N;
    scanf("%d", &N);

    if(N >= 18) {
        if(N >= 65) {
            printf("Você é maior de 65\n");
        }else {
            printf("Você é maior de idade\n");
        }
    }else {
        printf("Você não é maior de idade\n");
    }


    return 0;
}