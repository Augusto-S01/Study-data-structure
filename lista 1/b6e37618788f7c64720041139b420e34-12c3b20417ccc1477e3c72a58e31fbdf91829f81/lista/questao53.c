#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². 
A fórmula de conversão é: 𝑀=𝐻∗10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a
 área em hectares.*/

int main() {
    float hectares, result;
    printf("Digite a area em hectares: ");
    scanf("%f", &hectares);
    result = hectares * 10000;
    printf("\nA area em metros quadrados eh: %.2f",result);
    return 0;
}
