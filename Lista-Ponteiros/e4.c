#include<stdio.h>

int main(){
    int v[5];
    int n;
    scanf("%d",&n);
    int *p = v;
    
    for(int i = 0; i < n; i++){
        scanf("%d",p+i);
    }

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += *(p+i);
    }
    printf("%d\n",soma);

    return 0;
}