#include <stdio.h>
#include <string.h>

#define TAM 30

void palindromaRecurisva(char cad[TAM], char cad2[TAM], int i, int j, int opcion, int *res);
int palindroma(char cad[TAM]);

int main()
{
    char cadena[TAM], cadena2[TAM];
    int res = 0, x;

    printf("---------- PALINDROMOS ----------\n");

    printf(" Cadena:");
    scanf("%[^\n]", cadena);

    palindromaRecurisva(cadena, cadena2, 0, 0, 1, &res);
    palindromaRecurisva(cadena, cadena2, 0, strlen(cadena2)-1, 2, &res);
    x = palindroma(cadena);


    //Cualquiera de las dos condiciones se
    //pueden quitar para usar la funcion que
    //queramos 'x' en el caso con ciclos y 'res'
    //en el caso recursivo.

    if(res >= 0 || x == 1)
    {
        printf("------------------------------\n");
        printf("La cadena SI es palindroma\n");
        printf("------------------------------\n");
    }
    else
    {
        printf("------------------------------\n");
        printf("La cadena NO es palindroma\n");
        printf("------------------------------\n");
    }

    return 0;
}

void palindromaRecurisva(char cad[TAM], char cad2[TAM], int i, int j, int opcion, int *res)
{
    switch (opcion)
    {
        //Quita los espacios en la cadena
        case 1:
            if(i < strlen(cad))
            {
                if(cad[i] != ' ')
                {
                    cad2[j] = cad[i];
                    j++;
                }

                i++;
                palindromaRecurisva(cad, cad2, i, j, opcion, res);
            }
            break;
        //Busca si es palindromo
        case 2:
            if(i < j)
            {
                if(cad2[i] != cad2[j])
                {
                    *res -= 100;
                }

                i++;
                j--;

                palindromaRecurisva(cad, cad2, i, j, opcion, res);

            }

            res++;
    }

}

int palindroma(char cad[TAM])
{
    char cad2[TAM];
    int i, j=0;

    for(i = 0; i < strlen(cad); i++)
    {
        if(cad[i] != ' ')
        {
            cad2[j]=cad[i];
            j++;
        }
    }

    cad2[j] = '\0';

    for(i = 0, j = strlen(cad2)-1; i < j; i++, j--)
    {
        if(cad2[i] != cad2[j])
        {
            return(0);
        }
    }

    return(1);
}