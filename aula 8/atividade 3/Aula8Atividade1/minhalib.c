#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "minhalib.h"

void calculoVantagens(float nHoras, float salHora, int nFilhos,float valFilho, float *salBruto, float *salFamilia,float *vantagens){
    *salBruto = nHoras * salHora;
    *salFamilia = nFilhos * valFilho;
    *vantagens = *salBruto + *salFamilia;
}

void calculoDeducoes(float taxIR, float salBruto, float *INSS, float *IRPF, float *deducoes){
    *INSS =  salBruto * 0.08;
    *IRPF =  salBruto * taxIR;
    *deducoes = *INSS + *IRPF;
}


void imprimeEstatistica(float salBruto, float salFamilia, float vantagens, float INSS, float IRPF, float deducoes){
    printf("\t\tRelatorio do calculo de Vantagens e Deducoes.\n\n");
    printf("O salario bruto do funcionario e: %.2f\n", salBruto);
    printf("O salario familia do funcionario e: %.2f\n", salFamilia);
    printf("As Vantagens do funcionario sao: %.2f\n", vantagens);
    printf("\n\nE descontado R$ %.2f, referente ao INSS.\n", INSS);
    printf("Desconto de R$ %.2f, refente ao imposto de renda.\n", IRPF);
    printf("O total de deducoes do funcionario e: %.2f\n",deducoes);

}
