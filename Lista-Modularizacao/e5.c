#include <stdio.h>

int checar_divisivel(int A, int B) {

    if(A % B == 0) {
        return 1;
    }
    return 0;
}


int main() {

    int y, k;
    scanf("%d%d", &y,&k);

    if(checar_divisivel(y, k)) {
        printf("é divisível!\n");
    }else {
        printf("não é divisível\n");
    }

    return 0;
}