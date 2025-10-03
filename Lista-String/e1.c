#include <stdio.h>
#include <string.h>


void vogais(char s[]){

   int cont = 0;
   for(int i = 0; s[i] != '\0'; i++) {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'||
      s[i] == 'o' || s[i] == 'u'){
         cont++;
      }
   }
   printf("%d\n", cont);

}


int main() {

   char s[100];
   scanf("%s", s);

   vogais(s);

   return 0;
}