#include <stdio.h>


void simplificar(int *Y, int *K){
    
    int menor = *K;
    int mdc = 1;

    if(*K > *Y)
        menor = *Y;

    for(int i = 2; i <= menor; i++){
        while(*K % i == 0 && *Y % i == 0){
            *Y = *Y / i;
            *K = *K / i;
            mdc *= i; 
        }
    }

}


int main() {

    int A, B;
    scanf("%d%d", &A,&B);

    simplificar(&A,&B);
    printf("%d/%d\n", A,B);

    return 0;
}