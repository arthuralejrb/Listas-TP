#include <stdio.h>
#include <string.h>

void concatenar(char s1[], char s2[], char s[], int cont){
   
   for(int i = 0; s1[i] != '\0'; i++){
      s[i] = s1[i];
      cont++;
   }

   int j = 0;
   for(int i = cont; s2[j] != '\0'; i++){
      s[i] = s2[j];
      cont++;
      j++;
   }
   
   for(int i = 0; i < cont; i++){
      printf("%c",s[i]);
   }
   return 0;
}


int main() {

   char s1[100], s2[100], s[100];
   scanf("%s%s", s1, s2);
   int cont = 0;

   concatenar(s1,s2,s,cont);


   return 0;
}