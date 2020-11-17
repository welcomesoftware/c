/**
 * main.c
 * Hace uso de las funciones
 */

// Bibliotecas
#include <stdio.h>
#include "saludo.c"
#include "cubo.c"
#include "factorial.c"


int main() {
    // variables del programa
    long numero, resultado;

    // imprime el retorno de la funcion saludo
    saludo();

    // entrada de datos por teclado
    printf("Digite un numero: ");
    scanf("%d", &numero);


    // salida de datos por pantalla
    printf("Cubo: el cubo de %d es %d\n", numero, cubo(numero));
    printf("Factorial: el factorial de %d es %u\n", numero, (unsigned int)factorial(numero));


    // termina exitosamente
    return 0;
}
