#include <stdio.h>
#define TAM 10

void pideArreglo(int arreglo[TAM]);
int repeticiones(int arreglo[TAM], int *num);
void seleccionSort(int arreglo[TAM]);
void imprime(int arreglo[TAM]);

int main()
{
    int arr[TAM];
    int x;
    int num;

    printf("---------REPETICIONES---------\n");

    pideArreglo(arr);
    imprime(arr);

    printf("Arreglo ordenado:\n");

    seleccionSort(arr);
    imprime(arr);

    x = repeticiones(arr, &num);

    if(x == 1)
    {
        printf("----------------------------------------------\n");
        printf("El numero %d es el mas repetido en el arreglo\n", num);
        printf("----------------------------------------------\n");
    }
    else
    {
        printf("-------------------------------------------------\n");
        printf("Todos los valores son distintos y aparecen 1 vez\n");
        printf("-------------------------------------------------\n");
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

int repeticiones(int arreglo[TAM], int *num)
{
    int cont = 0;
    int cont2 = 0;
    int x;

    for (int i = 0; i < TAM; ++i)
    {
        if(arreglo[i] == arreglo[i+1])
        {
            cont++;
            x = 1;
        }
        *num = arreglo[i];
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
