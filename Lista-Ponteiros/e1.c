#include <stdio.h>


int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int *p1 = &a;
    int *p2 = &b;

    printf("%d %d\n",a,b);
    printf("%p %p\n",p1,p2);

    return 0;
}