/**
 * Programa: SysLibro
 *
 * Sistema de gestion de libros usando el poder y las ventajas de las listas
 * enlazadas, estructuras y apuntadores para poder almacernar varios libros
 * en una lista, recorrerlos y eliminarlos.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 29/10/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct libro {
    char *titulo;
    char *autor;
    char *isbn;
} Libro;

typedef struct nodo {
    Libro *libro;
    struct nodo *siguiente;
} Nodo;

typedef struct lista {
    Nodo *cabecera;
} Lista;

// Función para crear nodos
Nodo *CrearNodo(Libro *libro) {
    Nodo *nodo = (Nodo *) malloc(sizeof(Nodo));
    nodo->libro = libro;
    nodo->siguiente = NULL;
    return nodo;
}

// Función para destruir un nodo
void DestruirNodo(Nodo *nodo) {
    free(nodo);
}

// Función para insertar nodo al principio de la lista
void InsertarInicio(Lista *lista, Libro *libro) {
    Nodo *nodo = CrearNodo(libro);
    nodo->siguiente = lista->cabecera;
    lista->cabecera = nodo;
}

void InsertarFinal(Lista *lista, Libro *libro) {
    Nodo *nodo, *aux;
    nodo = CrearNodo(libro);

    if (lista->cabecera == NULL) {
        lista->cabecera = nodo;
    }

    aux = lista->cabecera;
    while (aux->siguiente != NULL) {
        aux = aux->siguiente;
    }
    aux->siguiente = nodo;
}

// Función para obtener n elemento de la lista
Libro *Obtener(int n, Lista *lista) {
    if (lista->cabecera == NULL) {
        return NULL;
    }
    Nodo *aux = lista->cabecera;
    int pos = 0;
    while (pos < n && aux->siguiente != NULL) {
        aux = aux->siguiente;
        pos++;
    }
    if (pos != n) {
        return NULL;
    }
    aux->libro;
}



int main() {

    Lista *lista;
    Libro *libro1;
    libro1->titulo = "La pobreza esta en la mente";
    InsertarFinal(lista, libro1);

    printf("%s\n", lista->cabecera->libro->titulo);

    // termina el programa
    return 0;
}
