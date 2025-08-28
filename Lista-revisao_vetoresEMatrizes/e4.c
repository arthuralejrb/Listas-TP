#include <stdio.h>

int main() {

    int N, Y;
    scanf("%d", &N);
    int vet[N];

    for(int i = 0 ; i < N; i++) {
        scanf("%d", &vet[i]);
    }


    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - i - 1; j++){
            if(vet[j] > vet[j+1]){
                Y = vet[j + 1];
                vet[j + 1] = vet[j];
                vet[j] = Y;
            }

        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", vet[i]);  
    }  

    printf("\n");

    for(int i = N - 1; i >= 0; i--) {
        printf("%d ", vet[i]);

    }


    return 0;
}