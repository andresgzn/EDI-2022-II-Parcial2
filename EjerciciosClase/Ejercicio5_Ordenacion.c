#include <stdio.h>
#define TAM 10

void pideArreglo(int arreglo[TAM]);
void bubbleSort(int arreglo[TAM]);
void seleccionSort(int arreglo[TAM]);
void quickSort(int arreglo[TAM], int inicio, int fin);
void imprime(int arreglo[TAM]);

int main()
{
    int arr[TAM];

    pideArreglo(arr);
    imprime(arr);

    bubbleSort(arr);
    seleccionSort(arr);

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

        imprime(arreglo);
    }

}

void quickSort(int arreglo[TAM], int inicio, int fin)
{
    int pivote;
    int posIzq, posDer;

    if(inicio >= fin)
        return;

    pivote = arreglo[inicio];
    posIzq = inicio;
    posDer = fin;

    while (posIzq < posDer)
    {
        while (arreglo[posDer] > pivote && posIzq < posDer)
            posDer--;

        arreglo[posIzq] = arreglo[posDer];

        while (arreglo[posIzq] <= pivote && posIzq < posDer)
            posIzq++;

        arreglo[posDer] = arreglo[posIzq];
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
