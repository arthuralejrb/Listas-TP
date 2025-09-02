#include <stdio.h>

void verificarMes(int N) {

    if(N == 1)
        printf("Janeiro\n");
    else if(N == 2)
        printf("Fevereiro\n");
     else if(N == 3)
        printf("Março\n");
     else if(N == 4)
        printf("Abril\n");
     else if(N == 5)
        printf("Maio\n");
     else if(N == 6)
        printf("Junho\n");
     else if(N == 7)
        printf("Julho\n");
     else if(N == 8)
        printf("Agosto\n");
     else if(N == 9)
        printf("Setembro\n");
     else if(N == 10)
        printf("Outubro\n");
     else if(N == 11)
        printf("Novembro\n");
     else if(N == 12)
        printf("Dezembro\n");
     else
        printf("BURRO!!! MES NAO EXISTE\n");

}



int main() {
    int N;
    scanf("%d", &N);

    verificarMes(N);

    return 0;
}