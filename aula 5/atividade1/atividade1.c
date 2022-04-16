#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    FILE *f1, *f2;
    char texto[1000];

    printf("Digite o texto de até 1000 caracteres: \n");


    gets(texto);

    f1 = fopen("arq1.txt", "w");
    f2 = fopen("arq2.txt", "w");
    
    if(f1 == NULL){
        printf("Erro na criação do arquivo\n");
        system("pause");
        exit(1);
    }


    for(int i = 0; i < 1000; i++){
        if(texto[i] == '\0'){
            break;
        }
        fputc(texto[i], f1);
    
    }

    for(int i = 0; i < 1000; i++){
        if(texto[i] == '\0'){
            break;
        }

        fputc(texto[i], f1);
        fputc(toupper(texto[i]), f2);
    }
    fclose(f1);
    fclose(f2);

    printf("\n\n\n");
    printf("Texto em minusculo: \n");

    f1 = fopen("arq1.txt", "r");
    char c = fgetc(f1);
    
    while(c != EOF){
        printf("%c", c);
        c = fgetc(f1);
    }

    printf("\n\n\n");
    printf("Texto em maiusculo: \n");

    f2 = fopen("arq2.txt", "r");
    char b = fgetc(f2);

    while(b != EOF){
        printf("%c", b);
        b = fgetc(f2);
    }

    printf("\n\n\n");
    system("pause");

}