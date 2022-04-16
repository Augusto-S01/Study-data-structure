#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    //declara um ponteiro para um char
    char *p;

    //aloca um espaço na memoria no valor de um char
    p = (char*)malloc(sizeof(char));

    //copia o valor "IFSP" para o espaço de memoria que "p" aponta
    strcpy(p, "IFSP");

    //realoca o ponteiro 
    p = (char*)realloc(p, 15*sizeof(char));

    //copia o valor "Guarulhos" 
    strcat(p, " - Guarulhos");

    //imprime o conteudo da string alocada no ponteiro p
    printf("%s",p);

    //libera o espaço na memoria 
    free(p);
}


//funcao que retorna vazio e recebe dois ponteiros como parametro
void funcao_troca_inteiros(int *a, int *b){

    //declaracao de um ponteiro
    int *aux;

    //alocação do ponteiro na memoria 
    aux = (int*)malloc(sizeof(int));

    //verificação se o ponteiro nao é nulo
    if(aux == NULL){
        //caso seja  imprime que a memoria é insuficiente
        printf("memoria insuficiente\n");

        //encerra o programa
        exit(1);
    } else{

        //aponta o ponteiro *a para *aux
        *aux = *a;

        //aponta *a para *b
        *a = *b;

        //aponta *b para *aux
        *b = *aux;

        //libera o espaço *aux
        free(aux);
    }

    //em resumo a funcao troca os valores do inteiro com a ajuda de um ponteiro temporario que é alocado durante o codigo 
}