/**
 * Estructuras en c
 * ejemplo del uso de estructuras en c
 */

#include <stdio.h>

struct persona {
		char nombre[20];
		int edad;
} 
persona1 = {"Dario", 29},
persona2 = {"Jamileth", 35};

int main() {
		
		// entrada de datos
		printf("1. digite su nombre: ");
		scanf("%s", persona1.nombre);
		printf("1. digite su edad: ");
		scanf("%i", &persona1.edad);
		
		printf("2. digite su nombre: ");
		scanf("%s", persona2.nombre);
		printf("2. digite su edad: ");
		scanf("%i", &persona2.edad);

		puts("");

		printf("Su nombre es: %s\n", persona1.nombre);
		printf("Su edad es: %i\n", persona1.edad);
		puts("");
		printf("Su nombre es: %s\n", persona2.nombre);
		printf("Su edad es: %i\n", persona2.edad);
		
		return 0;
}

