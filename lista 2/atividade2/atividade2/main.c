#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"

void main(){

    printf("\n\n\n");   
    
    printf("Calculadora de retangulo\n");

    printf("\n\n");

    float x1, y1, x2, y2;
    printf("Digite as coordenadas de um plano cartesiano do ponto superior esquerdo do retangulo: \n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    printf("\n\n");

    printf("Digite as coordenadas de um plano cartesiano do ponto inferior direito do retangulo: \n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    printf("\n\n");

    Ponto* p1 = criaPonto(x1, y1);
    Ponto* p2 = criaPonto(x2, y2);

    Retangulo* r = criaRetangulo(p1, p2);
    

    printf("Area do retangulo: %.2f\n", areaRetangulo(r));
    printf("Perimetro do retangulo: %.2f\n", perimetroRetangulo(r));
    printf("Comprimento da diagonal do retangulo: %.2f\n", comprimentoDiagonalRetangulo(r));

    liberaRetangulo(r);
    liberaPonto(p1);
    liberaPonto(p2);


    printf("\n\n\n");
    return;
}
