#include <stdio.h>
#include <stdlib.h>


typedef struct {

    int X;
    int Y;

}plano;


int main(){

    plano Plano;
    scanf("%d", &Plano.X);
    scanf("%d", &Plano.Y);
    int d = Plano.X + Plano.Y;

    return 0;
}
