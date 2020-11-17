/**
 * Tarifa Energia:
 * programa que visualiza la tarifa electrica segun el gasto de energia.
 */

// librerias
#include <stdio.h>

// macros
#define TARIFA_1    1.2
#define TARIFA_2    1.0
#define TARIFA_3    0.9


int main() {
    // variables del programa
    float consumo_electrico, tasa_pago;

    // encabezado del programa
    puts("Tarifa Electrica:");
    puts("Programa que visualiza la tarifa electrica segun el consumo de energia");
    puts("======================================================================");

    // entrada de datos por teclado
    printf("Ingrese el total del consumo electrico: ");
    scanf("%f", &consumo_electrico);

    // procesamiento de datos
    if (consumo_electrico < 1000) {
        tasa_pago = TARIFA_1;
    }
    if (consumo_electrico >= 1000 || consumo_electrico <= 1850) {
        tasa_pago = TARIFA_2;
    }
    if (consumo_electrico > 1850) {
        tasa_pago = TARIFA_3;
    }

    // salida de datos por pantalla
    puts("======================================================================");
    printf("La tasa de pago segun su consumo electrico es: %.2f\n", tasa_pago);


    // termina el programa
    return 0;
}
