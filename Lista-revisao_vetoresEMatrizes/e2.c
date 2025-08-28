#include <stdio.h>

int main() {


    int y, p = 0, n = 0;
    int pares[10];
    int impares[10];


    for(int i = 0; i < 10; i++) {
        scanf("%d", &y);

        if(y % 2 == 0){ 
            pares[i] = y;
            p++;
        }else {
            impares[i] = y;
            n++;
        }
    }

    printf("pares: ");
    for(int i = 0; i < p; i++) {
        printf("%d ",pares[i]);
    }
    
    printf("\nimpares: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", impares[i]);
    }
    
    printf("\n");
    
    return 0;
}