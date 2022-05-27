#include <stdio.h>
#include <stdlib.h>
#include "fildaD.h"

void main(){
    Fila *fi;
    fi = cria_fila();

    ALUNO aluno1 = {1, 10, 10, 10};

    int x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d", x);


    x = fila_cheia(fi);
    if(x){
        printf("\nA fila esta cheia");
    }else{
        printf("\nA fila nao esta cheia");
    }


    x = fila_vazia(fi);
    if(x){
        printf("\nA fila esta vazia");
    }else{
        printf("\nA fila nao esta vazia");
    }

    x = insere_fila(fi, aluno1);

    if(x){
        printf("\nInserido com sucesso");
    }else{
        printf("\nErro ao inserir");
    }

    x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d", x);

    x = remove_fila(fi);
    if(x){
        printf("\nElemento removido com sucesso");
    }else{
        printf("\nErro, elemento nao removido");
    }


    x = consulta_fila(fi, &aluno1);
    if(x){
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", aluno1.matricula);
        printf("\nN1: %.2f", aluno1.n1);
        printf("\nN2: %.2f", aluno1.n2);
        printf("\nN3: %.2f", aluno1.n3);
    }else{
        printf("\nErro, consulta nao realizada");
    }





    destroi_fila(fi);


    return;
}
