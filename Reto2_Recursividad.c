#include <stdio.h>
#define TAM 10

int pideNumero();
void cadenaHexadecimal(int num, char numHex[TAM]);

int main()

{
    int num;
    char numHex[TAM];

    num = pideNumero();

    cadenaHexadecimal(num, numHex);


    return 0;
}

int pideNumero()
{
   int num;

    printf("Numero decimal:\n");
    scanf("%d", &num);

    return num;
}

void cadenaHexadecimal(int num, char numHex[TAM])
{

}
