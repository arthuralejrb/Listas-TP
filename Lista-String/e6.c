#include <stdio.h>


void inverter(int P, int N, int vet[]) {

    int R = N - 1;

    for(int i = 0; i < N; i++) { 
        vet[i] = P + R;
        R--;

    }
    
}


int main() {

    int N;
    scanf("%d", &N);
    int vet[N];
    int *P = vet;    
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }

    inverter(*P, N, vet);
    
    for(int i = 0; i < N; i++) {
        printf("v[%d] = %d\n",i, vet[i]);

    }

    return 0;
}