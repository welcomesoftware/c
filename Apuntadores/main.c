/**
 * Apuntadores:
 * declaracion y usos regulares de los Apuntadores.
 */

// Bibliotecas
#include <stdio.h>
#include "total_array.c"
#define MAX 5

int tasa = 100;

// declaracion de un apuntador y una variable normal.
int *p_tasa;

/**
 * inicializacion de un apuntador, utilizando el operador de direccion (&)
 * cuando es puesto antes del nombre de una variable, regresa la direccion
 * de la misma en la memoria y la almacena en el apuntador.
 */

int array1[MAX] = {1,1,1,1,1};
int array2[MAX] = {1,1,1,1,1};
int *p_total;

int main() {
    // almacena la direccion en memoria de tasa en p_tasa.
    p_tasa = &tasa;
    p_total = NULL;

    // imprime el contenido dentro de la variable al a que apunta p_tasa.
    printf("%d", *p_tasa);
    puts("");

    printf("La suma de los dos arreglos es: %d\n", total_array(array1, array2, MAX));

    p_total = sumar_array(array1, array2, MAX);

    for (size_t i = 0; i < MAX; i++) {
        printf("%d", *p_total++);
    }

    return 0;
}
