#include<stdio.h>

int main(){
    char c[30];
    scanf("%s",c);
    char *p = c;
    int i = 0;
    while(*p != '\0'){
        if(*p == 'a' || *p == 'A' || *p == 'e' ||*p == 'E'
            || *p == 'i' || *p == 'I' || *p == 'o' || *p == 'O' || *p == 'u' || *p == 'U'){
                i++;
            }
            p++;
    }
    printf("%d\n",i);

   return 0;
}