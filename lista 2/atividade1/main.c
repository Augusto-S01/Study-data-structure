// 1 – Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
// conter o número de matricula do aluno, seu nome e as notas de três provas. Agora,
// escreva um programa que leia os dados de cinco alunos e os armazene-os em um bloco
// de memória alocado dinamicamente. Em seguida, exiba um relatório com o nome e as
// notas do aluno que possua a maior média geral dentre os cinco.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    struct aluno{
        int matricula;
        char nome[50];
        float nota1;
        float nota2;
        float nota3;
    }typedef aluno;

    aluno *alunos;
    alunos = (aluno*) malloc(5 * sizeof(aluno));

    for(int i = 0; i < 5; i++){
        printf("\n\nAluno %d\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }

    float maiorMedia = 0;
    int posicao = 0;

    for(int i = 0; i < 5; i++){
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media > maiorMedia){
            maiorMedia = media;
            posicao = i;
        }
    }

    printf("\n\nAluno com maior media: %s\n", alunos[posicao].nome);
    printf("Media: %.2f\n", maiorMedia);

    free(alunos);

    system("pause");
    

}