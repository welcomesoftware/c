/**
 * Filename: atoi.c
 *
 * Descripción:
 * Este programa convierte la representación de una cadena de un número a la variable
 * númerica actual. Por ejemplo la cadena "123" puede ser convertida a una variable 
 * de tipo int con el valor 123. 
 *
 * La función de biblioteca atoi() convierte una cadena a un entero. Su prototipo se
 * encuentra en el encabezado STDLIB.H 
 *
 * Prototipo:
 * 	int atoi(char *ptr);
 * 
 * La función atoi() convierte la cadena apuntada por ptr a un entero. Además de los
 * dígitos, la cadena puede contener espacios en blanco al inicio de un signo de más
 * + o de meno -. La conversión se inicia al principio de la cadena y continúa hasta
 * que encuentra un carácter no convertible (una letra o un signo de puntuación). El
 * entero resultante es regresado al programa que llama. Si no encuentra caracteres
 * convertibles, atoi() retorna cero.
 * 
 * Author: Darío Welcome, Email: <welcomedario9@gmail.com>
 * Copyright © Welcome 2019 - 2020 
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>


// Mai
int main(int argc, char const *argv[])
{
	// conversion a entero
	int a = atoi("157");
	float f = atof("-1.6");
	int c = atoi("+50x");
	int d = atoi("doce");
	int e = atoi("x506");

	// despliega las conversiones
	printf("int = %i\n", a);
	printf("float = %.1f\n", f);
	printf("c = %i\n", c);
	printf("d = %i\n", d);
	printf("e = %i\n", e);

	// termina el programa
	return 0;
}