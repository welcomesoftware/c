#include <stdio.h>
#include <stdlib.h>

// Estructura de tipo Libro
typedef struct libro {
	char *titulo;
} Libro;

// Estructura de tipo Nodo
typedef struct nodo {
	Libro libro;
	struct nodo *siguiente;
} Nodo;

// Estructura de tipo Lista
typedef struct lista {
	Nodo *inicio;
} Lista;


// Implementacion de la lista
Nodo *CrearNodo(Libro *libro) {
	Nodo *nodo = (Nodo *) malloc(sizeof(Nodo));
	nodo->libro.titulo = libro->titulo;
	nodo->siguiente = NULL;
	return nodo;
}

void DestruirNodo(Nodo *nodo) {
	free(nodo);
}

void InsertarInicio(Lista *lista, Libro *libro) {
	Nodo *nodo = CrearNodo(libro);
	nodo->siguiente = lista->inicio;
	lista->inicio = nodo;
}

void InsertarFinal(Lista *lista, Libro *libro) {
	Nodo *nodo = CrearNodo(libro);
	if (lista->inicio == NULL) {
		lista->inicio = nodo;
	} else {
		Nodo *aux = lista->inicio;
		while (aux->siguiente != NULL) {
			aux = aux->siguiente;
		}
		aux->siguiente = nodo;
	}
}

void ImprimirLista(Lista *lista) {
	Nodo *aux = lista->inicio;
	while (aux != NULL) {
		puts(aux->libro.titulo);
		aux = aux->siguiente;
	}
}

int main() {

	Lista listaLibros;
    Libro libro1;
    Libro libro2;
    Libro libro3;
    Libro libro4;
    Libro libro5;

	listaLibros.inicio = NULL;

	libro1.titulo = "El Arte de la Guerra";
	libro2.titulo = "El Hombre más Rico de babilonia";
	libro3.titulo = "El vendedor más grande del mundo";
	libro4.titulo = "La Pobreza está en la Mente";
	libro5.titulo = "Padre Rico, Padre Pobre";

	InsertarFinal(&listaLibros, &libro1);
	InsertarFinal(&listaLibros, &libro2);
	InsertarFinal(&listaLibros, &libro3);
	InsertarFinal(&listaLibros, &libro4);
	InsertarFinal(&listaLibros, &libro5);

	ImprimirLista(&listaLibros);

    // termina el programa
    return 0;
}
