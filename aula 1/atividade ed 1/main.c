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

    switch (input){
        case '1':
            printf("A");
            break;
        case '2':
            printf("B");
            break;
        case '3':
            printf("C");
            break;
        case '4':
            printf("D");
            break;
        default:
            printf("0");
            break;
    };

}

