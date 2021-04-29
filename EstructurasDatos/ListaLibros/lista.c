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

void InsertarPrimero(Lista *lista, Libro *libro)
{
		Nodo *nodo = CrearNodo(libro);
		nodo->siguiente = lista->indice;
		lista->indice = nodo;
		lista->longitud++;
}

void InsertarUltimo(Lista *lista, Libro *libro)
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
		lista->longitud++;
}

void InsertarDespues(int n, Lista *lista, Libro *libro)
{
		Nodo *nodo = CrearNodo(libro);
		if (lista == NULL)
				lista->indice = nodo;
		else 
		{
				Nodo *auxiliar = lista->indice;
				int posicion = 0;
				while (posicion < n && auxiliar->siguiente)
				{
						auxiliar = auxiliar->siguiente; 
						posicion++;
				}
				nodo->siguiente = auxiliar->siguiente;
				auxiliar->siguiente = nodo;
				lista->longitud++;
		}
}

Libro *ObtenerLibro(int n, Lista *lista)
{
		if (lista->indice == NULL)
				return NULL;
		else 
		{
				Nodo *auxiliar = lista->indice;
				int posicion = 0;
				while (posicion < n && auxiliar->siguiente)
				{
						auxiliar = auxiliar->siguiente; 
						posicion++;
				}

				if (posicion != n)
						return NULL;
				else 
						return &auxiliar->libro;
		}
}

int ListaLongitud(Lista *lista) 
{
		return lista->longitud;
}

int ListaVacia(Lista *lista)
{
		// valida la expresion y devuelve  0 si la lista 
		// esta vacia, devuelve 1 en caso contrario
		return lista->indice == NULL;
}

void EliminarPrimero(Lista *lista)
{
		if (lista->indice)
		{
				Nodo *eliminado = lista->indice;
				lista->indice = lista->indice->siguiente;	
				DestruirNodo(eliminado);
				lista->longitud--;
		}
}

void EliminarUltimo(Lista *lista)
{
		if (lista->indice) 
		{
				if (lista->indice->siguiente)
				{
						Nodo *auxiliar = lista->indice;
						while (auxiliar->siguiente->siguiente)
						{
								auxiliar = auxiliar->siguiente;
						}
						Nodo *eliminado = auxiliar->siguiente;
						auxiliar->siguiente = NULL;
						DestruirNodo(eliminado);
						lista->longitud--;
				}
				else {
						Nodo *eliminado = lista->indice;
						lista->indice = NULL; 
						DestruirNodo(eliminado);
						lista->longitud--;
				}
		}
}

void EliminarElemento(int n, Lista *lista)
{
		if (lista->indice)
		{
				if (n == 0)
				{
						Nodo* eliminiado = lista->indice;
						lista->indice = lista->indice->siguiente;
						DestruirNodo(eliminiado);
						lista->longitud--;
				}
				else if(n < lista->longitud) 
				{
						Nodo *auxiliar = lista->indice;
						int posicion = 0;
						while (posicion < (n - 1))
						{
								auxiliar = auxiliar->siguiente;
								posicion++;
						}
						Nodo* eliminado = auxiliar->siguiente;
						auxiliar->siguiente = eliminado->siguiente;
						DestruirNodo(eliminado);
						lista->longitud--;
				}
		}
}
