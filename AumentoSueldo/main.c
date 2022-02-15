/*
 * IncrementoSalario:
 * Programa que calcula el salario de un empleado si obtuvo un 25% de aumento.
 */
#include <stdio.h>

int main() {
    // Variables del programa
    float salario, nuevo_salario;

    // Encabezado del programa
    puts("Programa que calcula el salario de un empleado");
    puts("si obtuvo un 25% de aumento a su sueldo");
    puts("==============================================");

    // Entrada de datos por teclado
    printf("Digite el salario actual del empleado: "); scanf("%f", &salario);

    // Procesamiento de datos
    nuevo_salario = salario * 1.25;

    // Salida de datos por pantalla
    printf("El nuevo salario del empleadoo es: %.2f\n", nuevo_salario);

    // Termina el programa
    return 0;
}
