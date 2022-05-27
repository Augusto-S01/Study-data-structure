#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"


int main(){
  Lista li = criaLista();
  apagaLista(li);
  int x = tamLista(li);
  printf("O tamanho da lista eh: %d",x);

  if(listaVazia(li)){
    printf("\nLista esta vazia!");
  }else{
    printf("\nLista nao esta vazia");
  }



  Aluno a1;
  a1.matricula = 1;
  a1.n1 = 10;
  a1.n2 = 10;
  a1.n3 = 10;


  int y = insere_inicio_lista(li,a1);

  if(y){
    printf("\nInserido no inicio com sucesso!");
  }else{
    printf("\nNao foi possivel inserir no inicio");
  }

  Aluno a2;
  a2.matricula = 2;
  a2.n1 = 9;
  a2.n2 = 9;
  a2.n3 = 9;

  int z = insere_final_lista(li,a2);

  if(z){
    printf("\n Inserido no final com sucesso!");
  }else{
    printf("\n Nao foi possivel inserir no final");
  }


   Aluno a3;
  a3.matricula = 3;
  a3.n1 = 9;
  a3.n2 = 9;
  a3.n3 = 9;
  int a = insere_lista_ordenada(li,a3);

  if(a){
    printf("Inserido ordenadamente com sucesso!");
  }else{
    printf("\n Nao foi possivel inserir ordenadamente");
  }

  x = remove_inicio_lista(li);
  if(x){
    printf("\nRemovido do inicio com sucesso!");
  }else{
    printf("\nNao foi possivel remover do inicio");
  }


  x = remove_final_lista(li);
  if(x){
    printf("\nRemovido do final com sucesso!");
  }else{
    printf("\nNao foi possivel remover do final");
  }

  x = remove_lista(li,1);
  if(x){
    printf("\nRemovido elemento com sucesso!");
  }else{
    printf("\nNao foi possivel remover elemento");
  }


  x = consulta_lista_pos(li,1,&a1);
  printf("\n\n Conteudo da posicao 1:");
  printf("\n Matricula: %d",a1.matricula);
  printf("\n N1: %.2f",a1.n1);
  printf("\n N2: %.2f",a1.n2);
  printf("\n N3: %.2f",a1.n3);


  x = consulta_lista_mat(li,2,&a2);
  printf("\n\n Conteudo da matricula 2:");
  printf("\n Matricula: %d",a2.matricula);
  printf("\n N1: %.2f",a2.n1);
  printf("\n N2: %.2f",a2.n2);
  printf("\n N3: %.2f",a2.n3);
  





}
