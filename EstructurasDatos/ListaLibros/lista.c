// librerías
#include "lista.h"
#include <stdlib.h>
#include <string.h>

// crear nodo
Nodo *CrearNodo(Libro *libro) 
{
	Nodo *nodo = (Nodo *) malloc(sizeof(Nodo));
	strcpy(nodo->libro.titulo, libro->titulo);
	strcpy(nodo->libro.autor, libro->autor);
	strcpy(nodo->libro.isbn, libro->isbn);
	nodo->siguiente = NULL;
	return nodo;
}

void DestruirNodo(Nodo *nodo)
{
	free(nodo);
}

void InsertarPrincipio(Lista *lista, Libro *libro)
{
	Nodo *nodo = CrearNodo(libro);
	nodo->siguiente = lista->indice;
	lista->indice = nodo;
}

void InsertarFinal(Lista *lista, Libro *libro)
{
	Nodo *nodo = CrearNodo(libro);
	if (lista->indice == NULL)
	{
		lista->indice = nodo;
	}
	else
	{
		Nodo *auxiliar = lista->indice;
		while (auxiliar->siguiente)
		{
			auxiliar = auxiliar->siguiente;
		}
		auxiliar->siguiente = nodo;
	}
	
	Nodo *auxiliar = lista->indice;
	while (auxiliar->siguiente)
	{
		auxiliar = auxiliar->siguiente;
	}
	auxiliar->siguiente = nodo;
	
}
