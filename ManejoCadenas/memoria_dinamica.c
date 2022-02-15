/**
 * Demuestra el uso de malloc() para asignar espacio de memoria
 * de almacenamiento para datos de cadena.
 */
#include <stdio.h>
#include <stdlib.h>

char *ptr, *p;

int main() {
    /* Reserva un bloque de 35 bytes, y evisa si se reservo. */
    ptr = malloc(35 * sizeof(char));

    if (ptr == NULL) {
        puts("Error al reservar la memoria");
        exit(1);
    }

    /**
     * Llena la la cadena con valores del 65 al 90,
     * que son codigos ASCII de la A a la Z.
     *
     * p es un aputador utilizado para desplazarse pol la cadena
     * para que ptr pueda seguir apuntado al comienzo de la cadena.
     */
    p = ptr;

    for (int i = 65; i <= 90; i++)
        *p++ = i;


    /* Agrega el caracter nulo \0 en la direccion final al la que apunta p */
    *p = '\0';

    /* Despliega la cadena en pantalla */
    puts(ptr);

    /* Termina el programa */
    return 0;
}
