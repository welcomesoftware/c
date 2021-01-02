/**
 * Filename: main.c
 *
 * Descripción:
 *
 * Este programa utiliza los conocimientos adquiridos hasta el momento 
 * para realizar un programa que pide al usuario que ingrese los items 
 * de una lista de compra del supermercado. Cada uno de estos items son 
 * almacenados en una lista encadenada. Al finalizar el programa, 
 * almacena los items de la lista enlazada en un archivo de disco.
 * 
 * Author Darío Welcome, Email <welcomedario9@gmail.com>
 * Copyright © Welcome 2019 - 2020 
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Typedefs
typedef struct item {
	char *titulo;
} Item;

typedef struct nodo {
	Item item;
	struct nodo *siguiente;
} Nodo;

typedef struct lista {
	Nodo *inicio;
} Lista;

// Prototipos
void DesplegarMenu(int *opcion);
void PedirDatos(Item *item);
Nodo *CrearNodo(Item *item);
void DestruirNodo(Nodo *nodo);
void InsertarNodo(Lista *lista, Item *item);
void InicializarLista(Lista *lista);
void ImprimirLista(Lista *lista);

// Main
int main() 
{
	// Variables del programa
	int opcion;
	Lista listaCompras;
	InicializarLista(&listaCompras);
	
	// Encabezado del programa
	puts("========================================");
	puts("=========== Lista de Compras ===========");
	puts("========================================");
	
	// Ciclo infinito
	while(1) 
	{
		DesplegarMenu(&opcion);
		Item nuevoItem;
		char *cadena = "Pepsi 3 Litros";
		nuevoItem.titulo = cadena;
		switch(opcion) 
		{
			case 1:
				ImprimirLista(&listaCompras);
				break;
			
			case 2:
				// PedirDatos(&nuevoItem);
				InsertarNodo(&listaCompras, &nuevoItem);
				break;
			
			case 3:
				puts("========================================");
				puts("       Saliendo del programa...         ");
				puts("========================================");
				exit(1);
				break;
			
			default:
				puts("¡Opción invalida! vuelva a intentar.");
				puts("========================================");
		}
	}
	
	
	// Termina el programa
	return 0;
}


// Desplegar menu
void DesplegarMenu(int *opcion)
{
	puts("1. Visualizar la lista.");
	puts("2. Añadir item a la lista.");
	puts("3. Salir del programa.");
	puts("----------------------------------------");
	scanf("%i", opcion);
}

// Pedir datos
void PedirDatos(Item *item)
{
	printf("Ingrese el nombre del item: ");
	scanf("%s", item->titulo);
	int len = strlen(item->titulo);
	item->titulo[len] = '\0';
}

// Crear nodo
Nodo *CrearNodo(Item *item) 
{
	 Nodo *nodo = (Nodo *) malloc(sizeof(Nodo));
	 nodo->item.titulo = item->titulo;
	 nodo->siguiente = NULL;
	 return nodo;
}

// Destruir nodo
void DestruirNodo(Nodo *nodo) 
{
	free(nodo);
}
	 
// Insertar nodo
void InsertarNodo(Lista *lista, Item *item) 
{	
	Nodo *nodo = CrearNodo(item);
	
	if (!lista->inicio) {
		lista->inicio = nodo;
	} 
	else {
		Nodo *aux = lista->inicio;
		
		while (aux->siguiente) {
			aux = aux->siguiente;
		}
		aux->siguiente = nodo;
	}
}

// Inicializar lista
void InicializarLista(Lista *lista) 
{
	lista->inicio = NULL;
}

// Imprimir lista
void ImprimirLista(Lista *lista) 
{
	Nodo *aux = lista->inicio;
	
	if (aux == NULL) {
		puts("========================================");
		puts("¡Oh, Por el momento la lista está vacía!");
		puts("ingrese más items para visualizarla.    ");
		puts("========================================");
	}
	else {
		while (aux->siguiente) {
			puts(aux->item.titulo);
			aux = aux->siguiente;
		}
	}
}
