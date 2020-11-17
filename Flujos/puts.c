// demuestra el uso de puts.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// declara e inicializa un arreglo de apuntadores
	char *messages[5] = {"Este", "es", "un", "mensaje", "corto!"};

	for (int i = 0; i < 5; ++i) {
		puts(messages[i]);	
	}

	puts("Este es el final.");

	return 0;
}