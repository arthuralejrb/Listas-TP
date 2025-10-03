#include<stdio.h>

int main(){
    char c[30];
    scanf("%s",c);
    char *p = c;
    int i = 0;
    
    while(*p != '\0'){
        i++;
        p++;
    }
    
    printf("%d\n",i);

   return 0;
}