// Trabalho feito por:

// AUGUSTO DOS SANTOS SOUZA
// GU3020207

// JHENNERSON BARBOSA DA SILVA
// GU3020461

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Conta{
    int id;
    char tipoDeConta[20];
    char nomeDoCliente[50];
    float saldo;
} Conta;

int ContagemDeContas = 0;

Conta* criaArrayDinamicoDeContas(int n);
Conta preencheConta();
void imprimeContas(Conta* Contas, int n);
void liberaConta(Conta* Conta);


void main() {

    int n;
    printf("Seja bem vindo ao gerenciador de Contas\n");
    printf("Digite o numero de Contas que deseja alocar na memoria\n");

    scanf("%d", &n);

    Conta* Contas = criaArrayDinamicoDeContas(n);

    for(int i = 0; i < n; i++){
        Contas[i] = preencheConta();
    }

    imprimeContas(Contas, n);

    FILE *f;
    f = fopen("Contas.txt", "wb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fwrite(Contas, sizeof(Conta), n, f);

    fclose(f);

    liberaConta(Contas);

}

Conta* criaArrayDinamicoDeContas(int n) {
    Conta *Contas = (Conta*) malloc(n * sizeof(Conta));
    return Contas;
}

Conta preencheConta() {
    Conta Conta;

    ContagemDeContas++;
    printf("Digite os dados da Conta de id:  %d\n", ContagemDeContas);
    Conta.id = ContagemDeContas;

    int tipoDeConta = 0;


    do {
        printf("Digite o numero respectivo ao tipo de Conta:\n");
        printf("1 - Conta Corrente\n");
        printf("2 - Conta Poupanca\n");
        printf("3 - Conta Investimento\n");
        scanf("%d", &tipoDeConta);

        if(tipoDeConta < 1 || tipoDeConta > 3) {
            printf("Opcao invalida\n");
            tipoDeConta = 0;
        } else {
            switch(tipoDeConta) {
                case 1:
                    strcpy(Conta.tipoDeConta, "Conta Corrente");
                    break;
                case 2:
                    strcpy(Conta.tipoDeConta, "Conta Poupanca");
                    break;
                case 3:
                    strcpy(Conta.tipoDeConta, "Conta Investimento");
                    break;
            }
        }

    } while (tipoDeConta == 0);

    printf("Digite o nome do cliente\n");
    scanf("%s", &Conta.nomeDoCliente);
    printf("Digite o saldo da Conta\n");
    scanf("%f", &Conta.saldo);
    return Conta;
}

void imprimeContas(Conta *Contas, int n) {
    for(int i = 0; i < n; i++) {
            system("cls");
            printf("Conta %d\n", Contas[i].id);
            printf("Tipo de Conta: %s\n", Contas[i].tipoDeConta);
            printf("Nome do cliente: %s\n", Contas[i].nomeDoCliente);
            printf("Saldo: %f\n", Contas[i].saldo);
            printf("\n");
            system("pause");
        }
}

void liberaConta(Conta* Conta) {
    free(Conta);
}
