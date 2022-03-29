#include <stdio.h>
#define MAX_ALUMNOS 10

typedef struct alumno
{
    char nombre[50];
    float parcial1;
    float parcial2;
    float parcial3;
    float promedio;
}TAlumno;

int main()
{
    TAlumno calificaciones;

    printf("Nombre:");
    scanf("%[^\n]", &calificaciones.nombre);

    printf("Calificacion P1:");
    scanf("%f", &calificaciones.parcial1);

    printf("Calificacion P2:");
    scanf("%f", &calificaciones.parcial2);

    printf("Calificacion P3:");
    scanf("%f", &calificaciones.parcial3);

    calificaciones.promedio = (calificaciones.parcial1 + calificaciones.parcial2 + calificaciones.parcial3) / 3;

    printf("Promedio: %.2f\n", calificaciones.promedio);

    return 0;
}
