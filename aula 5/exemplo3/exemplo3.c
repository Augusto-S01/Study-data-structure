#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    char nome[20] = "Jose da Silva";
    int i = 47;
    float altura = 1.72;

    FILE *f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    printf("Nome: %s\nIdade %d\nAltura %.2f\n", nome, i, altura);
    fprintf(f, "Nome: %s\nIdade %d\nAltura %.2f\n", nome, i, altura);

    fclose(f);
    printf("\n");

}
