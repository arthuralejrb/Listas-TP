#include <stdio.h>
#include <math.h>


int delta(int a, int b, int c) {
    int deltinha = (b * b) - 4*(a*c); 

    return deltinha;
}

void baskarapos(int de, int a, int b, int c, int*r1, int*r2){
   de = sqrt(de);
   *r1 = (-b + de)/ (2*a);
   *r2 = (-b - de)/ (2*a);
   return 0;
}
int baskara0(int de, int a, int b, int c){
   int x = -b / (2*a);
}

int main() {

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    int de = delta(a,b,c);

    if(de >= 0){
      if(de){
         int x1 = 0, x2 = 0;
         baskarapos(de, a, b, c, &x1, &x2);
         printf("X1 : %d\nX2 : %d\n",x1,x2);
      }
      else{
         printf("X : %d\n", baskara0(de, a, b, c));
      }
    }
    else{
      printf("Resultado não pertence aos conjutos de números reais\n");
    }

    return 0;
}
