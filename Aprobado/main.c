/**
 * Aprobado:
 * programa que calcula si un alumno aprobo en base a la calificacion en su examen
 * si su nota es mayor o igual a 7 aprobo, en caso contrario reprobo.
 */
#include <stdio.h>

int main() {

    // variables del programa
    int nota;

    // encabezado del programa
    puts("Programa que calcula si un alumno aprobo o reprobo");
    puts("en base a la calificacion en su examen.");
    puts("==================================================");

    // entrada de datos por teclado
    printf("Ingrese la nota de examen del alumno: ");
    scanf("%i", &nota);

    // procesamiento de datos (condicional)
    if (nota >= 7)
        puts("El alumno aprobo el examen");
    else
        puts("El alumno reprobo el examen");

    // termina el programa
    return 0;
}
