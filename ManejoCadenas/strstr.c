/**
 * Programa: strstr.c
 *
 * Esta es la última y tal vez la más util de las funciones de busqueda en cade-
 * nas en C. Esta función busca la primera aparición de una cadena dentro de ot-
 * ra.
 *
 * Prototipo:
 *  char *strstr(char *str1, char *str2);
 *
 * La función strstr() retorna un apuntador a la primera aparición de str2 dent-
 * ro de str1. Si no la encuentra la función retorna NULL. Si la longitud de st-
 * r2 es cero, la función retorna str1.
 *
 * Cuando strstr() encuentra una concordancia, se puede obtener el desplazamien-
 * to de str2 dentro de str1 mediante la resta de apuntadores como se mencionó
 * anteriormente para strchr().
 * 
 * Este programa demuestra el uso de strstr() para buscar una cadena dentro de
 * otra.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 07/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Función Principal
int main() {
	
	// variables del programa
	char *loc, buf1[80], buf2[80];
	
	// recibe las cadenas
	puts("Enter the string to be searched:");
	gets(buf1);

	puts("Enter the target string:");
	gets(buf2);

	// ejecuta la búsqueda
	loc = strstr(buf1, buf2);

	if (loc == NULL)
		puts("No match found.");
	else
		printf("%s was found at position %ld.\n", buf2, loc-buf1);

	// termina el programa
	return 0;
}
