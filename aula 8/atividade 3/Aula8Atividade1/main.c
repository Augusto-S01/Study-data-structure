#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "minhalib.h"


int main(){

    float nHoras, salHora, nFilhos, valFilho, salBruto, salFamilia, vantagens, INSS, IRPF, deducoes;
    float taxIR = 0.15;

    printf("\t\tCalculo de Vantagens e Deducoes.\n\n");
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &nHoras);
    printf("Digite o salario por hora: ");
    scanf("%f", &salHora);
    printf("Digite o numero de filhos: ");
    scanf("%f", &nFilhos);
    printf("Digite o valor do filho: ");
    scanf("%f", &valFilho);

    calculoVantagens(nHoras, salHora, nFilhos, valFilho, &salBruto, &salFamilia, &vantagens);
    calculoDeducoes(taxIR, salBruto, &INSS, &IRPF, &deducoes);
    imprimeEstatistica(salBruto, salFamilia, vantagens, INSS, IRPF, deducoes);

    return 0;

}
