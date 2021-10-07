/**
 * Escriba una función que a) le sea pasado un número variable de cadenas de texto como 
 * argumentos. b) concatene las cadenas en orden para hacer una cadena más larga y,
 * c) retorne un apuntador a la nueva cadena.
 */ 

// bibliotecas
#include <stdio.h>
#include <stdarg.h>

char *concatenar(char cadena[], ...)
{
		// variables
		va_list arg_ptr;
		int count;
		char total[1000];

		// inicializar
		va_start(arg_ptr, cadena);

		// recorre la lista
		for (count=0; count < cadena; count++) {
				total	
		}
}
