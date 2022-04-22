#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void main(){
    int base, expoente, resultado;
    printf("Digite o numero base: ");
    scanf("%d", &base);
    printf("Digite o numero expoente: ");
    scanf("%d", &expoente);
    resultado = powRecursivo(base, expoente);
    printf("O resultado da potencia eh: %d", resultado); 
}

int powRecursivo(int base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * powRecursivo(base, expoente - 1);
}