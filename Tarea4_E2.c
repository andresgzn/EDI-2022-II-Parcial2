#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
}TPunto;

void pideDatos(TPunto *pto);
void imprimePunto(TPunto pto);
float calculaDistancia(TPunto pto1, TPunto pto2);
void imprimeDistancia(TPunto pto1, TPunto pto2, float distancia);

int main()
{
    TPunto pto1, pto2;
    float distancia;

    printf("-------- COORDENADAS --------\n\n");

    printf("Punto 1:\n");
    pideDatos(&pto1);

    printf("Punto 2:\n");
    pideDatos(&pto2);

    printf("\nPuntos Capturados:\n");
    imprimePunto(pto1);
    imprimePunto(pto2);
    printf("\n");

    distancia = calculaDistancia(pto1, pto2);

    imprimeDistancia(pto1, pto2, distancia);

    return 0;
}

void pideDatos(TPunto *pto)
{
    printf("X:");
    scanf("%d", &pto->x);

    printf("Y:");
    scanf("%d", &pto->y);

    printf("\n");
}

void imprimePunto(TPunto pto)
{
    printf("(%d,%d)\n", pto.x, pto.y);
}

float calculaDistancia(TPunto pto1, TPunto pto2)
{
    float distancia;

    distancia = pow((pto2.x-pto1.x),2)+ pow((pto2.y-pto1.y),2);
    distancia = sqrt(distancia);

    return distancia;

}

void imprimeDistancia(TPunto pto1, TPunto pto2, float distancia)
{
    printf("-------------------------------------------------\n");
    printf("La distancia entre (%d,%d) y (%d,%d) es %.2f\n", pto1.x, pto1.y, pto2.x, pto2.y, distancia);
    printf("-------------------------------------------------\n");

}
