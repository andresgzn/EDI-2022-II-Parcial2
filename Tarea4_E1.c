#include <stdio.h>

typedef struct
{
    int dia;
    char mes[10];
    int annio;
}TFecha;

void capturaDatos(TFecha *fecha);
void imprimeFecha(TFecha fecha);

int main()
{
    TFecha fecha;

    printf("-------- FECHA --------\n\n");

    capturaDatos(&fecha);
    imprimeFecha(fecha);

    return 0;
}

void capturaDatos(TFecha *fecha)
{
    printf("Dia:");
    scanf("%d", &fecha->dia);

    printf("Mes:");
    scanf("%s", &fecha->mes);
    fflush(stdin);

    for (int i = 0; i < sizeof fecha->mes; ++i)
    {
         if(fecha->mes[0] >= 97 && fecha->mes[0] <= 122)
             fecha->mes[0] -= 32;
         else if (fecha->mes[i] >= 65 && fecha->mes[i] <= 90)
             fecha->mes[i] += 32;
    }

    printf("A%co:", 164);
    scanf("%d", &fecha->annio);
}

void imprimeFecha(TFecha fecha)
{
    printf("\n--------------------\n");
    printf("%d/%s/%d\n", fecha.dia, fecha.mes, fecha.annio);
    printf("--------------------\n");
}