#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;


    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("\n");

    printf("Forma recursiva:");
    formaRecursiva(valor);
    printf("\n");
    printf("\n");
    printf("\n");

    printf("Forma iterativa:");
    formaIterativa(valor);


    printf("\n");

    system("pause");
}


void formaRecursiva(int valor){

    if(valor == 1){
        printf("%d ", valor);
    }else{
        printf("%d ", valor);
        formaRecursiva(valor -1 );
    }
}
void formaIterativa(int valor){
    int i;
    for(i = valor; i > 0; i--){
        printf("%d ", i);
    }
}
