/**
 * Demuestra el uso basico de de puntero o apuntadores
 * posiciones de memoria, apuntadores.
 */

// Bibliotecas
#include <stdio.h>



int main()
{
		// Variables
		int numero = 40;

		// Declara un apuntador de tipo int
		int *p_numero;

		// Asigna al apuntador p_numero la direccion en memoria de 
		// la variable numero.
		p_numero = &numero;


		// Salida por pantalla
		puts("Variable	Memoria");
		puts("--------------------------------------------");
		printf("%i:\t\t%p\n", numero, &numero);
		// imprime el contenido dentro de la variable
		printf("Dato desde la variable: %i\n", numero);
		// imprime el contenido dentro de la direccion apuntada.
		printf("Dato desde el apuntador: %i\n", *p_numero);

		puts("\nPosición en memoria:");
		puts("--------------------------------------------");
		printf("Operador de direccion: %p\n", &numero);
		printf("Direccion por apuntador: %p\n", p_numero);

	
		// Finaliza el programa
		return 0;
}
