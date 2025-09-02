#include <stdio.h>

void dia_semana(int dia) {

    switch (dia)
    {
    case '1':
        printf("Domingo\n");
        break;
    case '2':
        printf("Segunda-Feira\n");
        break;
    case '3':
        printf("Terça-Feira\n");
        break;
    case '4':
        printf("Quarta-Feira\n");
        break;
    case '5':
        printf("Quinta-Feira\n");
        break;
    case '6':
        printf("Sexta-Feira\n");
        break;
    case '7':
        printf("Sábado\n");
        break;
    default:
        printf("Dia inválido\n");
        break;
    }



}

int main() {

    int N;
    scanf("%d", &N);

    dia_semana(N);

    return 0;
}