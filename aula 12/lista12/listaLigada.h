//Arquivo listaLigada.h



typedef struct aluno{
    int matricula;
    float n1,n2,n3;
}Aluno;

typedef struct elemento* Lista;

Lista *criaLista();

void apagaLista(Lista *li);

int tamLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_inicio_lista(Lista *li,Aluno al);

int insere_final_lista(Lista *li,Aluno al);

int remove_inicio_lista(Lista *li);

int remove_final_lista(Lista *li);

int remove_lista(Lista *li,int mat);

int consulta_lista_pos(Lista *li, int posicao, Aluno *al);

int consulta_lista_mat(Lista *li, int matricula, Aluno *al);