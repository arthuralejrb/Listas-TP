#include <stdio.h>

int main(){

    float bruto = 0, prestacao = 0;
    scanf("%f%f", &bruto, &prestacao);

    if(prestacao > bruto * 0.3) {
        printf("Não pode ser concedido\n");
    }else {
        printf("Pode ser concedido\n");
    }


    return 0;
}