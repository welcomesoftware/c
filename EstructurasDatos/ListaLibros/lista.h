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
	int longitud;
} Lista;

// prototipos
Nodo* CrearNodo(Libro* libro);
void DestruirNodo(Nodo* nodo);
void InsertarPrimero(Lista* lista, Libro* libro);
void InsertarUltimo(Lista* lista, Libro* libro);
void InsertarDespues(int n, Lista* lista, Libro* libro);
Libro *ObtenerLibro(int n, Lista *lista);
int ListaLongitud(Lista *lista); 
int ListaVacia(Lista *lista);
void EliminarPrimero(Lista* lista);
void EliminarUltimo(Lista* lista);
void EliminarElemento(int n, Lista *lista);


#endif // _LISTA_H
