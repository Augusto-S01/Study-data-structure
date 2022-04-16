#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    int *p = (int*) malloc(tamanho * sizeof(int));


    for(int i = 0; i < tamanho; i++){
        p[i] = i * 2 + 1;
    }

    for(int i = 0; i < tamanho; i++){
        printf("Posicao %d: %d\n", i, p[i]);
    }


    system("pause");

}
