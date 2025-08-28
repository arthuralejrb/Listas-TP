#include <stdio.h>

int main() {

    int mat[3][6], si = 0, m = 0, s = 0;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 6; j++) {
            
            scanf("%d", &mat[i][j]);

            if(j % 2 != 0 ) {
                si += mat[i][j];
            }

            if(j == 1 || j == 3){
                m += mat[i][j];
            }

            if(j == 0 || j == 1) {
                s += mat[i][j];
            }

            if(j == 5)
                mat[i][j] = s;

        }
        s = 0;
    }

    m /= 6;

    printf("(A) %d\n(B) %d\n\n", si, m);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 6; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}