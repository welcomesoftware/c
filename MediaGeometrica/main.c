/**
 * Media Geometrica:
 * Programa que calcula la media geometrica de tres numeros
 */
#include <stdio.h>
#include <math.h>

int main() {
    // Variables del programa
    int num1, num2, num3, media_geometrica;

    // Encabezado del programa
    puts("Programa que calcula la media geometrica de tres numeros");
    puts("========================================================");

    // Entrada de datos por teclado
    printf("Digite el primer numero: "); scanf("%i", &num1);
    printf("Digite el segundo numero: "); scanf("%i", &num2);
    printf("Digite el tercer numero: "); scanf("%i", &num3);

    // Procesamiento de datos
    media_geometrica = cbrt((num1 * num2 * num3));

    // Salida de datos por pantalla
    printf("La media geometrica de %i, %i, %i, es: %i", num1, num2, num3, media_geometrica);

    // Termina el programa
    return 0;
}
