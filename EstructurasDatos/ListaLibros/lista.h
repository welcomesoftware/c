/**
 * lista.h
 * ListaLibros
 */

#ifndef _LISTA_H
#define _LISTA_H 1

#include "libro.h"

typedef struct Nodo {
		Libro libro;
		struct Nodo *siguiente;
} Nodo;

typedef struct Lista {
		Nodo *indice;
} Lista;

#endif // _LISTA_H
