#include <stdio.h>


void contaVogais(char str[], int *qtde){

    for(int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);

        if(c == 'a' || c == 'e' || c == 'i'||c == 'o' || c == 'u') 
            (*qtde)++;
    }

}

int main() {

    int qtde = 0;
    char str[100];
    scanf("%s", str);

    contaVogais(str[100], &qtde);

    return 0;
}