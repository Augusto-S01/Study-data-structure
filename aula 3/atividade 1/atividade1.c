#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
};

void main(){
    struct funcionario p[5];


    printf("Atividade 1: \n");

    for(int i=0; i<5; i++){
        p[i].id = i+1;
        
        printf("Informe os dados do %d funcionario: \n", i+1);
        printf("Digite o nome: ");
        getchar();
        fgets(p[i].nome,30,stdin);
        fflush(stdin);
        
        printf("Digite a idade:");
        scanf("%d",&p[i].idade);

        printf("Digite o salario:");
        scanf("%f" , &p[i].salario);
        fflush(stdin);
        system("cls");
    }

    for(int i=0; i<5; i++){
        printf("==========================================\n");
        printf("Funcionario #%d : \n", p[i].id);
        printf("Nome: %s \n",p[i].nome);
        printf("Idade: %d \n",p[i].idade);
        printf("Salario: %f \n",p[i].salario);
        printf("==========================================\n");
    }
}