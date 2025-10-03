#include <stdio.h>
#include <string.h>

void invert(char s[], int *cont, char sf[]){
   
   for(int i = 0; s[i] != '\0'; i++){
      (*cont)++;
   }
   for(int i = *cont - 1; i >= 0; i--){
      sf[*cont - 1 - i] = s[i];
   }
   
   sf[*cont] = '\0';
   return;
}

int main(){
   char s[100];
   char sf[100];
   int cnt = 0;

   scanf("%s",s);

   invert(s,&cnt,sf);
   printf("%s\n",sf);

   return 0;
}
