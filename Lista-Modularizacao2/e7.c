#include <stdio.h>


void maiorMenor(int v[], int N, int *maior, int *menor) {

    for(int i = 0; i < N; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
        if(v[i] < *menor) {
            *menor = v[i];
        }
    }
}


int main(){

    int N,maior = 0, menor = 10000;
    scanf("%d", &N);

    int vet[N];

    maiorMenor(vet[N], N, &maior, &menor);

    return 0;
}