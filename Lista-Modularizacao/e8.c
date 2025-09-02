#include <stdio.h>
int vet[5];


int maior() {

    int maior = 0;

    for(int i = 0; i < 5; i++){
        if(vet[i] > maior)
        maior = vet[i];
    }

    return maior;
}


int main() {

    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    printf("%d\n",maior());


    return 0;
}