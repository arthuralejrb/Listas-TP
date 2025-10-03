#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void palavra(char sm[], char s[]){
    int i = 0;
    while(sm[i] != '\0' && sm[i] != ' '){
        s[i] = sm[i];
        i++;
    }
}


int main(){
    char sm[200], s[100];
    fgets(sm, sizeof(sm), stdin);
    
    palavra(sm, s);
    printf("%s\n",s);

    return 0;
}