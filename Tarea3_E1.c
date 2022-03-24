#include <stdio.h>
#define TAM 10

void pideArreglo(int arreglo[TAM]);
int repetidos(int arreglo[TAM]);
void seleccionSort(int arreglo[TAM]);
void imprime(int arreglo[TAM]);

int main()
{
    int arr[TAM];
    int x;

    printf("-------NUMEROS REPETIDOS-------\n");

    pideArreglo(arr);
    imprime(arr);

    printf("Arreglo ordenado:\n");

    seleccionSort(arr);
    imprime(arr);

    x = repetidos(arr);

    if(x == 1)
    {
        printf("---------------------------------\n");
        printf("Algun valor aparece mas de 1 vez\n");
        printf("---------------------------------\n");
    }
    else
    {
        printf("---------------------------------\n");
        printf("Todos los valores son distintos\n");
        printf("---------------------------------\n");
    }

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

int repetidos(int arreglo[TAM])
{
    for (int i = 0; i < TAM; ++i)
        if(arreglo[i] == arreglo[i+1])
            return 1;

    return 0;
}

void seleccionSort(int arreglo[TAM])
{
    int posMenor;
    int posAct;
    int pos;
    int aux;

    for (pos = 0; pos < TAM; ++pos)
    {
        posMenor = pos;

        for (posAct = pos; posAct < TAM; ++posAct)
        {
            if(arreglo[posAct] < arreglo[posMenor])
                posMenor = posAct;
        }

        //Intercambio

        aux = arreglo[pos];
        arreglo[pos] = arreglo[posMenor];
        arreglo[posMenor] = aux;
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