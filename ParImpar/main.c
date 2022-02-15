/**
 * Par o Impar:
 * programa que determina si un numero dado por el usuario es par o impar.
 */

// libreias
#include <stdio.h>

int main() {
    // variables del programa
    int numero;

    // encabezado del programa
    puts("Par o impar:");
    puts("determina si un numero es par o impar");
    puts("=====================================");

    // entrada de datos por teclado
    printf("Digite un numero: ");
    scanf("%i", &numero);
    puts("=====================================");

    // procesamiento de datos
    if (numero % 2 == 0)
        printf("El numero %i es par\n", numero);
    else
        printf("En numero %i es impar\n", numero);

    // termina exitosamente
    return 0;
}
