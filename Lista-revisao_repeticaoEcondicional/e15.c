#include <stdio.h>


int main() {

    int i = 0, A = 5000000, B = 7000000;

    while(A < B) {
        A += A * 0.03;
        B += B * 0.02;
        
        i++;
    }
    
    printf("%d\n", i);

    return 0;
}