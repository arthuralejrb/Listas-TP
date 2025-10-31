#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

    char nome[100];
    int idade;
    char endereco[100];

}pessoa;


int main() {

    pessoa p1;
    scanf("%s%d%s", p1.nome, &p1.idade,p1.endereco);

    printf("Nome:%s\n", p1.nome);
    printf("Idade:", p1.idade);
    

    return 0;
}