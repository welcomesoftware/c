/**
 * Estructuras y Apuntadores:
 * debido a que los Apuntadores son una parte muy importante de C, no debe
 * sorprendernos que puedan usarse con Estructuras. Se pueden usar Apuntadores
 * como miembros de las Estructuras y tambien se pueden declarar Apuntadores a
 * las Estructuras.
 */
#include <stdio.h>

struct datos {
    int *valor;
    int *tasa;
} primera;

int main() {
    // variables del programa
    int costo = 1100;
    int interes = 15;

    // inicializacion de Apuntadores en la Estructura
    primera.valor = &costo;
    primera.tasa = &interes;

    /**
     * se utiliza el operador de indireccion (*) para acceder al valor apuntado
     * en apuntadores que no sean de tipo char.
     */
    puts("============== Tablet ==============");
    printf("Precio:\t\t$%i\n", *primera.valor);
    printf("Intereses:\t%.0lf\n", (*primera.valor * 0.15));
    printf("Total:\t\t$%.0lf\n", (*primera.valor * 0.15) + (*primera.valor));

    // termina el programa
    return 0;
}
