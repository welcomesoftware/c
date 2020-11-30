/**
 * Programa: strlen.c
 *
 * Una cadena es una secuencia de caracteres, que tiene su inicio indicado por un apuntador,
 * y su final indicado por un carácter nulo, '\0'. A veces se necesita saber la longitud de
 * una cadena. Esto se logra con la función de biblioteca strlen(). Su prototipo está en el
 * encabezado STRING.H
 *
 * Prototipo: size_t strlen(char *string);
 *
 * size_t esta definido definido en STRING.H como un tipo de dato unsigned, por lo que la 
 * función strlen() retorna un entero sin signo, significa que nunca retornará valores
 * negativos. El tipo size_t se utiliza con muchas funciones de cadenas.
 *
 * El argumento pasado a strlen() es un apuntador a una cadena de la cual se quieres saber
 * su longitud. strlen() retorna la cantidad de caracteres entre el apuntador a la cadena
 * y el carácter nulo.
 *
 * Este progrma muestra el uso de la función strlen().
 */
#include <stdio.h>
#include <string.h>

int main() {
	// variables del programa
	size_t length;
	char buffer[80];
	
	// ciclo infinito
	while (1) {
		puts("Ingrese una linea de texto; Una linea en blanco para ternminar");
		gets(buffer);

		length = strlen(buffer);

		if (length != 0) 
			printf("Esta linea tiene %lu caracteres de largo.\n", length);
		else
			break;
	}

	// termina el programa
	return 0;
}
