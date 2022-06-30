#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"
#include <string.h>
#include <locale.h>

int contadorCliente = 1;

void printInicio();
FILE* buscaArquivo();
FILE* criaArquivo();
void printMenu();
void preencheDados(Cliente *cl);
void sair();
void inserirContato(Lista *li);

int main(){
    setlocale(LC_ALL, "Portuguese");

    printInicio();
    atualizaContador();
    Lista li = criaLista();
    FILE* arquivo = buscaArquivo(li);
    if(arquivo == NULL){
        printf("Arquivo não encontrado\n");
        arquivo = criaArquivo();
    }


    int opcao;
    do{
        printMenu();
        scanf("%d", &opcao);
        system("cls");
        switch(opcao){
            case 1:
                inserirContato(li);
                break;
            case 2:
                //gerarRelatorioTotal(li);
                break;
            case 3:
                // gerarRelatorioIndividualPorID();
                break;
            case 4:
                // gerarRelatorioIndividualPorNome();
                break;
            case 5:
                // editarContato();
                break;
            case 6:
                // removerContato();
                break;
            case 7:
                sair();
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }while(opcao != 7);
    salvarArquivo(arquivo, li);
}

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
    getchar();
    system("cls");
}

void printMenu(){
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("1 - inserção de novo contato\n");
    printf("2 - Gerar e exibir relatório de contatos em forma de lista total\n");
    printf("3 - Gerar e exibir relatório individual com busca por identificador(Código)\n");
    printf("4 - Gerar e exibir relatório com busca por nome (neste caso exibir todos com o mesmo nome)\n");
    printf("5 - Edição de dados do contato, escolhido por identificador\n");
    printf("6 - Remover contato, escolhido por identificador\n");
    printf("7 - Sair e encerrar o programa\n");
    printf("\n");
    printf("Digite a opção desejada: ");
}
void inserirContato(Lista *li){
    Cliente al;
    preencheDados(&al);
    if(insere_inicio_lista(li, al)){
        printf("Contato inserido com sucesso\n");
    }else{
        printf("Erro ao inserir contato\n");
    }
}

void sair(){
    printf("Saindo do programa...\n");

}


void salvarArquivo(FILE *arquivo, Lista li){
    fclose(arquivo);
    arquivo = fopen("contatos.txt", "r+b");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo\n");
    }else{
        fwrite(li, sizeof(Cliente), contadorCliente, arquivo);
        fclose(arquivo);
    }

}
void preencheDados(Cliente *al){
    al->codigo = contadorCliente;
    contadorCliente++;
    printf("Digite o nome do contato: ");
    scanf("%s", al->nome);
    printf("Digite o nome da empresa do contato: ");
    scanf("%s", al->empresa);
    printf("Digite o nome do departamento do contato: ");
    scanf("%s", al->departamento);
    printf("Digite o telefone do contato: ");
    scanf("%s", al->telefone);
    printf("Digite o celular do contato: ");
    scanf("%s", al->celular);
    printf("Digite o email do contato: ");
    scanf("%s", al->email);

    system("cls");
}



FILE* buscaArquivo(Lista li){

    FILE* arquivo;
    arquivo = fopen("clientes.txt", "r+b");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo\n");
        return NULL;
    }else{
        fread(li, sizeof(Cliente), contadorCliente, arquivo);
        fclose(arquivo);
        return arquivo;
    }       
    return arquivo;
}

FILE* criaArquivo(){
    FILE* arquivo;
    arquivo = fopen("clientes.txt", "w+b");
    return arquivo;
}
