#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"

struct operacao{
    float num1;
    float num2;
    float resultado;
};

//Função que cria uma estrutura de operação
Operacao *criaOperacao(float num1, float num2){
    Operacao *op = (Operacao*)malloc(sizeof(Operacao));
    if(op!=NULL){
        op->num1 = num1;
        op->num2 = num2;
        op->resultado = 0;
        return op;
    }else{
        printf("Erro ao alocar memoria");
        exit(1);
    }
}

//Acessa os valores de uma estrutura de operação
void acessaOperacao(Operacao *op, float *num1, float *num2){
    *num1 = op->num1;
    *num2 = op->num2;
}

//Função que libera a memória alocada para uma estrutura de operação
void liberaOperacao(Operacao *op){
    free(op);
}

//Função que atribui valores às estruturas de operação
void atribuiOperacao(Operacao *op, float num1, float num2){
    op->num1 = num1;
    op->num2 = num2;
}

//função que realiza a operação de soma
float somaOperacao(Operacao *op){
    op->resultado = op->num1 + op->num2;
    return op->resultado;
}

//função que realiza a operação de subtração
float subtracaoOperacao(Operacao *op){
    op->resultado = op->num1 - op->num2;
    return op->resultado;
}


//função que realiza a operação de multiplicação
float multiplicacaoOperacao(Operacao *op){
    op->resultado = op->num1 * op->num2;
    return op->resultado;
}

//função que realiza a operação de divisão
float divisaoOperacao(Operacao *op){
    op->resultado = op->num1 / op->num2;
    return op->resultado;
}

//função que obtem o valor da operação
float obtemValorOperacao(Operacao *op){
    return op->resultado;
}