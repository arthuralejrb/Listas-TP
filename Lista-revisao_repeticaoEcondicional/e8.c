#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    if(N >= 20 && N <= 50) 
        printf("%d está entre 20 e 50\n", N);
    else
        printf("%d não está entre 20 e 50\n", N);
  
    return 0;
}