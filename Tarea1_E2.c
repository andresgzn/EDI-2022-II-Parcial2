#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n, res;

    printf("--------SERIE FIBONACCI--------\n");
    printf("Numero de la serie a calcular:");
    scanf("%d", &n);

    res = fibonacci(n);

    printf("\n");
    printf("Resultado: %d\n", res);
    printf("--------------------------------\n");

    return 0;
}

int fibonacci(int n)
{
    if(n == 0) //Caso Base 1
    {
        return 0;
    }
    else if(n == 1) //Caso Base 2
    {
        return 1;
    }
    else if(n >= 2) //Caso Recursivo
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
