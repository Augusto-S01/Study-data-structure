#include <stdio.h>
#include <stdlib.h>

void main(){
    // Declaração da matriz com 5 linhas e 5 colunas:
    int matriz[5][5], v[10];
    int i =0, j = 0, soma = 0;

    int preencher = 0;

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5 ; j++){
    //         printf("Digite os valores da matriz na posição %d e %d", i, j);
    //         //efetua a leitura de todos os campos da matriz na posição
    //         scanf("%d",&matriz[i][j]);
    //     }
    // }
    for(int i=0; i<5; i++){
        for(int j=0; j<5 ; j++){
            printf("Digite os valores da matriz na posição %d e %d", i, j);
            //efetua a leitura de todos os campos da matriz na posição
            preencher = preencher + 1;
            matriz[i][j] = preencher;
            //scanf("%d",&matriz[i][j]);
        }
    }

    /*
    Soma as linhas da matriz, percorre por todas as colunas atraves do "j" e por todas as lihas atraves do "i".
    */

   printf("\n\n Total por linha:\n\n");
   for(i = 0; i <5; i++){
       for(j = 0 ; j <5 ; j++){
           soma = soma + matriz[i][j];
       }
       printf("\n Linha %d : soma = %d \n" ,i + 1, soma);
       v[i] = soma;
       soma = 0;
   }

    /*
    Soma as colunas da matriz, percorre por todas as colunas atraves do "i" e por todas as lihas atraves do "j".
    */
   soma = 0;
   printf("\n\n Total por coluna:\n\n");
   for(j = 0; j <5; j++){
       for(i = 0 ; i <5 ; i++){
           soma = soma + matriz[i][j];
       }
       printf("\n Coluna %d : soma = %d \n" ,j + 1, soma);
       v[j + 5] = soma;
       soma = 0;
   }
   
   //totalização linhas e colunas
   for(i = 0 ; i <5 ; i++){
       printf("\n Os valores da soma da linha %d são: %d \n",i + 1,v[i]);
       printf("\n Os valores da soma da coluna %d são: %d \n",i + 1,v[i + 5]);
   }


    for(i = 0 ; i <5 ; i++){
        for(j = 0 ; j <5 ; j++){
            printf("|  %d   |",matriz[i][j]);
        }
        printf("\n");
    }
}