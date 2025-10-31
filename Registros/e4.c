#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

    int matricula;
    char nome[100];
    int prova1;
    int prova2;
    int prova3;
    float media;

}aluno;


int main() {

    int N = 3;
    float maior = 0;
    int j = 0;
    aluno alunos[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &alunos[i].matricula);
        scanf("%s", &alunos[i].nome);

        scanf("%d", &alunos[i].prova1);
        scanf("%d", &alunos[i].prova2);
        scanf("%d", &alunos[i].prova3);

        alunos[i].media = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3) / 3;
        if(alunos[i].media > maior) {
            maior = alunos[i].media;
            j = i;
        }

    }

    printf("Aluno:%s\n", alunos[j].nome);
    printf("Média:%.2f\n", alunos[j].media);

    return 0;
}