#include <stdio.h>
#define TAM 10

void pideArreglo(int arreglo[TAM]);
void bubbleSort(int arreglo[TAM]);
void imprime(int arreglo[TAM]);
int busquedaBinaria(int arreglo[TAM], int objetivo);
int numeroABuscar(int num);

int main()
{
    int arreglo[TAM];
    int objetivo, pos;

    printf("--------------BUSUQEDA BINARIA--------------\n");

    pideArreglo(arreglo);
    printf("\n");

    printf("Arreglo Ordenado:");
    bubbleSort(arreglo);
    printf("\n");

    imprime(arreglo);
    printf("\n");

    objetivo = numeroABuscar(objetivo);
    printf("\n");

    pos = busquedaBinaria(arreglo, objetivo);

    if(pos == -1)
    {
        printf("No se encontro el objetivo:\n");
        pos = TAM;
    }

    printf("-----------------------\n");
    printf("Objetivo: %d\n", objetivo);
    printf("Posicion: %d\n", pos);
    printf("-----------------------\n");

    return 0;
}

void pideArreglo(int arreglo[TAM])
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Dato [%d]:",i);
        scanf("%d", &arreglo[i]);
    }
}

void bubbleSort(int arreglo[TAM])
{
    int aux;
    int intercambio = 1;

    for (int i = 0; i < TAM && intercambio == 1; ++i)
    {
        intercambio = 0;

        for(int act = 0; act < TAM-1; ++act)
        {
            if(arreglo[act] > arreglo[act+1])
            {
                aux = arreglo[act];
                arreglo[act] = arreglo[act+1];
                arreglo[act+1] = aux;

                intercambio = 1;
            }
        }

    }

}

void imprime(int arreglo[TAM])
{
    printf("\n[ ");

    for(int i = 0; i < TAM; ++i)
    {
        printf("%d ",arreglo[i]);
    }

    printf("]\n");
}

int busquedaBinaria(int arreglo[TAM], int objetivo)
{
    int inicio = 0;
    int fin = TAM - 1;
    int mitad = inicio + (fin - inicio) / 2;
    int encontrado = 0;

    while (inicio <= fin && encontrado == 0) {
        mitad = inicio + (fin - inicio) / 2;

        if (arreglo[mitad] == objetivo)
            encontrado = 1;
        else if (arreglo[mitad] > objetivo)
            fin = mitad - 1;
        else
            inicio = mitad + 1;
    }

    if(encontrado == 1)
        return mitad;
    else
        return -1;

}

int numeroABuscar(int num)
{
    int numero;

    printf("Objetivo:");
    scanf("%d", &numero);

    return numero;
}

