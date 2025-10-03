#include <stdio.h>


void trocar(char s[], char c1, char c2){
   for(int i = 0; s[i] != '\0'; i++){
      if (s[i] == c1){
         s[i] = c2;
      }
   }
}


int main(){
   char s[100], c1, c2;
   scanf("%s %c %c", s, &c1, &c2);
   
   trocar(s, c1, c2);
   
   printf("%s\n", s);
   
   return 0;
}