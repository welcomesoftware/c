/**
 * Listas enlazadas:
 *
 * Se refiere en general a una clase de métodos de almacenamiento de datos
 * en el cual cada concepto de informacion está encadenado a uno o más
 * conceptos diferentes, usando apuntadores.
 *
 * Hay varias clases de listas encadenadas, listas con encadenamiento simple,
 * listas con encadenamiento doble y arboles binarios. Cada tipo es adecuado
 * para determinadas tareas de almacenamiento de datos.
 *
 * Con las listas enlazadas podemos guardar y modificar datos en tiempo de
 * ejecución, y no es necesario, definir cuantos espacios va a tener.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Estructura Autoreferenciada:
 *
 * La estructura incluye un apuntador a su propio tipo. Esto significa que
 * una instancia de tipo Datos puede apuntar a otra instancia del mismo tipo.
 */
struct datos {
    char nombre[10];
    struct datos *siguiente;    // crea un apuntador al siguiente elemento.
};

/**
 * Notas:
 *
 * Pareciera que una lista encadenada no presenta ninguna ventaja sobre un
 * arreglo de estructuras. Sin embargo hay varias ventajas significativas.
 * Una tiene que ver con la insercion y borrado de elementos en una lista
 * ordenada (que es una tarea comun en la programación).
 *
 * El comienzo de una lista encadenada está indicado por un apuntador de
 * cabecera, y el fin de la lista está indicado por un valor de apuntador null.
 *
 * Las lista encadenadas facilitan la inserción y el borrado de datos. Todo lo
 * que se requiere es un poco de manipulación simple de apuntadores. No se
 * necesita de hecho mover los datos.
 *
 * Otra ventaja de las listas encadenadas se refiere al espacio de almacenamiento
 * Para usar un arreglo, su tamaño debe ser definido cuando el programa es compilado
 * Si durante la ejecución, el programa se queda sin espacio de memoria, no hay nada
 * que pueda hacerse. Sin embargo con una lista encadenada el programa puede asignar
 * el espacio de almacenamiento para las estructuras conforme lo necesite, llegando
 * hasta el limite impuesto por el hardware.
 */

int main() {

    // apuntador al tipo struct datos.
    struct datos *ptr;

    // reserva espacio dinamicamente para el tipo struct y lo almacena en el apuntador.
    ptr = malloc(sizeof(struct datos));

    // termina el programa.
    return 0;
}
