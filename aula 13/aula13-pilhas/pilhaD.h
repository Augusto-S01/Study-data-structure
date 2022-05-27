//Arquivo pilhaD.h

typedef struct aluno{
    int matricula;
    float n1 , n2 , n3;
}ALUNO;

typedef struct elemento *Pilha;

Pilha criar_Pilha();

void destroi_pilha(Pilha *pi);

int tamanho_pilha(Pilha *pi);

int pilha_cheia(Pilha *pi);

int pilha_vazia(Pilha *pi);

int insere_pilha(Pilha *pi, ALUNO aluno);

int remove_pilha(Pilha *pi);

int consulta_pilha(Pilha *pi, ALUNO *al);