#include <stdio.h>
#define TAM 20

int pideNumero();
void cadenaHexadecimal(int num, char numHex[], int cont);
void imprimeNum(char numHex[]);

int main()

{
    int num, cont=0;
    char numHex[TAM];

    printf("-------- NUMERO HEXADECIMAL --------\n\n");

    num = pideNumero();

    cadenaHexadecimal(num, numHex, cont);

    printf("\n\n---------\n");
    imprimeNum(numHex);
    printf("\n---------\n");

    return 0;
}

int pideNumero()
{
   int num;

    printf("Numero decimal:");
    scanf("%d", &num);

    return num;
}

void cadenaHexadecimal(int num, char numHex[], int cont)
{
    if(num != 0)
    {
        if(num % 16 == 0)
        {
            numHex[cont]=48;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 1)
        {
            numHex[cont]=49;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 2)
        {
            numHex[cont]=50;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 3)
        {
            numHex[cont]=51;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 4)
        {
            numHex[cont]=52;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 5)
        {
            numHex[cont]=53;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 6)
        {
            numHex[cont]=54;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 7)
        {
            numHex[cont]=55;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 8)
        {
            numHex[cont]=56;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 9)
        {
            numHex[cont]=57;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 10)
        {
            numHex[cont]=65;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 11)
        {
            numHex[cont] = 66;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 12)
        {
            numHex[cont]=67;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 13)
        {
            numHex[cont]=68;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 14)
        {
            numHex[cont]=69;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 == 15)
        {
            numHex[cont]=70;
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
    }
}

void imprimeNum(char numHex[])
{
    for (int i = sizeof numHex; i >= 0; --i)
    {
        if(numHex[i] >= 48 && numHex[i] <=57 || numHex[i] >=65 && numHex[i] <=70)
            printf("%c", numHex[i]);
    }
}
