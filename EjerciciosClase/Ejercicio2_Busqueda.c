#include <stdio.h>
#define TAM 10

int busqueda(int arr[TAM], int num);
int busquedaRecursiva(int arr[TAM], int num, int pos);
int busquedaBiRecursiva(int arr[TAM], int num, int inicio, int fin);

int main()
{
    int arr[TAM], num, pos, i = 0;

    for (int i = 0; i < TAM; ++i)
    {
        printf("Dato[%d]:", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("Elemento a buscar:");
    scanf("%d", &num);

    //pos = busqueda(arr, num);
    //pos = busquedaRecursiva(arr, num, i);
    pos = busquedaBiRecursiva(arr, num, 0, TAM - 1);

    if(pos == -1)
        printf("El resultado no se encontro\n");
    else
        printf("El elemento esta en la posicion %d\n", pos);

    return 0;
}

int busqueda(int arr[TAM], int num)
{
    int pos = -1, i;

    for (i = 0; i < TAM && pos == -1; i++)
    {
        if(arr[i] == num)
            pos = i;
    }

    return (pos);
}

int busquedaRecursiva(int arr[TAM], int num, int pos)
{
    //Caso Base - Cuando llega al final del arreglo
    //Caso Base - Cuando encuentre el valor

    if(pos >= TAM)
        return (-1);
    else if(arr[pos] == num)
        return (pos);
    else
        return (busquedaRecursiva(arr, num, pos + 1));
}

int busquedaBiRecursiva(int arr[TAM], int num, int inicio, int fin)
{
    int mitad = (inicio + fin) / 2;

    //Caso Base 1

    if(inicio > fin)
        return -1;

    //Caso Base 2
    if(arr[mitad] == num)
        return mitad;

    //Caso Recursivo
    if(arr[mitad] > num)
        return busquedaBiRecursiva(arr, num, inicio, mitad - 1);
    else
        return busquedaBiRecursiva(arr, num, mitad + 1, fin);
}
