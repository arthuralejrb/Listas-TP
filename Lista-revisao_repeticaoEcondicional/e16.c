#include <stdio.h>


int main() {

    int numero, qt, cod, 
    total_resi = 0,total_comer = 0 ,total_ind = 0;
    
    scanf("%d%d%d", &numero, &qt, &cod);
    
    while(numero != 0) {
        if(cod == 1) {
            printf("total a pagar: R$%.2f\n", qt * 1.3);
            total_resi += qt;
            
        }else if(cod == 2) {
            printf("total a pagar: R$%.2f\n", qt *  1.5);
            total_comer += qt;    
            
        }else {
            printf("total a pagar: R$%.2f\n", qt * 1.7);
            total_ind += qt;
            
        }
        scanf("%d%d%d",  &numero, &qt, &cod);
    }

    printf("Total de consumo para os três tipos de consumidor: %d\n", total_resi + total_comer + total_ind);
    printf("Média de consumo dos tipos 1 e 2: %d\n", (total_resi + total_comer) / 2);

    return 0;
}