#include <stdio.h>


void inverter(int p, int n, int v[]) {

    int r = n - 1;

    for(int i = 0; i < n; i++) { 
        v[i] = p + r;
        r--;

    }
    
}


int main() {

    int N;
    scanf("%d", &N);
    int v[N];
    int *P = v;    
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    inverter(*P, N, v);
    
    for(int i = 0; i < N - 1; i++) {
        printf("%d ",v[i]);
    }
    printf("%d\n",v[N-1]);

    return 0;
}