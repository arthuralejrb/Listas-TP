#include <stdio.h>


int main() {

    int numero, data, quantidade;
    float valor;

    scanf("%d%d%d%f",&numero, &data, &quantidade, &valor);
    while(numero != 0) {

        printf("Valor da compra: R$%.2f\n", quantidade * valor);

        scanf("%d%d%d%f",&numero, &data, &quantidade, &valor);
    }

    return 0;
}