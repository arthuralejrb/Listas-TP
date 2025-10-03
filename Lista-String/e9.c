#include <stdio.h>


int cont(char s[], char c){
   int conta = 0;
   for(int  i = 0; s[i] != '\0'; i++){
      if(s[i]==c){
         conta++;
      }
   }
   return conta;
}


int main(){
   char s[100], c;
   scanf("%s %c", s, &c);

   int cnt = cont(s, c);
   printf("%d\n",cnt);

   return 0;
}