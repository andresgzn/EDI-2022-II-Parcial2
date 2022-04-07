#include <stdio.h>
#include <string.h>
#define TAM 20

typedef struct
{
    char nomPila[25];
    char nomSanto[25];
    char nomAlias[25];
}TNom;

typedef struct
{
    int dia;
    char mes[10];
    int annio;
}TFecha;

typedef struct
{
    TNom nom;
    char apPat[25];
    char apMat[25];
}TNombre;

typedef struct
{
    TNombre nombre;
    TFecha nacimiento;
}TAlumno;

void capturaDatos(TAlumno arrAlu[], int n);
int apRepetidos(TAlumno arrAlu[], int n);
int nomRepetidos(TAlumno arrAlu[], int n);
int parientes(TAlumno arrAlu[], int n, char apellido[]);
int mismoNacimiento(TAlumno arrAlu[], int n);

int main()
{
    int x;
    char ap[25];
    TAlumno alumno[TAM];

    capturaDatos(alumno, 3);

    //printf("\nApellido:");
    //scanf("%s", &ap);

    //x = apRepetidos(alumno, 3);
    //x = nomRepetidos(alumno, 3);
    //x = parientes(alumno, 3, ap);
    x = mismoNacimiento(alumno,  3);

    printf("\n%d\n", x);

    return 0;
}

void capturaDatos(TAlumno arrAlu[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
    {
        /*printf("Nombre pila:");
        gets(arrAlu[i].nombre.nom.nomPila);
        fflush(stdin);

        printf("Nombre Santo:");
        gets(arrAlu[i].nombre.nom.nomSanto);
        fflush(stdin);

        printf("Nombre Alias:");
        gets(arrAlu[i].nombre.nom.nomAlias);
        fflush(stdin);

        printf("Apellido Paterno:");
        gets(arrAlu[i].nombre.apPat);
        fflush(stdin);

        printf("Apellido Paterno:");
        gets(arrAlu[i].nombre.apPat);
        fflush(stdin);*/

        printf("Dia:");
        scanf("%d", &arrAlu[i].nacimiento.dia);
        fflush(stdin);

        printf("Mes:");
        gets(arrAlu[i].nacimiento.mes);
        fflush(stdin);

        printf("Annio:");
        scanf("%d", &arrAlu[i].nacimiento.annio);
        fflush(stdin);

        printf("\n");

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

int nomRepetidos(TAlumno arrAlu[], int n)
{
    int i, j;
    int cont = 0;

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            if(i != j)
                if(strcmp(arrAlu[i].nombre.nom.nomPila,arrAlu[j].nombre.nom.nomPila)==0 &&
                   strcmp(arrAlu[i].nombre.nom.nomSanto,arrAlu[j].nombre.nom.nomSanto)==0 &&
                   strcmp(arrAlu[i].nombre.nom.nomAlias,arrAlu[j].nombre.nom.nomAlias)==0)
                    cont++;

    return cont;
}

int parientes(TAlumno arrAlu[], int n, char apellido[])
{
    int i;
    int cont = 0;

    for (i = 0; i < n; ++i)
        if(strcmp(arrAlu[i].nombre.apPat,apellido)==0 || strcmp(arrAlu[i].nombre.apMat,apellido)==0)
            cont++;

    return cont;
}

int mismoNacimiento(TAlumno arrAlu[], int n)
{
    int i, j;
    int cont = 0;

    for (i = 0; i < n; ++i)
        for (j = i; j < n; ++j)
            if(i != j)
                if(arrAlu[i].nacimiento.dia == arrAlu[j].nacimiento.dia && strcmp(arrAlu[i].nacimiento.mes,arrAlu[j].nacimiento.mes)==0)
                    cont++;

    return cont;
}