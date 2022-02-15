/** 
 * Programa: strcat.c
 *
 * Esta es una función de la biblioteca estándar de C para la concatenación
 * de cadenas de texto. Une dos cadenas pega una cadena al final de la otra
 *
 * Prototipo:
 * 	char *strcat(char *cadena1, char *cadena2);
 *
 * La función añade una copia de cadena2 al final de cadena1, moviendo el 
 * carácter nulo al final de la nueva cadena. Se debe asignar suficiente
 * espacio para cadena1 a fin de que quepa la cadena resultante. El valor
 * de retorno de strcat() es un apuntador a cadena1.
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Globales
char cadena1[27];
char cadena2[2];

// Función Principal
int main()
{
	// variables del programa
	int i;

	// pone un carácter nulo al final de cadena2
	cadena2[1] = '\0';

	// Asigna el valor de i en la posición[0] de la cadena2, luego
	// contatena la cadena2 a la cadena1 y la imprime en pantalla.
	for (i = 97; i < 123; i++)
	{
		cadena2[0] = i;
		strcat(cadena1, cadena2);
		puts(cadena1);
	}

	// termina el programa
	return 0;
}