#include <stdio.h>

int main() {
    int ini, fin,A,B, duracao;

    scanf("%d", &ini);
    scanf("%d", &A);
    scanf("%d", &fin);
    scanf("%d", &B);
    
    fin=fin*60+B;
    ini=ini*60+A;

    if (fin <= ini) {
        duracao = (fin +3600) - ini;
    } 
    else {
        duracao = (fin - ini);
    }
    
    ini=duracao/60;
    duracao=duracao%60;
    printf("%d\n", duracao);


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ini,duracao);

    return 0;
}