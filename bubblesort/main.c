/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2021 Dario Welcome <welcome@Latitude3340>
 * 
 * bubblesort is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * bubblesort is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// librerías
#include <stdio.h>


int main()
{	
	// variables
	int arreglo[5] = {9,2,4,3,6};
	int aux, i, j;

	// ciclo
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++) 
		{
			if (arreglo[j] > arreglo[j+1]) {
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
	
	// imprimir en forma ascendente
	for (i = 0; i < 5; i++) {
		printf("%i ", arreglo[i]);
	}
	
	return (0);
}

