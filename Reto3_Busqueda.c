#include <stdio.h>
#define TAM 3

void pideArreglo(char arr[TAM]);
char letraObjetivo();
char objetivo(char arr[TAM], char letraObjetivo);
void seleccionSort(char arreglo[TAM]);
void imprime(char arr[TAM]);

int main()
{
    char arreglo[TAM];
    char letra;
    char obj;

    pideArreglo(arreglo);
    printf("\n");

    letra = letraObjetivo();

    printf("\nArreglo Capturado:\n");

    imprime(arreglo);
    printf("\n");

    seleccionSort(arreglo);

    printf("Arreglo Ordenado:\n");

    imprime(arreglo);
    printf("\n");

    obj = objetivo(arreglo, letra);
    printf("\n");

    printf("%c\n", obj);

    return 0;
}

void pideArreglo(char arr[TAM])
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Letra [%d]:", i);
        scanf("%c", &arr[i]);
        fflush(stdin);

        if(arr[i] < 97 || arr[i] > 122)
        {
            printf("Letra NO VALIDA\n\n");
            i--;
        }
    }
}

char letraObjetivo()
{
    char letra;

    printf("Letra Objetivo:");
    scanf("%c", &letra);
    fflush(stdin);

    if(letra < 97 || letra > 122)
    {
        printf("Letra NO VALIDA\n\n");
        letraObjetivo();
    }

    return letra;
}

char objetivo(char arr[TAM], char letraObjetivo)
{
    char salida;

    for (int i = 0; i < TAM; ++i)
    {
        if(letraObjetivo == arr[i])
            salida = arr[i];
    }

    return salida;

}

void seleccionSort(char arreglo[TAM])
{
    int posMenor;
    int posAct;
    int pos;
    char aux;

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

void imprime(char arreglo[TAM])
{
    printf("\n[ ");

    for(int i = 0; i < TAM; ++i)
    {
        printf("%c ",arreglo[i]);
    }

    printf("]\n");
    printf("\n");
    fflush(stdin);
}
