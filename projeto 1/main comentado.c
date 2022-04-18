// Trabalho feito por:

// AUGUSTO DOS SANTOS SOUZA
// GU3020207

// JHENNERSON BARBOSA DA SILVA
// GU3020461


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


//define uma struct e um tipo para ela
typedef struct conta{
    int id;
    char tipoDeConta[20];
    char nomeDoCliente[50];
    float saldo;
} conta;

//define uma variavel global com o numero total de contas criadas
//isso serve para a criação de id das contas
//sendo o id algo unico na maioria dos programas
//nao faz sentido deixa o usuario definir o id
//pois o mesmo poderia definir um array repetido
int contagemDeContas = 0;

//protitpos das funções utilizadas
conta* criaArrayDinamicoDeContas(int numeroDeContas);
conta preencheConta();
void fechaArquivo(FILE* arquivo);
void liberaConta(conta* conta);


void main(){
    //define o charset para portugues
    setlocale(LC_ALL, "Portuguese");

    //define o numero de contas que sera passado na função criaArrayDinamicoDeContas
    int numeroDeContas;
    printf("Seja bem vindo ao gerenciador de contas\n");
    printf("Digite o numero de contas que deseja alocar na memoria\n");
    scanf("%d", &numeroDeContas);

    conta* contas = criaArrayDinamicoDeContas(numeroDeContas);

    //loop para preencher as contas
    for(int i = 0; i < numeroDeContas; i++){
        contas[i] = preencheConta();
    }

    //loop para mostrar as contas
    for(int i = 0; i < numeroDeContas; i++){
        system("cls");
        printf("Conta %d\n", contas[i].id);
        printf("Tipo de conta: %s\n", contas[i].tipoDeConta);
        printf("Nome do cliente: %s\n", contas[i].nomeDoCliente);
        printf("Saldo: %f\n", contas[i].saldo);
        printf("\n");
        system("pause");
    }
    

    //parte do programa que salva as contas em um arquivo
    //cria ponteiro para o arquivo
    FILE *f;
    //cria um arquivo com o nome contas.txt ou sobreescreeva o arquivo existente
    f = fopen("contas.txt", "wb");
    //se o arquivo nao foi aberto corretamente
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    //escreve o array de contas no arquivo
    fwrite(contas, sizeof(conta), numeroDeContas, f);
    //fecha o arquivo
    fechaArquivo(f);
    //libera a memoria alocada para o array de contas
    liberaConta(contas);

}






//função que recebe um ponteiro de arquivo e fecha o arquivo
void fechaArquivo(FILE* arquivo){
    fclose(arquivo);
}

// função que recebe um ponteiro de conta e libera o espaço de memoria alocado
void liberaConta(conta* conta){
    free(conta);
}

//função que recebe um inteiro e cria um array de contas com o tamanho desse inteiro
conta* criaArrayDinamicoDeContas(int numeroDeContas){
    conta *contas = (conta*) malloc(numeroDeContas * sizeof(conta));
    return contas;
}

//função que nao recebe nenhum parametro e retorna uma conta preenchida de acordo com o usuario
conta preencheConta(){
    conta conta;

    contagemDeContas++;
    printf("Digite os dados da conta de id:  %d\n", contagemDeContas);
    conta.id = contagemDeContas;

    int tipoDeConta = 0;
    

    do
    {
        printf("Digite o numero respectivo ao tipo de conta:\n");
        printf("1 - Conta Corrente\n");
        printf("2 - Conta Poupança\n");
        printf("3 - Conta Investimento\n");
        scanf("%d", &tipoDeConta);

        if(tipoDeConta < 1 || tipoDeConta > 3)
        {
            printf("Opcao invalida\n");
            tipoDeConta = 0;
        }else{
            switch(tipoDeConta){
                case 1:
                    strcpy(conta.tipoDeConta, "Conta Corrente");
                    break;
                case 2:
                    strcpy(conta.tipoDeConta, "Conta Poupança");
                    break;
                case 3:
                    strcpy(conta.tipoDeConta, "Conta Investimento");
                    break;
            }
        }

    } while (tipoDeConta == 0);
    
    

    printf("Digite o nome do cliente\n");
    scanf("%s", &conta.nomeDoCliente);
    printf("Digite o saldo da conta\n");
    scanf("%f", &conta.saldo);
    return conta;
}