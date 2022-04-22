//Arquivo MinhaLib.h

//Atribui novo nome para struct ponto: Ponto
typedef struct ponto Ponto;

//Atribui novo nome para struct Retangulo: Retangulo
typedef struct Retangulo Retangulo;

//cria um ponto
Ponto* criaPonto(float x, float y);

//cria um retangulo
Retangulo* criaRetangulo(Ponto* p1, Ponto* p2);



//libera memoria de um ponto
void liberaPonto(Ponto* p);

//libera memoria de um retangulo
void liberaRetangulo(Retangulo* r);

//retorna area de um retangulo
float areaRetangulo(Retangulo* r);

//retorna perimetro de um retangulo
float perimetroRetangulo(Retangulo* r);

//retorna o comprimento da diagonal de um retangulo
float comprimentoDiagonalRetangulo(Retangulo* r);