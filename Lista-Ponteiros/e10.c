#include <stdio.h>


int main() {
   int mat[3][3];
   int *P = mat;

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++) {
         scanf("%d", &mat[i][j]);
      }
   } 

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         printf("%d ", *P+i*3+j);
      }
      printf("\n");
   }

   return 0;
}