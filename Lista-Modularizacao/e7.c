#include <stdio.h>

void inverter (int *a, int *b) {

    int c = *a;
    *a = *b; 
    *b = c;

}


int main () {

    int a, b;
    scanf("%d%d", &a,&b);

    inverter(&a, &b);

    printf("valor de a: %d\n", a);
    printf("valor de b: %d \n", b);

    return 0;
}