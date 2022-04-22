//Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
// e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro “n” e
// retorne o ponteiro para um bloco de memória de tamanho “n” bytes, alocado
// dinamicamente, para ser utilizado como vetor desse tipo de estrutura. Solicite também
// que o usuário digite os dados desse vetor dentro de uma outra função especializada em
// coletar dados.

#include <stdio.h>
#include <stdlib.h>


typedef struct cadastro{
    char nome[50];
    int idade;
    char endereco[50];
}cadastro;

cadastro* cadastroCriar(int n);
void cadastro_coletar(cadastro* r);
void cadastroImprimir(cadastro* r);


int main(){

    int n;
    printf("Digite o numero de cadastros: ");
    scanf("%d", &n);

    cadastro* arrayDeCadastros = cadastroCriar(n);

    for(int i = 0; i < n; i++){
        cadastroColetar(&arrayDeCadastros[i]);
    }

    for(int i = 0; i < n; i++){
        cadastroImprimir(&arrayDeCadastros[i]);
    }
    return 0;
}

cadastro* cadastroCriar(int n){
    cadastro *cadastros;
    cadastros = (cadastro*) malloc(n * sizeof(cadastro));
    return cadastros;
}

void cadastroColetar(cadastro* r){
    printf("Digite o nome: ");
    scanf("%s", r->nome);
    printf("Digite a idade: ");
    scanf("%d", &r->idade);
    printf("Digite o endereco: ");
    scanf("%s", r->endereco);
}

void cadastroImprimir(cadastro* r){
    printf("Nome: %s\n", r->nome);
    printf("Idade: %d\n", r->idade);
    printf("Endereco: %s\n", r->endereco);
}