#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modificaValor(int *int1, int *int2,int *int3);

void main(){

    int int1, int2, int3;
    int *pInt1, *pInt2, *pInt3;


    printf("Digite o valor da primeira variavel:\n");
    scanf("%d", &int1);

    printf("Digite o valor da segunda variavel:\n");
    scanf("%d", &int2);

    printf("Digite o valor da terceira variavel:\n");
    scanf("%d", &int3);



    pInt1 = &int1;
    pInt2 = &int2;
    pInt3 = &int3;

    modificaValor(pInt1, pInt2, pInt3);

    printf("Valor da primeira variavel %d \n",int1);
    printf("Valor da segunda variavel %d \n",int2);
    printf("Valor da terceira variavel %d \n",int3);
};

void modificaValor(int *int1, int *int2,int *int3){
    *int1 = *int1 + 100;
    *int2 = *int2 + 100;
    *int3 = *int3 + 100;
}