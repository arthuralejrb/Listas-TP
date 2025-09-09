#include <stdio.h>


void somaMedia(int v[], int N, int *soma, float *media){

    for(int i = 0; i < N; i++) {
        *soma += v[i];
    }

    *media /= N;
}

int main(){

    int N, soma = 0;
    scanf("%d", &N);
    int vet[N];

    float media = 0;

    somaMedia(vet[N], N, &soma, &media);
    printf("soma:%d\nmédia:%.1f", soma, media);
    
    return 0;
}