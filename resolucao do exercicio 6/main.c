#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//define uma struct chamada cadastro e suas variaveis
typedef struct cadastro{
char nome[41];
int idade;
char endereco[31];
} Cadastro;


//Protipo das funcoes
Cadastro *aloca(int n);
Cadastro *realoca(Cadastro *cad, int n);
Cadastro coleta();
void imprimeDados(Cadastro *cad, int n);
void liberaDados(Cadastro *cad);
int salvaDados(Cadastro *cad, int n);

//main do programa
int main(){
    //declara variaveis para contagem
    int i, n = 0, lidos = 0, new_qtd;
    //declara ponteiro para a struct cadastro e uma variavel;
    Cadastro *cad, c;
    //declara ponteiro para o arquivo
    FILE *f;
    //abre o arquivo
    f = fopen("arquivo.bin", "rb");
    //print no console pedindo a quantidades de elementos para o cadastro
    printf("Informe a quantidade de elementos para Cadastro:\n");
    //recebe o input e salva na variavel new_qtd
    scanf("%d", &new_qtd);
    //chama função aloca para alocar memoria para o cadastro
    cad = aloca(new_qtd);

    //verifica se o arquivo existe
    if (f == NULL){
        //se nao existir imprime no console um pedido de input para a quantidade de elementos e aloca memoria para o cadastro
        printf("Informe a quantidade de elementos para Cadastro:\n");
        scanf("%d", &new_qtd);
        cad = aloca(new_qtd);
    }else{
        //se existir, chama função realoca para alocar memoria para o cadastro
        cad = aloca(1);
        printf("Arquivo de dados encontrado, efetuando leitura...");
        //chama função fread para ler o arquivo e salvar na struct cadastro
        while (!feof(f)){
            n = fread(&c, sizeof(Cadastro), 1, f);
            if (n == 1){
                lidos++;
                cad = realoca(cad, lidos);
                cad[lidos - 1] = c;
            }
        }
        //fecha o arquivo
        fclose(f);
        //imprime no console a quantidade de elementos lidos
        printf("\nforam lidos %d registros no arquivo de dados\n", lidos);
        //imprime um pedido de input para a quantidade de elementos que deseja adicionar
        printf("Informe quantos elementos serao inseridos alem dos que ja foram lidos: ");
        scanf("%d", &new_qtd);
        //chama funcao para realocar memoria para o cadastro
        cad = realoca(cad, lidos + new_qtd);
        //limpa o console
        system("cls");
    }
    //chama função para coletar os dados do usuario
    for (i = lidos; i < lidos + new_qtd; i++){
        cad[i] = coleta();
    }
    //imprime no console os dados 
    imprimeDados(cad, lidos + new_qtd);
    //espera um input para continuar
    getchar();
    // salva todos os dados e encerra programa
    printf("Foram salvos %d elementos no arquivo...\n\n\n", salvaDados(cad, lidos + new_qtd));
    //libera o espaço alocado na memoria
    liberaDados(cad);
    return 0;
}

//função para alocar memoria para o cadastro
Cadastro *aloca(int n){
    int i;
    //aloca memoria para o cadastro dinamicamente
    Cadastro *cad = (Cadastro *)malloc(n * sizeof(Cadastro));
    //retorna o ponteiro para o cadastro
    return cad;
}

//função para realocar memoria para o cadastro
Cadastro *realoca(Cadastro *cad, int lidos){ // realoca tamanho de quantos foram "lidos" + 1 posição a cada leitura no arquivo
    cad = (Cadastro *)realloc(cad, lidos * sizeof(Cadastro) + sizeof(Cadastro));
    return cad;
}

// coleta dados e devolve 1 estrutura preenchida
// cria um cadastro e preenche com os dados do usuario

Cadastro coleta(){ 
    Cadastro cad;
    printf("Digite o nome da pessoa:\n");
    fflush(stdin);
    fgets(cad.nome, 40, stdin);
    cad.nome[strlen(cad.nome) - 1] = '\0';
    printf("Digite a idade da pessoa:\n");
    scanf("%d", &cad.idade);
    printf("Digite o endereco da pessoa:\n");
    fflush(stdin);
    fgets(cad.endereco, 30, stdin);
    cad.endereco[strlen(cad.endereco) - 1] = '\0';
    system("cls");
    return cad;
}


// imprime os dados de uma estrutura de cadastro
void imprimeDados(Cadastro *cad, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Cadastro numero %d\n", i + 1);
        printf("Nome: %s\n", cad[i].nome);
        printf("Idade : %d\n", cad[i].idade);
        printf("Endereco: %s\n", cad[i].endereco);
        printf("************************************\n\n");
    }
}


// salva os dados de uma estrutura de cadastro
int salvaDados(Cadastro *cad, int n){
    int salvos;
    FILE *f = fopen("arquivo.bin", "wb");
    salvos = fwrite(cad, sizeof(Cadastro), n, f);
    fclose(f);
    return salvos;
}

//chama o free para liberar o espaço alocado na memoria
void liberaDados(Cadastro *cad){
    printf("Liberando memoria...\n\n\n");
    free(cad);
}
 