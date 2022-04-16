#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct strct_funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;


int idCount = 0;

FUNCIONARIO coletaDados();
void rel_salario_corrigido(FUNCIONARIO f[5]);
void reajusteSalario(float *salario);




void main(){
    FUNCIONARIO f[5];

    printf("Atividade 2: \n");
    for(int i =0; i < 5;i++){
        f[i] = coletaDados();
    }

    for(int i = 0; i < 5; i++){
        reajusteSalario(&f[i].salario);
    }

    rel_salario_corrigido(f);


}


void reajusteSalario(float *salario){
    *salario = *salario + (*salario * 0.10);
};






FUNCIONARIO coletaDados(){
     FUNCIONARIO p;
        p.id = idCount++;
        
        printf("Informe os dados do %d funcionario: \n", idCount);
        printf("Digite o nome: ");
        getchar();
        fgets(p.nome,30,stdin);
        fflush(stdin);
        
        printf("Digite a idade:");
        scanf("%d",&p.idade);

        printf("Digite o salario:");
        scanf("%f" , &p.salario);
        fflush(stdin);
        system("cls");
    
        return p;
    }

    void rel_salario_corrigido(FUNCIONARIO f[5]){
        for(int i=0; i<5; i++){
        printf("==========================================\n");
        printf("Funcionario #%d : \n", f[i].id);
        printf("Nome: %s \n",f[i].nome);
        printf("Salario: %f \n",f[i].salario);
        printf("==========================================\n");
    }
    }