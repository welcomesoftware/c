/**
 * Programa: cadenalongitud.c
 *
 * Esta función retorna la cantidad de caracteres en una cadena sin contar el
 * carácter nulo '\0'.
 */

// bibliotecas
#include <stdio.h>

// función para determinar la longitud de una cadena
int cadenaLongitud(char *cadena) {
	// declara una variable para llevar la cuenta del largo de la cadena.
	int largo = 0;

	/**
	 * El ciclo va a ejecutarse siempre y cuando la cadena en la posición largo
	 * sea distinta de carácter nulo '\0' e incrementara largo en cada iteración
	 * al finalizar el ciclo, retorna el valor de largo.
	 * @param largo
	 */
	while (*(cadena + largo) != '\0')
		largo++;

	// retorna el valor de largo
	return largo;
}

// función principal
int main() {

    // variables del programa
	char *cadena = "Hola";
	int longitud = cadenaLongitud(cadena);

	// despliega la longitud de la cadena en pantalla
	printf("Longitud de %s es: %i\n", cadena, longitud);

    // termina el programa
    return 0;
}
