#include <stdio.h>
int notas[20][2];
int medias[20];


void cadastrar_notas(int i) {
    int a, b;
    scanf("%d%d", &a,&b);

    notas[i][0] = a;
    notas[i][1] = b;
}


int media(int a,int b) {
    return (a + b) / 2;
}


void listar_medias() {

    printf("Médias:\n");
    for(int i = 0; i < 20; i++){
        printf("%d ", medias[i]);
    }

}


void maior_menor(){
    int maior = 0, menor = 100000;
    
    for(int i = 0; i < 20; i++) {
        if(medias[i] > maior){
            maior = medias[i];
        }
        if(medias[i] < menor) {
            menor = medias[i];
        }
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\n");

}


int media_geral() {

    int media = 0;

    for(int i = 0; i < 20; i++){
        media += medias[i];
    }

    return media / 20;
}


int aprovados() {
    int aprovados = 0;
    for(int i = 0; i < 20; i++) {
        
        if(medias[i] >= 6)
            aprovados++;
    }

    return aprovados;
}


int main() {

    int o;
    while(scanf("%d", &o)){
        if(o == 1) {
            for(int i = 0; i < 20; i++){
                cadastrar_notas(i);
            }
        }
        
        if(o == 2) {
            for(int i = 0; i < 20; i++){
                medias[i] = media(notas[i][0], notas[i][1]);
            }
        }
        
        if(o == 3){
            listar_medias();
        }

        if(o == 4) {
            maior_menor();
        }

        if(o == 5) {
            media_geral();
        }

        if(o == 5) {
            int aprov = aprovados();
            int reprov = 20 - aprov;

            printf("Aprovados: %d\n", aprov);
            printf("Reprovados: %d\n", reprov);
        }

    }

    return 0;
}