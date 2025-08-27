#include <stdio.h>

int main() {
    int time, cidade;
    float salario;
    int fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outros_time = 0;
    float soma_salario_botafogo = 0;
    int rj_outros = 0;
    int niteroi_fluminense = 0;

    printf("Pesquisa de Times do Rio de Janeiro\n");
    printf("-----------------------------------\n\n");

    do {
        printf("Time (0=Sair, 1=Flu, 2=Bota, 3=Vasco, 4=Fla, 5=Outros): ");
        scanf("%d", &time);
        
        if (time == 0) {
            break;
        }
        
        printf("Cidade (1=RJ, 2=Niteroi, 3=Outros): ");
        scanf("%d", &cidade);
        
        printf("Salario: R$ ");
        scanf("%f", &salario);
        
        printf("\n");

        switch (time) {
            case 1:
                fluminense++;
                break;
            case 2:
                botafogo++;
                soma_salario_botafogo += salario;
                break;
            case 3:
                vasco++;
                break;
            case 4:
                flamengo++;
                break;
            case 5:
                outros_time++;
                break;
        }

        if (cidade == 1 && time == 5) {
            rj_outros++;
        }

        if (cidade == 2 && time == 1) {
            niteroi_fluminense++;
        }

    } while (time != 0);

    float media_botafogo = 0;
    if (botafogo > 0) {
        media_botafogo = soma_salario_botafogo / botafogo;
    }

    printf("\nResultados da Pesquisa:\n");
    printf("-----------------------\n");
    
    printf("\nTorcedores por clube:\n");
    printf("Fluminense: %d\n", fluminense);
    printf("Botafogo: %d\n", botafogo);
    printf("Vasco: %d\n", vasco);
    printf("Flamengo: %d\n", flamengo);
    printf("Outros: %d\n", outros_time);
    
    printf("\nMedia salarial Botafogo:\n");
    if (botafogo > 0) {
        printf("R$ %.2f\n", media_botafogo);
    } else {
        printf("Nenhum torcedor\n");
    }
    
    printf("\nRJ torce outros clubes:\n");
    printf("%d pessoas\n", rj_outros);
    
    printf("\nNiteroi torce Fluminense:\n");
    printf("%d pessoas\n", niteroi_fluminense);
    
    printf("\nTotal entrevistados: %d\n", 
           fluminense + botafogo + vasco + flamengo + outros_time);

    return 0;
}