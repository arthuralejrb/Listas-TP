#include <stdio.h>

void incremento(int *po){
   (*po)++;
   return;
}

int main(){
   int a;
   scanf("%d",&a);

   int* p = &a;
   incremento(p);

   printf("%d\n",a);
   printf("%p\n",p);
}