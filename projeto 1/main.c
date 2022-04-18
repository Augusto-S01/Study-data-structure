// Trabalho feito por:

// AUGUSTO DOS SANTOS SOUZA
// GU3020207

// JHENNERSON BARBOSA DA SILVA
// GU3020461

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct conta{
    int id;
    char tipoDeConta[20];
    char nomeDoCliente[50];
    float saldo;
} conta;

int contagemDeContas = 0;

conta* criaArrayDinamicoDeContas(int numeroDeContas);
conta preencheConta();
void fechaArquivo(FILE* arquivo);
void liberaConta(conta* conta);


void main(){
    
    int numeroDeContas;
    printf("Seja bem vindo ao gerenciador de contas\n");
    printf("Digite o numero de contas que deseja alocar na memoria\n");

    scanf("%d", &numeroDeContas);

    conta* contas = criaArrayDinamicoDeContas(numeroDeContas);

    for(int i = 0; i < numeroDeContas; i++){
        contas[i] = preencheConta();
    }

    for(int i = 0; i < numeroDeContas; i++){
        system("cls");
        printf("Conta %d\n", contas[i].id);
        printf("Tipo de conta: %s\n", contas[i].tipoDeConta);
        printf("Nome do cliente: %s\n", contas[i].nomeDoCliente);
        printf("Saldo: %f\n", contas[i].saldo);
        printf("\n");
        system("pause");
    }
    
    FILE *f;
    f = fopen("contas.txt", "wb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fwrite(contas, sizeof(conta), numeroDeContas, f);

    fechaArquivo(f);
    liberaConta(contas);

}

void fechaArquivo(FILE* arquivo){
    fclose(arquivo);
}

void liberaConta(conta* conta){
    free(conta);
}

conta* criaArrayDinamicoDeContas(int numeroDeContas){
    conta *contas = (conta*) malloc(numeroDeContas * sizeof(conta));
    return contas;
}

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