#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char string1[100] ; 
    char string2[100] ;
    char letra;

    printf("Insira uma pequena frase de até 100 caracteres");
    printf("\n");
    gets(string1);
    printf("\n");
    //scanf("%s", &string1);

    
    printf("\n");
    printf("Insira outra fase com até o mesmo comprimento");
    printf("\n");
    gets(string2);
    printf("\n");
    //scanf(" %s", &string2);

    
    printf("\n");
    printf("Insira um caracter para ser analisado nas strings");
    printf("\n");
    scanf("%c",&letra);
    printf("\n");
    //scanf(" %c", &letra);
    







    int x,cont1 = 0, cont2 = 0;
    //contando a ocorrencia de "letra" nas strings


    for(x = 0; x < strlen(string1);x++){
        if(string1[x] == letra){
            cont1++;
        }
    }
    for(x = 0; x < strlen(string2);x++){
        if(string2[x] == letra){
            cont2++;
        }
    }


    printf("A letra \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
    printf("e %d vez(es) na string 2",cont2);
    printf("\n\n\n");

    //comparando Strings

    if(strchr(string1, "s")){
        printf("\n O caracter \"%c\" esta na string \"%s\"", letra, string1);
    }

}