#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL, "Portuguese");


    int qtd_alunos;
    int soma_notas = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    int *p = (int*) malloc(qtd_alunos * sizeof(int));

    printf("\n");

    for(int i = 0; i < qtd_alunos;i++){
        printf("Digite a nota do aluno %d: ", i+1);
        int nota;
        scanf("%d", &nota);
        soma_notas += nota;
        p[i] = nota;
        printf("\n");
    }

    for(int i = 0; i < qtd_alunos;i++){
        printf("Nota do aluno %d: %d\n", i+1, p[i]);
    }

    printf("A media das notas eh: %.2f", (float) soma_notas / qtd_alunos);

}
