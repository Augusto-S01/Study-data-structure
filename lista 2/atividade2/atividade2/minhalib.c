#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"

struct ponto{
    float x;
    float y;
};

struct Retangulo{
    struct ponto superiorEsquerdo;
    struct ponto inferiorDireito;
};

Ponto* criaPonto (float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    return p;
}

Retangulo* criaRetangulo(Ponto* p1, Ponto* p2){
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    r->superiorEsquerdo = *p1;
    r->inferiorDireito = *p2;
    return r;
}


void liberaPonto(Ponto* p){
    free(p);
}

void liberaRetangulo(Retangulo* r){
    liberaPonto(&r->superiorEsquerdo);
    liberaPonto(&r->inferiorDireito);
    free(r);
}

float areaRetangulo(Retangulo* r){
    //fabs(x) retorna o valor absoluto/modulo de x
    float altura = fabs(r->superiorEsquerdo.y - r->inferiorDireito.y);
    float largura = fabs(r->superiorEsquerdo.x - r->inferiorDireito.x);
    return altura * largura;
}

float perimetroRetangulo(Retangulo* r){

    float altura = fabs(r->superiorEsquerdo.y - r->inferiorDireito.y);
    float largura = fabs(r->superiorEsquerdo.x - r->inferiorDireito.x);
    return 2 * (altura + largura);

}

float comprimentoDiagonalRetangulo(Retangulo* r){
    //sqrt(x) retorna a raiz quadrada de x
    //pow(x, y) retorna x elevado a y
    float altura = fabs(r->superiorEsquerdo.y - r->inferiorDireito.y);
    float largura = fabs(r->superiorEsquerdo.x - r->inferiorDireito.x);
    return sqrt(pow(altura, 2) + pow(largura, 2));


}


