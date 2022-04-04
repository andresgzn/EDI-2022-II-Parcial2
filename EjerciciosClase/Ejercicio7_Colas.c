/*
 * Las operaciones basicas de las colas son:
 *   1. Inicializarla (asegurargnos que todo esta en orden para usarla)
 *   2.Saber cuando esta llena (si fin esta una posicion antes que inicio
 *     entonces esta llena y debe regresar un 1, 0 en caso contrario)
 *   3.Cuando esta vacia (si inicio es igual a fin la cola esta vacia
 *     y debe regresar 1, 0 en caso contrario)
 *   4.Insertar(enqueue) Regresar 1 si se pudo insertar, 0 en caso contrario
 *        4.1 Preguntar si hay espacio
 *        4.2 Inserto en la posicion de fin
 *        4.3 Incremento fin
 *   5.Eliminar(dequeue) Regresar 1 si se pudo sacar, 0 en caso contrario
 *        5.1 Preguntar si hay valores en la cola
 *        5.2 Obtenemos el valor que esta en la posicion de inicio
 */

#include <stdio.h>
#define MAX 10 //capacidad de la cola

typedef struct
{
    int datos[MAX+1];
    int inicio;
    int fin;
}Cola;

void inicializaCola(Cola *c);
int colaVacia(Cola c);
int colaLlena(Cola c);
int insertar(Cola *c, int valor);

int main()
{
    Cola cola;
    int vacia, llena;

    inicializaCola(&cola);
    vacia = colaVacia(cola);
    llena = colaLlena(cola);

    return 0;
}

void inicializaCola(Cola *c)
{
    c->inicio = 0;
    c->fin = 0;
}

int colaVacia(Cola c)
{
    if(c.inicio == c.fin)
        return 1;

    return 0;
}

int colaLlena(Cola c)
{
    if(c.fin == c.inicio-1 || c.fin == MAX && c.inicio == 0)
        return 1;

    return 0;
}

int insertar(Cola *c, int valor)
{
    if(colaLlena(*c) == 0)
    {
        c->datos[c->fin] = valor;
        c->fin++;

        return 1;
    }

    return 0;
}