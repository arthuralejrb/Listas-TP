#include <stdio.h>
#include <string.h>


int palindromo(char s[]) {

    int cont = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        cont++;   
    }
    
    int R = cont -1; int L = 0;
    while(L < R) {
        if(s[L] != s[R]) {
            return 0;
        }
        
        L++; R--;
    }

   return 1;
}


int main(){

   char s[100];
   scanf("%s", s);

   if(palindromo(s)) {
      printf("É palindromo\n");
   }else {
      printf("Não é palindromo\n");
   }

   return 0;
}