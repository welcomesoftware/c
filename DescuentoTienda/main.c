/**
 * DescuentoTienda:
 * Programa que calcula el 15% de descuento en una tienda
 */
#include <stdio.h>

int main() {
    // Variables del programa
    float total_compra, descuento, precio;

    // Encabezado
    puts("Programa que calcula el 15% de descuento en una tienda");
    puts("======================================================");

    // Entrada de datos por teclado
    printf("Digite el total de su compra: "); scanf("%f", &total_compra);

    // Procesamiento de datos
    descuento = total_compra * 0.15;
    precio = total_compra - descuento;

    // Salida de datos por pantalla
    puts("======================================================");
    printf("El precio ya con descuento es: $%.2f\n", precio);

    // Termina el programa
    return 0;
}
