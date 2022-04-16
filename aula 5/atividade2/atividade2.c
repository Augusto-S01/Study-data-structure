#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

typedef struct cadastroCliente{
    char nome[20];
    char rua[20];
    int idade;
}CADCLI;

void main(){
    setlocale(LC_ALL, "portuguese");

    FILE *fp = fopen("arquivo.bin", "w");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    CADCLI clientes[5];
    //faça o input pelo usuario de 5 clientes
    for(int i = 0; i < 5; i++){
        printf("Cliente %d\n", i+1);

        printf("Digite o nome do cliente: \n");
        scanf("%s", clientes[i].nome);
        fflush(stdin);
        printf("Digite a rua do cliente: \n");
        scanf("%s", clientes[i].rua);
        fflush(stdin);
        printf("Digite a idade do cliente: \n");
        scanf("%d", &clientes[i].idade);
        fflush(stdin);
        printf("\n\n");
    }



    for(int i = 0; i < 5; i++){
        fwrite(&clientes[i], sizeof(CADCLI), 1, fp);
    }

    fclose(fp);

    //leitura do arquivo

    fp = fopen("arquivo.bin", "rb");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    CADCLI clienteEspecifico;

    fseek(fp, 2*sizeof(CADCLI), SEEK_SET);
    fread(&clienteEspecifico, sizeof(CADCLI), 1, fp);
    printf("Nome: %s\n", clienteEspecifico.nome);
    printf("Rua: %s\n", clienteEspecifico.rua);
    printf("Idade: %d\n", clienteEspecifico.idade);

    fclose(fp);
    system("pause");
    

}