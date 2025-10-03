#include <stdio.h>
#include <string.h>

int aaa(char s[]){
   
   int c = 1;
   for(int i = 0; s[i] != '\0'; i++){
      if(s[i] == ' '){
         c++;
      }
   }
   
   return c;
}

int main(){
   char s[100];
   fgets(s, sizeof(s), stdin);

   int cont = aaa(s);

   printf("%d\n", cont);

   return 0;
}