/**
 * Libros:
 * Es un ejemplo de como implementar las listas enlazadas en un programa
 * para una Biblioteca el cual nos permite agregar y/o eliminar Libros a
 * una lista enlazada.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Estructura Autoreferenciada:
 * Es una estructura que hace referencia a si misma en uno de sus miembros.
 * Tambien es una estructura que se crea con memoria dinamica.
 */
typedef struct dato {
    char *nombre;
    struct dato *siguiente;
} Libro;

// prototipos de funciones tipo Libro(struct dato).
Libro *lista_libro(Libro *lista);
Libro *agregar_libro(Libro *lista, char *nombre_libro);

int main() {

    // Definimos un apuntador de tipo Libro, llamado lista y le pasamos el retorno
    // de la funcion lista_libro(lista). que a su vez retorna un apuntador NULL.
    Libro *lista;

    // inicializa la lista y luego agrega un nuevo libro a la lista
    lista = lista_libro(lista);
    lista = agregar_libro(lista, "La pobreza está en la mente");
    lista = agregar_libro(lista, "Padre Rico, Padre Pobre");
    lista = agregar_libro(lista, "A veces se gana, a veces se aprende");

    // imprimimos los valores que la lista pueda contener.
    while (lista != NULL) {
        printf("%s\n", lista->nombre);
        lista = lista->siguiente;
    }

    // termina el programa
    return 0;
}



/**
 * Funcion que nos genera la lista (enlazada) de Libros, que recibe un apuntador
 * de tipo Libro (struct dato) llamado lista, y nos retorna un apuntador de tipo
 * Libro (struct dato) = lista.
 */
Libro *lista_libro(Libro *lista) {
    // la lista cuando se genere siempre va estar vacia
    lista = NULL;
    return lista;
}

/**
 * Funcion que recibe un apuntador de tipo Libro llamado lista, y un char *nombre_libro,
 * nos retorna un apuntador de tipo Libro(struct dato).
 *
 * Crea una variable apuntador de tipo Libro. Reserva memoria suficiente para este
 * nuevo_libro, y asegurarnos que el valor devuelto sea de tipo Libro.
 *
 * Asignamos a nuevo_libro el nombre_libro recibido como parametro. Luego verificamos si
 * la lista esta vacia, asignamos nuevo_libro como el primer valor de la lista. En caso
 * contrario va a almacenar nuevo libro en el siguiente elemento de la lista.
 * Luego retorna la lista.
 */
Libro *agregar_libro(Libro *lista, char *nombre_libro) {

    Libro *nuevo_libro, *aux;
    nuevo_libro = (Libro *) malloc(sizeof(Libro));

    nuevo_libro->nombre = nombre_libro;
    nuevo_libro->siguiente = NULL;

    if (lista == NULL) {
        lista = nuevo_libro;
    } else {
        aux = lista;
        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_libro;
    }
    return lista;
}
