#include <stdio.h>

int main() {
    int carteira, num_multas;
    float valor_multa, total_motorista;
    float total_arrecadado = 0;
    int maior_multas = 0;
    int carteira_maior_multas = 0;
    
    printf("Sistema DETRAN - Controle de Multas\n");
    printf("-----------------------------------\n\n");

    while (1) {
        printf("Numero da carteira (0 para sair): ");
        scanf("%d", &carteira);
        
        if (carteira == 0) {
            break;
        }
        
        printf("Numero de multas: ");
        scanf("%d", &num_multas);
        
        total_motorista = 0;
        for (int i = 1; i <= num_multas; i++) {
            printf("Valor da multa %d: R$ ", i);
            scanf("%f", &valor_multa);
            total_motorista += valor_multa;
        }
        
        total_arrecadado += total_motorista;
        
        if (num_multas > maior_multas) {
            maior_multas = num_multas;
            carteira_maior_multas = carteira;
        }
        
        printf("Divida do motorista %d: R$ %.2f\n\n", carteira, total_motorista);
    }
    
    printf("\nResultado Final:\n");
    printf("----------------\n");
    printf("Total arrecadado: R$ %.2f\n", total_arrecadado);
    printf("Maior numero de multas: %d (carteira %d)\n", maior_multas, carteira_maior_multas);
    
    return 0;
}