#include <stdio.h>


void ordenar3(int *a, int *b, int *c){
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(){

    int A,B,C;
    scanf("%d%d%d", &A,&B,&C);
    ordenar3(&A,&B,&C);

    printf("%d %d %d", A,B,C);

    return 0;
}