#include <stdio.h>

void main(){
    printf("Digite um numero de acordo com a tabela para obter o respectivo resultado");


    printf("\n");
    printf("Entrada | Retorno");
    printf("\n");
    printf("   1    |    A   \n");
    printf("   2    |    B   \n");
    printf("   3    |    C   \n");
    printf("   4    |    D   \n");
    printf(" DEFAULT|    0   \n");
    printf("\n");


    char input;
    scanf("%c",&input);

    if(input == '1'){
        printf("A");
    }else if(input == '2'){
        printf("B");
    }else if(input == '3'){
        printf("C");
    }else if(input == '4'){
        printf("D");
    }else{
        printf("0");
    }

}

