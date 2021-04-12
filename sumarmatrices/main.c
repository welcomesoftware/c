/**
 * @brief Hacer un programa que sume dos matrices, pidiendo al usuario
 * que ingrese el número de filas y columnas, ademas que ingrese los 
 * elementos de cada matriz e imprima el resultado en pantalla.
 */
 
// librerías
#include <stdio.h>

int main(int argc, char **argv)
{
	// variables
	int filas, columnas, i, j;
	
	// entrada de datos
	printf("Digite le número de filas y columnas de las matrices: ");
	scanf("%i %i", &filas, &columnas);
	
	// crea la matriz con datos especificos
	int matriz1[filas][columnas];
	int matriz2[filas][columnas];
	int suma[filas][columnas];
	
	// ciclo de llenado de datos
	for (i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("Ingrese un número matriz1[%i][%i]: ", i, j);
			scanf("%i", &matriz1[i][j]);
		}
	}
	for (i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("Ingrese un número matriz2[%i][%i]: ", i, j);
			scanf("%i", &matriz2[i][j]);
		}
	}
	
	// suma las dos matrices
	for (i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			suma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	// despliega los datos en pantalla
	for (i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("%i ", suma[i][j]);
		}
	}
	
	// finaliza el programa
	return 0;
}
