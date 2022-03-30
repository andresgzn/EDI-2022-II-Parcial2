#include <stdio.h>

void pideTamaño(int *n, int *m);
void pideDatos(int arr1[], int arr2[], int n, int m);
void combinacion(int arr1[], int arr2[], int arr3[], int n, int m);
void seleccionSort(int arreglo[], int tamaño);
void imprime(int arreglo[], int tamaño);


int main()
{
    int n, m;

    printf("-------COMBINACION DE ARREGLOS-------\n");

    pideTamaño(&n, &m);

    int arr1[n], arr2[m], arr3[n+m];

    pideDatos(arr1, arr2, n, m);

    printf("\nArreglos Capturados:\n");

    imprime(arr1, n);
    imprime(arr2, m);

    seleccionSort(arr1, n);
    seleccionSort(arr2, m);

    printf("\nArreglos Ordenados:\n");

    imprime(arr1, n);
    imprime(arr2, m);

    printf("\nArreglos Combinado:\n");

    combinacion(arr1, arr2, arr3, n, m);

    imprime(arr3, n+m);
    seleccionSort(arr3, n+m);

    printf("\nArreglos Combinado Ordenado:\n");

    imprime(arr3, n+m);

    return 0;
}

void pideTamaño(int *n, int *m)
{
    printf("Tama%co Arr1:",164);
    scanf("%d", &*n);

    printf("Tama%co Arr2:",164);
    scanf("%d", &*m);

}

void pideDatos(int arr1[], int arr2[], int n, int m)
{
    printf("\nArreglo 1:\n");

    for (int i = 0; i < n; ++i)
    {
        printf("Dato[%d]:",  i);
        scanf("%d", &arr1[i]);
    }

    printf("\nArreglo 2:\n");

    for (int j = 0; j < m; ++j)
    {
        printf("Dato[%d]:", j);
        scanf("%d", &arr2[j]);
    }
}

void combinacion(int arr1[], int arr2[], int arr3[], int n, int m)
{
    for (int i = 0; i < n+m; ++i)
    {
        if(i < n)
        {
            arr3[i] = arr1[i];
        }
        else if(i >= n && i-n < m)
        {
            arr3[i] = arr2[i-n];
        }
    }
}

void seleccionSort(int arreglo[], int tamaño)
{
    int posMenor;
    int posAct;
    int pos;
    int aux;

    for (pos = 0; pos < tamaño; ++pos)
    {
        posMenor = pos;

        for (posAct = pos; posAct < tamaño; ++posAct)
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

void imprime(int arreglo[], int tamaño)
{
    printf("\n[ ");

    for(int i = 0; i < tamaño; ++i)
    {
        printf("%d ",arreglo[i]);
    }

    printf("]\n");
}