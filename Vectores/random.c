/**
 * Random.c
 * demostracion del uso de un arreglo tridimiencional.
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int azar[10][10][10];
int a, b, c;

int main() {
    /**
     * Llena el arreglo con numeros al azar, la funcion de
     * biblioteca standar de c rand() regresa un numero al
     * azar.
     */
    for(a = 0; a < 10; a++)
        for(b = 0; b < 10; b++)
            for(c = 0; c < 10; c++)
                azar[a][b][c] = rand();

    /**
     * recorre todo el arreglo tridimiencional iterando en
     * canda una de las dimensiones e imprime en pantalla
     * sus valores.
     */
    for(a = 0; a < 10; a++) {
        for(b = 0; b < 10; b++) {
            for(c = 0; c < 10; c++) {
                printf("Random[%d][%d][%d] = %d\n", a, b, c, azar[a][b][c]);
            }
            puts("Presione una tecla para continuar, CTRL-C para salir");
            getchar();
        }
    }

    return 0;
}
