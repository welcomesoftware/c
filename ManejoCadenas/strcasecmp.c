/**
 * Programa: strcasecmp.c
 *
 * Las cadenas son comparadas para determinar si son iguales o diferentes.
 * Si son diferentes, una cadena es "mayor que" o "menor que" la otra. 
 * Esta función ejecuta la comparación de dos cadenas sin tomar en cuenta 
 * mayúsculas y minúsculas.
 *
 * La función strcasecmp() compara dos cadenas caŕacter por carácter, sin
 * tomar en cuenta las mayúsculas y minusculas.
 *
 * Prototipo:
 * 	int strcasecmp(char *cadena1, char *cadena2);
 *
 * Retorno:
 * 	< 0 	cadena1 es menor que cadena2
 * 	  0		cadena1 es igual a cadena2
 * 	> 0		cadena1 es mayor que cadena2
 *
 * Este programa demuestra el uso de strcasecmp() para comparar cadenas.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Función Principal
int main(int argc, char const *argv[])
{
	// variables del programa
	char cadena1[80], cadena2[80];
	int comparar;

	// despliega las inidicaciones
	puts("¡Deje una linea en blanco para salir!");

	// ciclo infinito
	while (1)
	{
		// recibe dos cadenas
		puts("================================");
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

		// comparalas cadenas sin importar las mayúsculas y minusculas
		// luego despliega el resultado
		comparar = strcasecmp(cadena1, cadena2);

		printf("strcmp(%s, %s) retorna %d\n", cadena1, cadena2, comparar);
	}

	// termina el programa
	return 0;
}