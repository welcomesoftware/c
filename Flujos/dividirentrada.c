#include <stdio.h>

void limpiar_entrada();

int main(int argc, char const *argv[]) {
	
	// Ejercicio 1
	char cadena1[10], cadena2[10];

	// pide una entrada y la divide en dos cadenas especificando la cantida
	// de carácteres.
	puts("Ingrese una cadena");
	scanf("%3s %2s", cadena1, cadena2);

	// imprime los datos en pantalla.
	printf("Las cadenas son %s %s\n", cadena1, cadena2);
	
	// Ejercicio 2
	char buff1[10], buff2[10];

	puts("Ingrese su nombre y apellido");
	scanf("%s %s", buff1, buff2);

	printf("Su nombre es:\t%s\n", buff1);
	printf("Su apellido es:\t%s\n", buff2);

	// Ejercicio 3
	char buf1[10], buf2[10];

	puts("Ingrese un nombre y apellido");
	scanf("%[^ ]%s", buff1, buff2);

	printf("Nombre es:\t%s\n", buf1);
	printf("Apellido es:\t%s\n", buf2);
	puts("Usa [^ ] para separar la entrada, excluyendo el espacio.");

	// termina el programa.
	return 0;
}
