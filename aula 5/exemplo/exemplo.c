#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maiusculo.txt", "w");
    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);
    while(c != EOF){
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);

    f2 = fopen("maiusculo.txt", "r");
    char b = fgetc(f2);
    while(b != EOF){
        printf("%c", b);
        b = fgetc(f2);
    }
    printf("\n\n\n");
    fclose(f2);
    system("pause");
    
}