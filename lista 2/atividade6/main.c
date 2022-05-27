#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct cadastro{
    char nome[50];
    int idade;
    char endereco[50];
}cadastro;




void main(){

    FILE *arquivo;
    arquivo = fopen("cadastros.txt", "rb");
    
    if(arquivo == NULL){
        fclose(arquivo);
        primeiraSessao();
    }else{
        fclose(arquivo);
        sessao();
    }
}



primeiraSessao(){
    cadastro *cadastros;

    int n = perguntarNumeroDeCadastros();
    cadastros = gerarCadastros(n);
    for(int i = 0; i < n; i++){
        coletarInfoCadastro(&cadastros[i]);
    }
    salvarCadastros(cadastros, n);

    


}
void sessao(){
    cadastro *cadastros;
    int numeroDeCadastrosLidos = verificarNumeroDeCadastros();
    printf("%d\n", numeroDeCadastrosLidos);
    cadastros = gerarCadastros(numeroDeCadastrosLidos);

    FILE *arquivo;
    arquivo = fopen("cadastros.txt", "rb");
    for(int i = 0; i < numeroDeCadastrosLidos; i++){
        fread(&cadastros[i], sizeof(cadastro), 1, arquivo);
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Idade: %d\n", cadastros[i].idade);
        printf("Endereco: %s\n", cadastros[i].endereco);
        printf("\n");

    }
    fclose(arquivo);

    printf("deseja adicionar mais cadastros?\n");
    printf("1 - sim\n");
    printf("2 - nao\n");
    int opcao;
    scanf("%d", &opcao);
    if(opcao == 1){
        int n = perguntarNumeroDeCadastros();
        cadastros = gerarCadastros(n+numeroDeCadastrosLidos);
        printf("desgrça %d\n", n+numeroDeCadastrosLidos);
        for(int i = 0; i < n; i++){
            coletarInfoCadastro(&cadastros[i+numeroDeCadastrosLidos]);
        }
        system("cls");
        for(int i = 0; i < numeroDeCadastrosLidos+n; i++){
            fread(&cadastros[i], sizeof(cadastro), 1, arquivo);
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Idade: %d\n", cadastros[i].idade);
            printf("Endereco: %s\n", cadastros[i].endereco);
            printf("\n");

        }
        printf("salvando %d\n", numeroDeCadastrosLidos+n);
        adicionarNoArquivo(cadastros, n+numeroDeCadastrosLidos);
    }


}


int verificarNumeroDeCadastros(){
    FILE *arquivo;
    arquivo = fopen("cadastros.txt", "rb");
    int n = 0;

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo");
        return 0;
    }else{
        while(!feof(arquivo)){
            cadastro c;
            fread(&c, sizeof(cadastro), 1, arquivo);
            n++;
        }
        fclose(arquivo);
        return n-1;
    }
}



perguntarNumeroDeCadastros(){
    printf("Digite o numero de cadastros que deseja registrar: ");
    int n;
    scanf("%d", &n);
    return n;
}
gerarCadastros(int n){
    cadastro *cadastros;
    cadastros = (cadastro*) malloc(n * sizeof(cadastro));
    return cadastros;
}
coletarInfoCadastro(cadastro* r){
    printf("Digite o nome: ");
    scanf("%s", r->nome);
    printf("Digite a idade: ");
    scanf("%d", &r->idade);
    printf("Digite o endereco: ");
    scanf("%s", r->endereco);
    system("cls");
}
salvarCadastros(cadastro* cadastros, int n){
    FILE *arquivo;
    arquivo = fopen("cadastros.txt", "wb");
    for(int i = 0; i < n; i++){
        fwrite(&cadastros[i], sizeof(cadastro), 1, arquivo);
    }
    fclose(arquivo);
}
adicionarNoArquivo(cadastro* cadastros, int n){
    FILE *arquivo;
    arquivo = fopen("cadastros.txt", "wb");
    printf(" salvando : %d\n", n);
    for(int i = 0; i < n; i++){
        fwrite(&cadastros[i], sizeof(cadastro), 1, arquivo);
    }
    fclose(arquivo);

}