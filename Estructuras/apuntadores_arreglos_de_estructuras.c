/**
 * Apuntadores y Arreglos de Estructuras:
 * de la misma forma que los Arreglos de Estructuras pueden ser una herramienta
 * muy poderosa, tambien lo son los Apuntadores a Estructuras. Se pueden combinar
 * los dos, usando Apuntadores para acceder a Arreglos de Estructuras.
 *
 * Este ejemplo demuestra el avance paso a paso por un Arreglo de Estructuras
 * usando notacion de Apuntadores.
 */
#include <stdio.h>
#define MAX 4

// define una estructura y luego declara en inicializa un arreglo de 4 estructuras
struct part {
    int numero;
    char *nombre;
} data[MAX] = {
    1, "Welcome",
    2, "Smith",
    3, "Adams",
    4, "Williams"
};

// declara un apuntador al tipo part y una variable iterativa
struct part *p_part;
int i;

int main() {

    // inicializa el apuntador
    p_part = data;

    /**
     * ciclo que recorre el arreglo de estructuras, imprimiendo un elemento de
     * estructura en cada iteracion.
     */
    for (i = 0; i < MAX; i++) {
        printf("Dirección %d: %d %s\n", p_part, p_part->numero, p_part->nombre);
        p_part++;
    }

    // termina el programa
    return 0;
}
