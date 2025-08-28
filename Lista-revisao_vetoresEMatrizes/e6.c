#include <stdio.h>

int main() {

    int Y, c = 0;

    for(int i = 0; i < 16; i++) {
        scanf("%d", &Y);
        if(Y >= 10) {
            c++;
        }

    }

    printf("%d\n", c);

    return 0;
}