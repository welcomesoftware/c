/**
 * Hacer una matriz de tipo entera preguntándole al usuario el número de filas y
 * el número de columnas, luego rellenar la matriz e imprimirla en pantalla.
 */

// librerías
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variables
    int filas = 0;
    int columnas = 0;

    // entrada de datos
    printf("Digite el número de filas: ");
    scanf("%i", &filas);
    printf("Digite el número de columnas: ");
    scanf("%i", &columnas);
    puts("\n");

    // procesamiento
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Digite un número matriz[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    // salida de datos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%i ", matriz[i][j]);
        }
        puts("");
    }

    // fin del programa
    return 0;
}
