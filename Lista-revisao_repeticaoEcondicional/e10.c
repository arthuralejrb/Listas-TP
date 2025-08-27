#include <stdio.h>
#include <string.h>


int main() {

    char nome[30];
    int n1, n2;
    float media = 0;

    printf("%s\n%d%d", nome, n1, n2);
    
    media = (n1 + n2) / 2;

    printf("%.2f", media);

    if(media >= 7) {
        printf("Aprovado\n");
    }else if(media <= 3) {
        printf("Reprovado\n");
    }else{
        printf("Em prova final\n");
    }


    return 0;
}