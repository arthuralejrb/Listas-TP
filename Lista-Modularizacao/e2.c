#include <stdio.h>
#include <string.h>


void cabecalho(char nome[40]) {

    printf("==================================\n");
    printf("PUC-Pontíficia Universidade Católica de Goiás\n");
    printf("Ténicas de Programação\n");
    printf("Nome: %s\n", nome);
    printf("==================================\n");

}


int main() {

    char nome[40];
    fgets(nome, 40, stdin);
    cabecalho(nome);

    return 0;
}