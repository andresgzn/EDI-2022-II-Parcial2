#include <stdio.h>
#include <string.h>
#define MAX_CADENA 20
#define TAM 6

void pideNombres(char nombres[TAM][MAX_CADENA]);
void nombreABuscar(char nombreBusqueda[MAX_CADENA]);
int buscaNombre(char nombres[TAM][MAX_CADENA], char nombreBusqueda[MAX_CADENA]);
void imprimeNombres(char nombres[TAM][MAX_CADENA]);

int main()
{
    char nombres[TAM][MAX_CADENA];
    char nombreaBuscar[MAX_CADENA];
    int x;

    printf("---------- BUSCA NOMBRES ----------\n");

    pideNombres(nombres);
    printf("\n");

    nombreABuscar(nombreaBuscar);
    printf("\n");

    imprimeNombres(nombres);
    x = buscaNombre(nombres, nombreaBuscar);
    printf("\n");

    if(x == -1)
    {
        printf("---------------------------\n");
        printf("No se encontro el nombre\n");
        printf("---------------------------\n");
    }
    else
    {
        printf("-------------------------------\n");
        printf("El nombre esta en la posicion %d\n", x);
        printf("-------------------------------\n");
    }

    return 0;
}

void pideNombres(char nombres[TAM][MAX_CADENA])
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Nombre %d:", i+1);
        scanf("%s", &nombres[i]);
        fflush(stdin);
    }
    printf("\n");
}

void nombreABuscar(char nombreBusqueda[MAX_CADENA])
{
        printf("Nombre a buscar:");
        scanf("%s", nombreBusqueda);
        fflush(stdin);
}

int buscaNombre(char nombres[TAM][MAX_CADENA], char nombreBusqueda[MAX_CADENA])
{
    int x = -1;

    for (int i = 0; i < TAM; ++i)
        if(strcmp(nombreBusqueda, nombres[i]) == 0)
            x = i;

    return x;
}

void imprimeNombres(char nombres[TAM][MAX_CADENA])
{
    printf("\nNombres capturados:\n");
    printf("[");

    for (int i = 0; i < TAM; ++i)
        printf("%s, ", nombres[i]);

    printf("]\n");
}
