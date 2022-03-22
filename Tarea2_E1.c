#include <stdio.h>
#define MAX_CADENA 20
#define TAM 6

void pideNombres(char nombres[TAM][MAX_CADENA], char *nombreBusqueda);
int buscaNombre(char nombres[TAM][MAX_CADENA], char nombreBusqueda);
void imprimeNombres(char nombres[TAM][MAX_CADENA]);

int main()
{
    char nombres[TAM][MAX_CADENA];
    char nombreaBuscar;
    int x;

    printf("---------- BUSCA NOMBRES ----------\n");

    pideNombres(nombres, &nombreaBuscar);
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

void pideNombres(char nombres[TAM][MAX_CADENA], char *nombreBusqueda)
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Nombre %d:", i+1);
        scanf("%[^\n]", &nombres[i]);
        fflush(stdin);
    }

    printf("\n");

    //printf("%s\n", nombres[0]);
    //printf("%s\n", nombres[1]);
    //printf("%s\n", nombres[2]);

    printf("Nombre a buscar:");
    scanf("%[^\n]", &*nombreBusqueda);
}

int buscaNombre(char nombres[TAM][MAX_CADENA], char nombreBusqueda)
{
    int x = -1;

    for (int i = 0; i < TAM; ++i)
    {
        if(nombres[i] == nombreBusqueda)
            x = i;
    }

    return x;
}

void imprimeNombres(char nombres[TAM][MAX_CADENA])
{
    printf("\nNombres capturados:\n");

    for (int i = 0; i < TAM; ++i)
    {
        printf("[");
        printf("%s ", nombres[i]);
        printf("]\n");
    }
}
