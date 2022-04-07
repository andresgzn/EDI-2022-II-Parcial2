#include <stdio.h>
#include <string.h>
#define TAM 20

typedef struct
{
    char nom[25];
    char apPat[25];
    char apMat[25];
}TNombre;

typedef struct
{
    char clave[11];
    TNombre nombre;
}TAlumno;

void capturaDatos(TAlumno arrAlu[], int n);
int apRepetidos(TAlumno arrAlu[], int n);

int main()
{
    int x;
    TAlumno alumno[TAM];

    capturaDatos(alumno, 3);
    x = apRepetidos(alumno, 3);

    printf("\n%d\n", x);

    return 0;
}

void capturaDatos(TAlumno arrAlu[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
    {
        printf("Clave:");
        gets(arrAlu[i].clave);
        fflush(stdin);

        printf("Nombre:");
        gets(arrAlu[i].nombre.nom);
        fflush(stdin);

        printf("Apellido Paterno:");
        gets(arrAlu[i].nombre.apPat);
        fflush(stdin);

        printf("Apellido Materno:");
        gets(arrAlu[i].nombre.apMat);
        fflush(stdin);

    }
}

int apRepetidos(TAlumno arrAlu[], int n)
{
    int i, j;
    int cont = 0;

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            if(i != j)
                if(strcmp(arrAlu[i].nombre.apPat,arrAlu[j].nombre.apPat)==0 && strcmp(arrAlu[i].nombre.apMat,arrAlu[j].nombre.apMat)==0)
                    cont++;

    return cont;
}