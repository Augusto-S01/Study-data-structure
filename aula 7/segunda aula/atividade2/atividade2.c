#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int escolha;

    printf("Digite 1 para escolher a forma  recursiva ou 2 para escolher a forma iterativa: ");


    scanf("%d", &escolha);

    printf("\n");

    printf("Agora digite um valor inteiro: ");
    int numero;
    scanf("%d", &numero);

    printf("\n");

    if(escolha == 1){
        printf("O fatorial de %d é %d\n", numero, func(numero));
    }
    else{
        printf("O fatorial de %d é %d\n", numero, func2(numero));
    }


}

//recursividade


//recebe int n como valor
int func(int n){
    //verifica se "n" é igual a 0
    if(n == 0){
        //caso for retorna 0
        return 0;
    }
    //se nao retorna n  + a msm função porem com n-1
    else{
        return n + func(n-1);
    }


    //a função fica se chamando ate alcançar o numero 0 depois começa a retornar para  a função que a chamou e resolve a conta
}


//iterativa
int func2(int n){

    int soma = 0;

    for(int i = 0; i < 0; i++){
        soma = soma * i;
    }

    return soma;
}
