/**
 * Programa: strcmp.c
 *
 * Las cadenas son comparadas para determinar si son iguales o diferentes.
 * Si son diferentes, una cadena es "mayor que" o "menor que" la otra. La
 * biblioteca de C contiene funciones para tres tipos de comparaciones de
 * cadenas: comparación de dos cadenas completas, comparación de dos cade-
 * nas sin tomar en cuenta mayúsculas y minúsculas, y comparación de una
 * determinada cantidad de caracteres en ambas cadenas.
 *
 * La función strcmp() compara dos cadenas caŕacter por carácter.
 *
 * Prototipo:
 * 	int strcmp(char *cadena1, char *cadena2);
 *
 * Retorno:
 * 	< 0 	cadena1 es menor que cadena2
 * 	  0		cadena1 es igual a cadena2
 * 	> 0		cadena1 es mayor que cadena2
 *
 * Este programa demuestra el uso de strcmp() para comparar cadenas.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Función Principal
int main(int argc, char const *argv[])
{
	// variables del programa
	char cadena1[80], cadena2[80];
	int x;

	// despliega las inidicaciones
	puts("¡Deje una linea en blanco para salir!");

	// ciclo infinito
	while (1)
	{
		// recibe dos cadenas
		puts("Ingrese la primera cadena: ");
		gets(cadena1);

		if (strlen(cadena1) == 0)
		{
			puts("================================");
			puts("Saliendo...");
			puts("¡Hasta luego!");
			puts("================================");
			break;
		}

		puts("Ingese la segunda cadena: ");
		gets(cadena2);

		// comparalas cadenas y despliega el resultado
		x = strcmp(cadena1, cadena2);

		printf("strcmp(%s, %s) retorna %d\n", cadena1, cadena2, x);
	}

	// termina el programa
	return 0;
}