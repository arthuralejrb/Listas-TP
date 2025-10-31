#include <stdlib.h>
#include <stdio.h>


typedef struct{

    int X;
    int Y;

}ponto;


int main() {


    struct retangulo {

        ponto superior_esquerdo;
        ponto inferior_direito;

    };

    struct retangulo r1;

    scanf("%d", &r1.superior_esquerdo.X);
    scanf("%d", &r1.superior_esquerdo.Y);

    scanf("%d", &r1.inferior_direito.X);
    scanf("%d", &r1.inferior_direito.Y);

    int lado = abs(r1.superior_esquerdo.X - r1.inferior_direito.X);
    int altura = abs(r1.superior_esquerdo.Y - r1.inferior_direito.Y);

    int area = lado * altura;
    int diagonal = sqrt((lado * lado) + (altura * altura));
    int perimetro = 2 * (lado + altura);

    printf("área do retangulo: %d\n", area);
    printf("comprimento diagonal do retangulo: %d\n", diagonal);
    printf("perimetro do retangulo: %d\n", perimetro);


    return 0;
}