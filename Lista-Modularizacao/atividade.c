#include <stdio.h>

int potencia_valor(int a) {
    int potencia = 1;
    
    for(int i = 1; i < a; i++){
        potencia *= a;
    }

    return potencia;
}

int potencia_ponteiro(int a){

    int potencia = 1;

    return potencia;
}


int main(){

    int a;
    scanf("%d", &a);

    printf("%d", potencia(a));

    return 0;
} 