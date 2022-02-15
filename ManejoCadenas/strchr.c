/**
 * Programa: strchr()
 * 
 * la función strchr() busca la primera aparición de un carácter específico
 * en una cadena. La función busca hasta que encuentra el carácter o el '\0'
 * al final.
 *
 * Prototipo:
 * 	char *strchr(char *str, int ch);
 *
 * Cuando strchr() encuentra el carácter, retorna un apuntador a ese carac-
 * ter. Sabiendo que str es un apuntador al primer carácter de la cadena se
 * puede obtener la posición del carácter encontrado restando str del valor
 * del apuntador regresado strchr().
 *
 * Este programa hace uso de strchr() para buscar en una cadena un carácter
 * solo.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>


// Función Principal
int main(int argc, char const *argv[])
{
	// variables del programa
	char *loc, buff[80];
	int ch;

	// recibe la cadena y el caracter
	printf("Enter the string to be searched: ");
	gets(buff);

	printf("Enter the character to search for: ");
	ch = getchar();

	// Ejecuta la busqueda
	loc = strchr(buff, ch);

	if (loc == NULL)
		printf("The character %c was not found\n", ch);
	else
		printf("The character %c was found at position %ld\n", ch, loc-buff);

	// termina el programa
	return 0;
}