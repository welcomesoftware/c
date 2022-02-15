/**
 *	Filename:  pila.c
 *
 *  Description:  
 *	Este programa demuestra el uso de las listas enlazadas de tipo pila (LIFO)
 *	y como aplicarlas en la vida real, ejercicios de uso diario.
 *
 *	Version:	1.0
 *  Created:  	12/15/20 22:26:39
 *  Revision:  	none
 *	Compiler:  	gcc
 *
 *  Author:  	Dario Welcome (welcome), welcomedario9@gmail.com
 */

// Bibliotecas
#include <stdio.h>


// Estructuras
typedef struct nodo {
	int info;
	struct nodo *sig;
} Nodo;

typedef struct pila {
	Nodo NuevoNodo;
} Pila;


// Funciones
