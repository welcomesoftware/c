/**
 * @defgroup   ATOF atof
 *
 * @brief      This file implements atof.
 *
 * @author     Welcome
 * @date       2020
 */

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	// variables del programa
	char buff[80];
	double d;

	// ciclo infinito
	while(1) 
	{
		puts("Enter the string to conver (blank to exit): ");
		fgets(buff, 80, stdin);

		// error handle
		int pos = strlen(buff);
		buff[pos - 1] = '\0';

		// condición de cierre
		if (strlen(buff) == 0)
			break;

		// ejecuta la conversión
		d = atof(buff);
		printf("The converted value is %f\n", d);
	}

	// termina el programa
	return 0;
}