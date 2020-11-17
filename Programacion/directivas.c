/**
 * Directivas del preprocesador:
 * Continen las librerias y las macros.
 * 
 * Libreias: Codigo ya escrito que podemos utilizar.
 * #include <stdio.h>
 * #include <string.h>
 * #include <math.h>
 * #include <stdlib.h>
 *
 * Macros: Constantes que utilizaremos a lo largo del programa.
 * #define PI 3.1416
 */

#include <stdio.h>
#define PI 3.1416

/**
 * Variables globales:
 * Pueden ser llamadas o accedidas desde dentro y fuera de la 
 * funcion principal u otras funciones en genearal.
 */
int y = 5;


int main() {
    /**
     * Variables locales:
     * Solo pueden ser utilizadas dentro de la funcion, y no pueden
     * ser llamadas desde fuera. 
     */
    int x = 10;
    float suma = 0;
    suma = PI + x;
    printf("la suma es: %.4f\n", suma);
}
