
//Arquivo listaLigada.h



typedef struct cliente{
    int codigo;
    char nome[30];
    char empresa[30];
    char departamento[30];
    char telefone[30];
    char celular[30];
    char email[50];
}Cliente;

typedef struct elemento* Lista;
Lista *criaLista();

void apagaLista(Lista *li);

int tamLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_inicio_lista(Lista *li,Cliente cl);
int insere_lista_ordenada(Lista *li,Cliente cl);
int insere_final_lista(Lista *li,Cliente cl);

int remove_inicio_lista(Lista *li);

int remove_final_lista(Lista *li);

int remove_lista(Lista *li,int codigo);

int consulta_lista_pos(Lista *li, int posicao, Cliente *cl);

int consulta_lista_codigo(Lista *li, int codigo, Cliente *cl);
