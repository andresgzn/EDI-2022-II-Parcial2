#include <stdio.h>
#define TAM 20

typedef struct
{
    char nom[25];
    char apPat[25];
    char apMat[25];
}TNombre;

typedef struct
{
    char nomMat[50];
    float cal;
}TMateria;

typedef struct
{
    char clave[11];
    TNombre nombre;
    int nMatAprobadas;
    TMateria arrCals[TAM];
    float promedio;
}TAlumno;

void capturaDatos(TAlumno arrAlu[]);

int main()
{
    TAlumno alumno[TAM];

    capturaDatos(alumno);

    return 0;
}

void capturaDatos(TAlumno arrAlu[])
{
    int i, j, n;

    printf("No. de Alumnos:");
    scanf("%d", &n);
    fflush(stdin);

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

        printf("No. Materias Aprobadas:");
        scanf("%d", &arrAlu[i].nMatAprobadas);
        fflush(stdin);

        for (j = 0; j < arrAlu[i].nMatAprobadas; ++j)
        {
            printf("Nombre Materia No. %d:",j);
            gets(arrAlu[i].arrCals[j].nomMat);
            fflush(stdin);

            printf("Calificacion:");
            scanf("%f", arrAlu[i].arrCals[j].cal);
        }
    }
}
