#include <stdio.h>
#define TAM 3

void pideNombres(char nombres[TAM], char *nombreBusqueda);
int buscaNombre(char nombres[TAM], char nombreBusqueda);
void imprimeNombres(char nombres[TAM]);

int main()
{
    char nombres[TAM];
    char nombreaBuscar;
    int x;

    printf("---------- BUSCA NOMBRES ----------\n");

    pideNombres(nombres, &nombreaBuscar);
    printf("\n");

    //imprimeNombres(nombres);
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

void pideNombres(char nombres[TAM], char *nombreBusqueda)
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Nombre %d:", i+1);
        scanf("%[^\n]", &nombres[i]);
        fflush(stdin);
    }

    printf("\n");

    printf("%s\n", nombres[0]);
    printf("%s\n", nombres[1]);
    printf("%s\n", nombres[2]);
    printf("%s\n", nombres[3]);
    printf("%s\n", nombres[4]);

    printf("Nombre a buscar:");
    scanf("%s", &*nombreBusqueda);
}

int buscaNombre(char nombres[TAM], char nombreBusqueda)
{
    int x = -1;

    for (int i = 0; i < TAM; ++i)
    {
        if(nombres[i] == nombreBusqueda)
            x = i;
    }

    return x;
}

void imprimeNombres(char nombres[TAM])
{
    printf("\nNombres capturados:\n");

    for (int i = 0; i < TAM; ++i)
    {
        printf("[");
        printf("%s ", nombres[i]);
        printf("]\n");
    }
}
