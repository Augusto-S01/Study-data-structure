#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y);

int main(){
    int a,b;
    scanf("%d %d", &a , &b);
    
    troca(&a, &b);
    printf("a = %d  , b = %d\n",a,b);
    system("pause");
}

void troca(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}