#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int hora;
    int minutos;
    int segundos;


}hora;


int main() {

    hora horas[5];
    int maior_hora = 0, j = 0;
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &horas[i].hora);
        scanf("%d", &horas[i].minutos);
        scanf("%d", horas[i].segundos);

        int hora_total = horas[i].hora * 60 + horas[i].minutos + horas[i].segundos / 60; 

        if(hora_total > maior_hora){
            maior_hora =  hora_total;
            j = i;
        }
    
    }

    printf("MAIOR HORA:\n");
    printf("Horas: %d", horas[j].hora);
    printf("Minutos: %d", horas[j].minutos);
    printf("Segundos: %d", horas[j].segundos);


    return 0;
}
