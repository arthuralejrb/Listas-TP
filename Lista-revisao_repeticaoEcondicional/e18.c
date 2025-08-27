#include <stdio.h>
#include <string.h>

int main() {

    int dias, numero;
    char nome[30];
    float total = 0;


    while(numero != 0) {

        total += dias * 30;
        if(dias < 10) {
            total += dias * 15;
        }else {
            total += dias * 8;
        }

        printf("Cliente: %s\nNúmero: %d\nA pagar: R$%.2f\n",nome, numero, total);

        scanf("%d%s%d", &numero, &nome, &dias);
        total = 0;
    }

    return 0;
}