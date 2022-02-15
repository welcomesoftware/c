/**
 * SalarioEmpleado:
 * Programa que calcula es el salario de un empleado en base a las horas
 * trabajadas.
 */
#include <stdio.h>

int main() {
    // Variables del programa
    int salario, horas, precio;

    // Encabezado del programa
    puts("Programa que calcula el salario de un empleado,");
    puts("en base al calculo de las horas trabajadas.");
    puts("===============================================");

    // Entrada de datos por teclado
    printf("Digite la cantidad de horas trabajadas: "); scanf("%i", &horas);
    printf("Digite el precio por hora trabajada: "); scanf("%i", &precio);

    // Procesamiento de datos
    salario = horas * precio;

    // Salida de datos por pantalla
    puts("===============================================");
    printf("El salario del empleado es: %i\n", salario);

    // Termina el programa
    return 0;
}
