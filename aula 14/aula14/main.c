#include <stdio.h>
#include <stdlib.h>
#include "listaDDupla.h"
void main(){
    Lista *li;
    li = cria_lista();

    ALUNO aluno1 = {1,10,8,7};
    ALUNO aluno2 = {3,10,8,7};
    ALUNO aluno3 = {2,10,8,7};
    int x = tamanho_lista(li);
    printf("\nO tamanho da lista e: %d ",x);

    x = lista_cheia(li);
    if(x){
        printf("\n A lista esta cheia!");
    }else{
        printf("\n A lista nao esta cheia.");
    }

    x = lista_vazia(li);
    if(x){
        printf("\n A lista esta vazia");
    }else{
        printf("\nA lista nao esta vazia");
    }

    x = insere_lista_inicio(li,aluno1);
    if(x){
        printf("\nAluno inserido no inicio com sucesso!");
    }else{
        printf("\n Erro! aluno nao inserido.");
    }


    x = insere_lista_final(li, aluno2);
    if(x){
        printf("\n Aluno inserido no final com sucesso!");
    }else{
        printf("\nErro! aluno nao inserido.");
    }

    x = insere_lista(li,aluno3);
    if(x){
        printf("\n Aluno inserido no meio com sucesso");
    }else{
        printf("\n Erro! aluno nao inserido");
    }


    ALUNO al;
    x = consulta_lista_pos(li,1,&al);
    if(x){
        printf("\n Elemesnto consultado com sucesso!");
        printf("\n Matricula: %d",al.matricula);
        printf("\n Nota 1: %d",al.n1);
        printf("\n Nota 2: %d",al.n2);
        printf("\n Nota 3: %d",al.n3);
    }else{
        printf("\n Erro! elemento nao consultado.");
    }

    x = consulta_lista_mat(li,1,&al);
    if(x){
        printf("\n Elemesnto consultado com sucesso!");
        printf("\n Matricula: %d",al.matricula);
        printf("\n Nota 1: %d",al.n1);
        printf("\n Nota 2: %d",al.n2);
        printf("\n Nota 3: %d",al.n3);
    }else{
        printf("\n Erro! elemento nao consultado.");
    }










    x = remove_lista_inicio(li);
    if(x){
        printf("\n Elemento removido do inicio com sucesso!");
    }else{
        printf("\n Erro! elemento nao removido.");
    }

    x = remove_lista_final(li);
    if(x){
        printf("\n Elemento removido do final com sucesso!");
    }else{
        printf("\n Erro! elemento nao removido.");
    }

    x = remove_lista(li,2);
    if(x){
        printf("\n Elemento removido do meio com sucesso!");
    }else{
        printf("\n Erro! elemento nao removido.");
    }









    destroi_lista(li);
    return ;
}
