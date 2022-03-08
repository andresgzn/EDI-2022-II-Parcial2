/*
Recursividad
 -Una funcion puede llamarse a si misma, con diferentes parámetros
 -Reglas:
    -Tiene que tener un caso base (corta las llamadas a la funcion)
    -Caso recursivo
 */

#include <stdio.h>

void funcion(int a);

int main()
{
    int valor = 10;

    funcion(valor);

    return 0;
}

void funcion(int a)
{
    printf("El valor es: %d\n", a);

    if(a > 0)
        funcion(a - 1);

    printf("%d\n", a);
}



