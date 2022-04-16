#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "minhalib.h"

int menu = 0;
int OperacaoJaCriada = 0;

void printTelainicial();
void printMenu();


int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    Operacao *op;
    do
    {
        printTelainicial();
        printMenu();

        switch (menu)
        {
            case 1:
                if (OperacaoJaCriada == 0){
                    printf("Digite o primeiro numero: ");
                    scanf("%f", &num1);
                    printf("Digite o segundo numero: ");
                    scanf("%f", &num2);
                    op = criaOperacao(num1, num2);
                    OperacaoJaCriada = 1;
                    printf("\nOperacao criada com sucesso!\n");
                }
                else{
                    printf("\nOperacao ja criada!\n");
                }
                break;

            case 2:
                if (OperacaoJaCriada == 1){
                    acessaOperacao(op, &num1, &num2);
                    printf("\nOs numeros sao: %f  e %f  \n", num1, num2);
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 3:
                if (OperacaoJaCriada == 1){
                    atribuiOperacao(op, num1, num2);
                    printf("\nOperacao atualizada com sucesso!\n");
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 4: 
                if (OperacaoJaCriada == 1){
                    printf("\nResultado da soma: %f\n", somaOperacao(op));
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 5:
                if (OperacaoJaCriada == 1){
                    printf("\nResultado da subtracao: %f\n", subtracaoOperacao(op));
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 6:
                if (OperacaoJaCriada == 1){
                    printf("\nResultado da multiplicacao: %f\n", multiplicacaoOperacao(op));
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 7:
                if (OperacaoJaCriada == 1){
                    printf("\nResultado da divisao: %f\n", divisaoOperacao(op));
                }
                else{
                    printf("\nOperacao nao criada!\n");
                }
                break;
            case 8:
                if (OperacaoJaCriada == 1){
                    printf("\n O resultado da ultima operacao eh: %f\n", obtemValorOperacao(op));
                }



        }

        system("pause");

        printf("\n\n");
        system("cls");
        system("pause");
    } while (menu != 0);
    
    printf("Fim do programa\n");
    return 0;
}

void printTelainicial(){
        printf("\n");
        printf("  _____         _               _             _\n");
        printf(" / ____|       | |             | |           | |\n");
        printf("| |       __ _ | |  ___  _   _ | |  __ _   __| |  ___   _ __   __ _\n");
        printf("| |      / _` || | / __|| | | || | / _` | / _` | / _ \\ | '__| / _` |\n");
        printf("| |____ | (_| || || (__ | |_| || || (_| || (_| || (_) || |   | (_| |\n");
        printf(" \\_____| \\__,_||_| \\___| \\__,_||_| \\__,_| \\__,_| \\___/ |_|    \\__,_|\n");
        printf("\n");
}


void printMenu(){
    printf("\n");
    
    printf("Escolha uma opção:\n");

    printf("1 - Criar uma estrutura de operação\n");
    printf("2 - Acessar uma estrutura de operação\n");
    printf("3 - Atribuir valores às estruturas de operação\n");
    printf("4 - Realizar a operação de soma\n");
    printf("5 - Realizar a operação de subtração\n");
    printf("6 - Realizar a operação de multiplicação\n");
    printf("7 - Realizar a operação de divisão\n");
    printf("8 - Acessar o valor do resultado\n");
    printf("0 - Sair do programa\n");
    printf("\n");

    printf("Opção: ");
    scanf("%d", &menu);
}