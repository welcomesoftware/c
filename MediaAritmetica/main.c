/**
 * Media Aritmetica:
 * Programa que calcula la media aritmetica de 5 numeros
 */
#include <stdio.h>

int main() {
    // Variables del programa
    int n1, n2, n3, n4, n5, media_aritmetica;

    // Encabezado
    printf("Programa que calcula la media aritmetica de 5 numeros\n");
    puts("=============================================================");

    // Entrada de datos por teclado
    printf("Digite el dato n1: "); scanf("%i", &n1);
    printf("Digite el dato n2: "); scanf("%i", &n2);
    printf("Digite el dato n3: "); scanf("%i", &n3);
    printf("Digite el dato n4: "); scanf("%i", &n4);
    printf("Digite el dato n5: "); scanf("%i", &n5);

    // Procesamiento de datos
    media_aritmetica = (n1 + n2 + n3 + n4 + n5) / 5;

    // Salida de datos por pantalla
    puts("=============================================================");
    printf("\nLa media aritmetica de %i es: %i\n", (n1+n2+n3+n4+n5), media_aritmetica);

    // Termina el programa
    return 0;
}
