/**
 * AreaTrapesio:
 * Programa que calcula el area de un trapesio
 */

#include <stdio.h>

int main() {
    // Variables del programa
    int base_max, base_min, area, altura;

    // Entrada de datos
    printf("Digite la base mayor: "); scanf("%i", &base_max);
    printf("Digite la base menor: "); scanf("%i", &base_min);
    printf("Digite la altura: "); scanf("%i", &altura);

    // Procesamiento de datos
    area = (((base_max + base_min) * altura) / 2);

    // Salida de datos
    puts("");
    printf("El area de este trapesio es: %i\n", area);

    // Termina el programa
    return 0;
}
