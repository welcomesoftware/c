/**
 * Estructuras con Arreglos
 * se define como una estructura que contiene uno o mas arreglos como miembros.
 */

#include <stdio.h>

struct datos {
    char nombre[20];
    char apellido[20];
    float donacion;
} registro;

int main() {
    // entrada de datos por teclado
    puts("Ingrese el nombre y apellido del donador");
    printf("Separado por un espacio: ");
    scanf("%s %s", registro.nombre, registro.apellido);

    printf("Ingrese la cantidad a donar: ");
    scanf("%f", &registro.donacion);

    // salidad de datos por pantalla
    printf("El señor %s %s donó $%.2f dolares.\n", registro.nombre, registro.apellido, registro.donacion);

    // termina el programa
    return 0;
}
