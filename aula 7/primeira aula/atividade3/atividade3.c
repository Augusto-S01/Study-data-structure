#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int primeiraMatrizLargura, primeiraMatrizAltura, segundaMatrizLargura, segundaMatrizAltura;

    printf("Digite a largura da primeira matriz: ");
    scanf("%d", &primeiraMatrizLargura);
    printf("\n");

    printf("Digite a altura da primeira matriz: ");
    scanf("%d", &primeiraMatrizAltura);
    printf("\n");

    printf("Digite a largura da segunda matriz: ");
    scanf("%d", &segundaMatrizLargura);
    printf("\n");

    printf("Digite a altura da segunda matriz: ");
    scanf("%d", &segundaMatrizAltura);
    printf("\n");


    int **primeiraMatriz = (int**) malloc(primeiraMatrizLargura * sizeof(int*));
    
    
    for(int i = 0; i < primeiraMatrizLargura; i++){
        primeiraMatriz[i] = (int*) malloc(primeiraMatrizAltura * sizeof(int));

        for(int j = 0; j < primeiraMatrizAltura; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &primeiraMatriz[i][j]);
            printf("\n");
        }
    }

    int **segundaMatriz = (int**) malloc(segundaMatrizLargura * sizeof(int*));

    for(int i = 0; i < segundaMatrizLargura; i++){
        segundaMatriz[i] = (int*) malloc(segundaMatrizAltura * sizeof(int));

        for(int j = 0; j < segundaMatrizAltura; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &segundaMatriz[i][j]);
            printf("\n");
        }
    }

    int **resultado = (int**) malloc(primeiraMatrizLargura * sizeof(int*));

    for(int i = 0; i < primeiraMatrizLargura; i++){
        resultado[i] = (int*) malloc(segundaMatrizAltura * sizeof(int));

        for(int j = 0; j < segundaMatrizAltura; j++){
            resultado[i][j] = 0;
            for(int k = 0; k < primeiraMatrizAltura; k++){
                resultado[i][j] += primeiraMatriz[i][k] * segundaMatriz[k][j];
            }
        }
    }

    for(int i = 0; i < primeiraMatrizLargura; i++){
        for(int j = 0; j < segundaMatrizAltura; j++){
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }



}