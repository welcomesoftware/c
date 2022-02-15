/**
 * Programa: strncmp.c
 *
 * La función de bibiloteca strncmp() compara una cantidad especificada
 * de caracteres de una cadena con otra.
 *
 * Prototipo:
 * 	int strncmp(char *cadena1, char *cadena2, size_t n);
 *
 * La función strncmp() compara n caracteres de cadena2 contra cadena1.
 * La comparación se realiza hasta que han sido comparados n caracteres
 * o se ha llegado al final de cadena1. El método de comparación y los
 * valores de retorno son los mismos que para strcmp(). La comparación
 * si toma en cuenta las mayusculas y minusculas.
 *
 * Este programas muestra la comparación de partes de cadenas con la
 * función strncmp().
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Globales
char str1[] = "La primera cadena";
char str2[] = "La segunda cadena";

// Función Principal
int main(int argc, char const *argv[])
{
	// variables del programa
	size_t numero, comparar;

	puts("");
	puts(str1);
	puts(str2);
	puts("=================================================");
	puts("¡Presione 0 para salir!");
	
	while (1)
	{
		puts("=================================================");
		printf("Ingrese el numero de caracteres a comparar: ");
		scanf("%ld", &numero);

		if (numero <= 0)
			break;

		comparar = strncmp(str1, str2, numero);

		printf("Comparando %ld caracteres, strncmp() retorna %ld\n", numero, comparar);
	}

	// termina el programa
	return 0;
}