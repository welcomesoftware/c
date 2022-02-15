/*
 * Nota del Estudiante
 * Programa que solicita la de un examen del usuario
 * escribe el literal que le correspone a ese examen
 * A - Excelente
 * B - Notable
 * C - Aprobado
 * D - Reprobado
 * F - Reprobado
 */

// Bibliotecas
#include <stdio.h>


int main() {
    // Variables del Programa
    char nota;

    // Encabezado del Programa
    puts("=============== Nota del Estudiante ===============");
    puts("Programa que solicita la de un examen del usuario");
    puts("escribe el literal que le correspone a ese examena");
    puts("===================================================");

    // Entrada de datos por teclado
    printf("Digite la nota de su examen: ");
    scanf("%c", &nota);

    // Procesamiento condicional
    puts("===================================================");
    switch (nota) {
        case 'A':
            puts("Excelente");
            break;
        case 'B':
            puts("Notable");
            break;
        case 'C':
            puts("Aprobado");
            break;
        case 'D':
        case 'F':
            puts("Reprobado");
            break;
        default:
            puts("La nota ingresada es incorrecta. Revise de nuevo!");
    }

    // Finaliza exitosamente
    return 0;
}
