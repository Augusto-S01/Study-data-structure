#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float salarioBruto,salarioFamilia,vatagens,inss,irpf,deducoes;


void calculoVantagens(float numeroHoras ,float salarioHora ,float numeroFilhos, float valorPorFilho){
    salarioBruto = numeroHoras * salarioHora;
    salarioFamilia = numeroFilhos * valorPorFilho;
    vatagens = salarioBruto + salarioFamilia;

}

void calculoDeducoes(float taxaIr){
    inss = salarioBruto * 0.08;
    irpf = salarioBruto * taxaIr;
    deducoes = inss + irpf;
}


void main(){
    printf("Atividade 1: \n");
    
    printf("informe o numero de horas trabalhadas: ");
    float horasTrabalhadas;
    scanf("%f",&horasTrabalhadas);
    printf("\n");
    
    
    printf("certo agora informe o seu salario recebido por hora :");
    float salarioHora;
    scanf("%f",&salarioHora);
    printf("\n");

    printf("perfeito agora informe o numero de filhos:");
    float numeroFilhos;
    scanf("%f",&numeroFilhos);
    printf("\n");

    printf("ok, e qual é o valor recebido por cada filho:");
    float valorPorFilho;
    scanf("%f ",&valorPorFilho);
    printf("\n");

    printf("anotado!, agora para o calculo de deducoes qual o valor da taxa do imposto de renda?");
    float taxaIr;
    scanf("%f ",&taxaIr);
    printf("\n");

    system("cls");


    calculoVantagens(horasTrabalhadas,salarioHora,numeroFilhos,valorPorFilho);
    calculoDeducoes(taxaIr);


    printf("Aqui esta a informacoes que calculamos:");
    printf("\n");

    printf("Seu salario bruto eh: %f",salarioBruto);
    printf("\n");
    
    printf("Seu salario familia eh: %f",salarioFamilia);
    printf("\n");

    printf("Suas vantagens eh: %f",vatagens);
    printf("\n");


    printf("O valor do seu INSS ficou em : %f",inss);
    printf("\n");

    printf("e seu IRPF em: %f ",irpf);
    printf("\n");

    printf("Ou seja sua deducoes sao: %f ",deducoes);
    
}



