#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

void main(){
    Pilha *pi;
    pi = criar_Pilha();

    ALUNO aluno = {1,10,8,20};

    int x;
    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha e: %d\n", x);

    x = pilha_cheia(pi);
    if(x){
        printf("\nPilha esta cheia\n");
    }else{
        printf("\nPilha nao esta cheia\n");
    }

    x = pilha_vazia(pi);
    if(x){
        printf("\nPilha esta vazia\n");
    }else{
        printf("\nPilha nao esta vazia\n");
    }

    x = insere_pilha(pi, aluno);
    if(x){
        printf("\nInserido com sucesso\n");
    }else{
        printf("\nErro, Elemento nao inserido\n");
    }

    x = remove_pilha(pi);
    if(x){
        printf("\nElemento removido com sucesso!\n");
    }else{
        printf("\nErro, Elemento nao removido\n");
    }

    x = consulta_pilha(pi, &aluno);
    if(x){
        printf("\nConsulta realizada com sucesso:\n");
        printf("\nMatricula: %d\n", aluno.matricula);
        printf("\nNota 1: %d\n", aluno.n1);
        printf("\nNota 2: %d\n", aluno.n2);
        printf("\nNota 3: %d\n", aluno.n3);
    }else{
        printf("\nErro, Consulta nao realizada\n");
    }


    destroi_pilha(pi);
    return;
}
