#include <stdio.h>


int calcular(int a, int b, int c) {
    int delta = (b * b) - 4*(a*c); 

    return delta;
}


int main() {

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    printf("delta: %d\n", delta(a,b,c));

    return 0;
}