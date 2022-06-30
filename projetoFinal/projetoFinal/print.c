#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "listaLigada.h"

void printInicio(){
    printf("  ___                       _             _                        _        _            \n");
    printf(" / _ \\                     | |           | |                      | |      | |           \n");
    printf("/ /_\\ \\ __ _  ___ _ __   __| | __ _    __| | ___    ___ ___  _ __ | |_ __ _| |_ ___  ___ \n");
    printf("|  _  |/ _` |/ _ \\ '_ \\ / _` |/ _` |  / _` |/ _ \\  / __/ _ \\| '_ \\| __/ _` | __/ _ \\/ __|\n");
    printf("| | | | (_| |  __/ | | | (_| | (_| | | (_| |  __/ | (_| (_) | | | | || (_| | || (_) \\__ \\\n");
    printf("\\_| |_/\\__, |\\___|_| |_|\\__,_|\\__,_|  \\__,_|\\___|  \\___\\___/|_| |_|\\__\\__,_|\\__\\___/|___/\n");
    printf("        __/ |                                                                            \n");
    printf("       |___/                                                                             \n");

    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Pressione qualquer tecla para continuar...\n");
    fflush(stdin);
    getch();
    system("cls");
}

void printMenu(){
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("1 - insercao de novo contato\n");
    printf("2 - Gerar e exibir relatorio de contatos em forma de lista total\n");
    printf("3 - Gerar e exibir relatorio individual com busca por identificador(Codigo)\n");
    printf("4 - Gerar e exibir relatorio com busca por nome (neste caso exibir todos com o mesmo nome)\n");
    printf("5 - Edicao de dados do contato, escolhido por identificador\n");
    printf("6 - Remover contato, escolhido por identificador\n");
    printf("7 - Sair e encerrar o programa\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
}

void printSair(){
    printf("Salvando e saindo do programa...\n");
}


