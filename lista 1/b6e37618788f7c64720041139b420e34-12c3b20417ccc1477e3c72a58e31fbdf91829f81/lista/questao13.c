#include <stdio.h>
#include <stdlib.h>
/* . Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular Γ© calculado por meio da seguinte fΓ³rmula: V = π β ππππ2β πππ‘π’ππ, ondeπ = 3,141592 .*/

int main() {
    int altura = 4;
    printf("A altura do cilindro eh: 4");
    int raio = 2;
    printf("\nO raio do cilindro eh: 2");
    float volume = 3.14 * (raio*raio) * altura;
    printf("\nO volume do cilindro eh: %.2f" , volume);
    printf("\n\n");
    system("pause");
    return 0;
}