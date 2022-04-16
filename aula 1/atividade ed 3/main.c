#include <stdio.h>>
#include <stdlib.h>

void main(){
    // Declaração dos vetores com 5 posições:
    int v1[5],v2[5];
    

    //preenchendo vetor 1
    for(int i=0; i<5; i++){
        printf("\n Informe o valor do elemento %d do vetor 1: ",i + 1);
        //Leitura e inserção do valor em cada posição do vetor:
        scanf("%d",&v1[i]);

    }
    //preenchendo vetor 2
    for(int j=0; j<5; j++){
        printf("\n Informe o valor do elemento %d do vetor 2: ",j + 1);
        //Leitura e inserção do valor em cada posição do vetor:
        scanf("%d",&v2[j]);
    }

    for(int i = 0;i<5; i++){
        for(int j=0; j<5; j++){
            if(v1[i] == v2[j]){
                printf("\n Valores iguais na posicao: %d e %d\n", i + 1,j + 1);
            }
        }
    }
    
    system("pause");
}
