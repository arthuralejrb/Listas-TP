#include <stdio.h>


int main() {

    char nome[30];
    float salario = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%s", &nome);
        scanf("%f", &salario);

        printf("%s", nome);
        if(salario < 1300){
            printf("Isento\n");
        }else if(salario >= 1300 && salario < 2300){
            printf("IRRF: %.2f", salario * 0.1);

        }else{
            printf("IRRF: %.2f", salario * 0.15);
        }
        
        
    }

    return 0;
}