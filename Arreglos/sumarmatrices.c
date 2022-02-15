/**
 * Hacer un programa que sume dos matrices.
 */

// librerías
#include <stdio.h>

// prototipos
void sumarmatrices(int a[2][2], int b[2][2], int e1, int e2);

int main() {
	// variables
	int matriz1[2][2] = {{1, 3}, {4, 6}};
	int matriz2[2][2] = {{9, 8}, {2, 1}};
	int suma[2][2];
	
	// procesamiento de datos
	sumarmatrices(matriz1, matriz2, 2, 2);
	
	
		
	// fin del programa
	return 0;
}

void sumarmatrices(int a[2][2], int b[2][2], int e1, int e2) 
{
	// variables
	int suma[e1][e2];
	
	// ciclos para la suma
	for(int i = 0; i < e1; i++) 
	{
		for(int j = 0; j < e2; j++) 
		{
			suma[i][j] = a[i][j] + b[i][j]; 
		}
	}
	
	// ciclo de salida de datos
	for (int i = 0; i < e1; i++) 
	{
		for (int j = 0; j < e2; j++) 
		{
			printf("%i ", suma[i][j]);
		}
	}
}
