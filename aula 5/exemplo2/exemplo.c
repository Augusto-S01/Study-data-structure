#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    FILE *f;
    f = fopen("arquivo.txt", "wb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    int total_gravado , v[10] = {0,1,2,3,4,5,6,7,8,9};
    total_gravado = fwrite(v, sizeof(int), 10, f);
    if(total_gravado != 10){
        printf("Erro ao gravar os dados\n");
        system("pause");
        exit(1);
    }else{
        printf("Arquivo gravado com sucesso\n");
    }

    printf("\n");
    fclose(f);
}