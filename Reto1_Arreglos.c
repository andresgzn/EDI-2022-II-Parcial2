#include <stdio.h>
#define TAM 5

void pideArreglo(int arreglo[TAM]);
void calculaProducto(int arreglo[TAM], int producto[TAM]);
void imprime(int arreglo[TAM]);

int main()
{
    int arr[TAM], producto[TAM];

    printf("-------PRODUCTO DE ARREGLOS-------\n");

    pideArreglo(arr);
    imprime(arr);

    calculaProducto(arr, producto);

    printf("Arreglo resultado:\n");
    imprime(producto);

    return 0;
}

void pideArreglo(int arreglo[TAM])
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Dato [%d]:",i);
        scanf("%d", &arreglo[i]);

        if(arreglo[i] > 30 || arreglo[i] < -30)
        {
            printf("Dato no valido\n");
            i--;
        }
    }
}

void calculaProducto(int arreglo[TAM], int producto[TAM])
{
    int res;

    for (int i = 0; i < TAM; ++i)
    {
        res = 1;

        for (int j = 0; j < TAM; ++j)
        {
            if(j != i)
            {
                res *= arreglo[j];
            }
        }
        producto[i] = res;
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
    printf("\n");
}
