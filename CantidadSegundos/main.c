/**
 * CantidadSegundos:
 * calcula la cantidad de segundos que estan incluidos en el numero
 * de horas, minutos y segundos ingresados por el usuario.
 */
#include <stdio.h>

int main() {
    // variables del programa
    int horas, minutos, segundos, total_segundos;

    // encabezado del programa
    puts("Calcula la cantidad de segundos que estan incluidos en el numero");
    puts("de horas, minutos y segundos ingresados por el usuario.");
    puts("================================================================");

    // entrada de datos por teclado
    printf("Digite el numero de horas: "); scanf("%i", &horas);
    printf("Digite el numero de minutos: "); scanf("%i", &minutos);
    printf("Digite el numero de segundos: "); scanf("%i", &segundos);

    // procesamiento de datos
    total_segundos = (horas * 3600) + (minutos * 60) + (segundos * 1);

    // salida de datos por pantalla
    puts("================================================================");
    printf("El equivalente en segundos es: %i\n", total_segundos);

    // termina el programa
    return 0;
}
