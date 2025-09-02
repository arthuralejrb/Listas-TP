#include <stdio.h>


int converter(int F) {

    int C = (F - 32) * 5/9;

    return C;
}


int main() {

    int F;
    scanf("%d", &F);

    printf("%d\n",converter(F));

    return 0;
}

