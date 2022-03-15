#include <stdio.h>
#define TAM 10

void pideArreglo(int arreglo[TAM]);
void bubbleSort(int arreglo[TAM]);
void imprime(int arreglo[TAM]);

int main()
{
    int arr[TAM];

    pideArreglo(arr);
    imprime(arr);

    bubbleSort(arr);

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
        imprime(arreglo);
    }

}

void imprime(int arreglo[TAM])
{
    printf("\n[");

    for(int i = 0; i < TAM; ++i)
    {
        printf("%d ",arreglo[i]);
    }

    printf("]\n");
}
