#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de alunos:");
    int qtdAlunos;
    int somaNotas;
    scanf("%d", &qtdAlunos);


    int *p = (int*) malloc(qtdAlunos * sizeof(int));

    for(int i = 0; i < qtdAlunos; i++){
        printf("Digite a nota do aluno %d:", i+1);
        scanf("%d", &p[i]);
        somaNotas += p[i];
    }

    printf("A media das notas eh: %f", somaNotas/qtdAlunos);
    for(int i = 0; i < qtdAlunos; i++){
        printf("\nA nota do aluno %d eh: %d", i+1, p[i]);
    }

    system("pause");
}