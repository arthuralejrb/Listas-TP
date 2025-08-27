#include <stdio.h>


int main () {

    int nascimento = 0, atual = 0, idade = 0;
    scanf("%d%d", &nascimento,&atual);

    if(atual > nascimento) {
        idade = atual - nascimento;
        printf("Você tem %d ", idade, "anos de idade\n");
    }else {
        printf("Datas inválidas!\n");
    }


    return 0;
}