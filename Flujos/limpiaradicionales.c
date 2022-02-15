// Limpieza de los caracteres adicionales de stdin
#include <stdio.h>

void limpiarStdin();

int main() {
	// variables
	int edad = 0;
	char nombre[20];
	
	// pide la edad al usuario
	puts("Ingrese su edad");
	scanf("%d", &edad);

	// limpia stdin de cualquie carácter adicional
	limpiarStdin();

	// pide el nombre al usuario
	puts("Ingrese su nombre");
	scanf("%s", nombre);

	// imprime la información en pantalla
	printf("Su edad es %d\n", edad);
	printf("Su nombre es %s\n", nombre);

	// termina el programa
	return 0; 
}


// crea un arreglo de tipo char llamado basura que almacenará cualquier caracter 
// adicional que quede en stdin, aa los que son esperados como parametro en scanf.
void limpiarStdin() {
	char basura[80];
	fgets(basura, 80, stdin);
}