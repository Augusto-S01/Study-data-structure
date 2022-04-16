#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
    int int2,int1;

    printf("Digite o valor da primeira variavel:\n");
    scanf("%d", &int1);

    printf("Digite o valor da segunda variavel:\n");
    scanf("%d", &int2);

    if(&int1 > &int2){
        printf("O Maior endereco de memoria eh a primeira variavel\n");
    }else{
        printf("O Maior endereco de memoria eh a segunda variavel\n");
    };



    printf("O endereco da primeira varivel eh: %d \n", &int1);
    printf("O valor da primeira varivel eh: %d \n",int1);
    printf("O endereco da segunda varivel eh: %d \n", &int2);
    printf("O valor da segunda varivel eh: %d \n",int2);
}