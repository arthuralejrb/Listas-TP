#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int vet[N];


    for(int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
        if(vet[i] > 0) {
            if(vet[i] % 2 == 0) {
                printf("vet[%d] é par positivo\n",i);
            }else {
                printf("vet[%d] é impar positivo\n", i);
            }
        }else if (vet[i] < 0) {
            if(vet[i] % 2 == 0) {
                printf("vet[%d] é par negativo\n",i);
            }else {
                printf("vet[%d] é impar negativo\n", i);
            }
        }else {
            printf("vet[%d]é igual a zero\n", i);
        }
    }


    return 0;
}