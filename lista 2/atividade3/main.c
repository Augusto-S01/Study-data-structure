#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int contador(int n);

void main(){
    printf("Digite um numero: ");
    int numero;
    scanf("%d", &numero);

    contador(numero);

}

int contador(int n){
    if (n < 0){
        return 0;
    }
    else{
        1 + contador(n-1);
        printf("%d\n", n);
    }
}
