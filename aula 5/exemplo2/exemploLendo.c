#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    FILE *f;
    f = fopen("arquivo.txt", "rb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    int total_lido , v[10];
    total_lido = fread(v, sizeof(int), 10, f);
    if(total_lido != 10){
        printf("Erro ao ler os dados\n");
        system("pause");
        exit(1);
    }else{
        printf("Arquivo lido com sucesso\n");
    }
    printf("\n");
    fclose(f);

    printf("conteudo do arquivo: \n");
    for(int i = 0; i < 10; i++){
        printf(" %d", v[i]);
    }
}