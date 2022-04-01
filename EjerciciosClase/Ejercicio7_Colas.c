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
 *        5.2 Obtenemos el valor que esta
 */

#include <stdio.h>
#define MAX 10 //capacidad de la cola

typedef struct
{
    int datos[MAX + 1];
    int inicio;
    int fin;
}Cola;

void inicializaCola(Cola *c);

int main()
{
    Cola cola;

    inicializaCola(&cola);

    return 0;
}

void inicializaCola(Cola *c)
{
    c->inicio = 0;
    c->fin = 0;
}
