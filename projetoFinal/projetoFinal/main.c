#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaLigada.h"
#include "print.h"

int contadorClientes = 0;
void inserirContato(Lista *li);
Cliente printEColetaDados();
void gerarRelatorioTotal(Lista *li);
void gerarRelatorioIndividualPorID(Lista *li);
void  gerarRelatorioIndividualPorNome(Lista *li);


int main(){
    setlocale(LC_ALL, "Portuguese");
    printInicio();
    int opcao;
    Lista *li = criaLista();
    FILE *arq = fopen("clientes.txt", "rb");
    if(arq != NULL){
        Cliente cl;
        while(fread(&cl, sizeof(Cliente), 1, arq) == 1){
            insere_lista_ordenada(li, cl);
        }
        contadorClientes = tamLista(li);
        fclose(arq);
    }else if(arq == NULL){
        printf("Arquivo não encontrado!\n");
        fclose(arq);
        fopen("clientes.txt", "wb");
        fclose(arq);
    }




    do{
        printMenu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                inserirContato(li);
                break;
            case 2:
                gerarRelatorioTotal(li);
                break;
            case 3:
                gerarRelatorioIndividualPorID(li);
                break;
            case 4:
                gerarRelatorioIndividualPorNome(li);
                break;
            case 5:
                // editarContato();
                break;
            case 6:
                // removerContato();
                break;
            case 7:
                printSair();
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
        system("cls");
    } while (opcao != 7);
    contadorClientes = tamLista(li);


    //salvar arquivo
    arq = fopen("clientes.txt", "wb");
    for(int i = 0; i < contadorClientes; i++){
        Cliente clienteBusca;
        consulta_lista_pos(li, i+1, &clienteBusca);
        fwrite(&clienteBusca, sizeof(Cliente), 1, arq);
    }

    apagaLista(li);
    fclose(arq);

    return 0;
}


void gerarRelatorioIndividualPorID(Lista *li){
    int id;
    printf("Digite o ID do contato: ");
    scanf("%d", &id);
    Cliente clienteBusca;
    consulta_lista_codigo(li, id, &clienteBusca);
    if(&clienteBusca == NULL){
        printf("Contato não encontrado!\n");
    }else{
        printf("Codigo: %d\n", clienteBusca.codigo);
        printf("Nome: %s\n", clienteBusca.nome);
        printf("Empresa: %s\n", clienteBusca.empresa);
        printf("Telefone: %s\n", clienteBusca.telefone);
        printf("Celular: %s\n", clienteBusca.celular);
        printf("Email: %s\n", clienteBusca.email);

        fflush(stdin);
        getch();
        printf("Pressione qualquer tecla para continuar");
    }
}

void gerarRelatorioIndividualPorNome(Lista *li){
    
}

void inserirContato(Lista *li){
    Cliente cl = printEColetaDados();


    insere_lista_ordenada(li, cl);
    contadorClientes = tamLista(li);
};

Cliente printEColetaDados(){
    Cliente cl;
    cl.codigo = contadorClientes+1;
    printf("Cliente numero %d\n", cl.codigo);
    printf("\n\n");
    printf("Digite o nome do contato: ");
    scanf("%s", cl.nome);
    printf("Digite o nome da empresa do contato: ");
    scanf("%s", cl.empresa);
    printf("Digite o nome do departamento do contato: ");
    scanf("%s", cl.departamento);
    printf("Digite o telefone do contato: ");
    scanf("%s", cl.telefone);
    printf("Digite o celular do contato: ");
    scanf("%s", cl.celular);
    printf("Digite o email do contato: ");
    scanf("%s", cl.email);
    return cl;
}

void gerarRelatorioTotal(Lista *li){
    printf("\n\n");
    printf("Contador de clientes: %d\n", contadorClientes);
    printf("\n\n");


    printf("Relatorio total:\n");

    for(int i = 1; i <= contadorClientes; i++){
        Cliente cl;
        consulta_lista_pos(li, i, &cl);
        printf("Codigo: %d\n", cl.codigo);
        printf("Nome: %s\n", cl.nome);
        printf("Empresa: %s\n", cl.empresa);
        printf("Telefone: %s\n", cl.telefone);
        printf("Celular: %s\n", cl.celular);
        printf("Email: %s\n", cl.email);
        printf("\n\n");

    }
    fflush(stdin);
    getch();
}
