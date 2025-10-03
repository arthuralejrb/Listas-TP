#include<stdio.h>

int main(){
    int v[5];
    int n;
    scanf("%d",&n);
    int *p = v;

    for(int i = 0; i < n; i++){
        scanf("%d",p+i);
    }

    int maior = 0;
    int * end;
    for(int i = 0; i < n; i++){
        if(maior < *(p+i)){
            maior = *(p+i);
            end = p + i;
        }
    }
    printf("%p\n",end);

   return 0;
}