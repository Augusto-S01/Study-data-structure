#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
    float vetor[10];


    for(int i = 0; i < 10; i++){
        printf("Digite o valor da variavel de posicao %d : \n" , i);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("A varivel de posicao %d ocupa o espaco de memoria %d \n",i,&vetor[i]);
    }
}