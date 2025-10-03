#include <stdio.h>
 

int boli(char s1[], char s2[]){
   for(int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++){
      if(s1[i] != s2[i]){
        return 0; 
      } 
   }
   return 1;
}


int main(){
   char s1[100], s2[100];
   scanf("%s %s",s1,s2);
   printf("%d\n", boli(s1,s2));

   return 0;
}