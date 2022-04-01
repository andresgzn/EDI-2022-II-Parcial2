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
        if(num % 16 >= 0 && num % 16 <=9)
        {
            numHex[cont] = ((num%16)+48);
            cont++;

            cadenaHexadecimal(num/16, numHex, cont);
        }
        else if(num % 16 >=10 && num % 16 <=15)
        {
            numHex[cont] = ((num%16)+55);
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
