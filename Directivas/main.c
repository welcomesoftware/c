/**
 * Directivas del preprocesador:
 * Son las que contienen bibliotecas y macros, todas ellas comienzan con un
 * simbolo de -> #
 *
 * #include <archivo.h>
 * El preprocesador busca en archivo a incluir en los encabezados de la
 * biblioteca estandar.
 *
 * #include "archivo.h"
 * El preprocesador busca el archivo a incluir en le mismo directorio donde
 * se encuentra el archivo que sera compilado.
 *
 * #define PI 3.14159
 * Crea constantes simbolicas y macros, las constantes son inmutables, no
 * pueden cambiar de valor.
 * La macros resultan ser mas rapidas que las funciones en tiempo de ejecucion
 * porque se ahorran los detalles que implica llamar a una funcion o construir
 * una.
 */

// Bibliotecas
#include <stdio.h>

// Constantes
#define PI 3.14159

// Macros
#define CUBO(a) a*a*a

int main() {
    // Variables
    int suma;
    int a = 3;

    // Algoritmo
    suma = 3 + PI;

    // Salida de datos
    printf("Suma: %i\n", suma);
    printf("Cubo: %i\n", CUBO(a));

    // Termina exitosamente
    return 0;
}
