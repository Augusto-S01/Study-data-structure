//Arquivo de cabeçalho da minha biblioteca

typedef struct operacao Operacao;

//Função que cria uma estrutura de operação
Operacao *criaOperacao(float num1, float num2);

//Função que libera a memória alocada para uma estrutura de operação
void liberaOperacao(Operacao *op);

//Acessa os valores de uma estrutura de operação
void acessaOperacao(Operacao *op, float *num1, float *num2);

//Função que atribui valores às estruturas de operação
void atribuiOperacao(Operacao *op, float num1, float num2);

//função que realiza a operação de soma
float somaOperacao(Operacao *op);

//função que realiza a operação de subtração
float subtracaoOperacao(Operacao *op);

//função que realiza a operação de multiplicação
float multiplicacaoOperacao(Operacao *op);

//função que realiza a operação de divisão
float divisaoOperacao(Operacao *op);

//função que obtem o valor da operação
float obtemValorOperacao(Operacao *op);


