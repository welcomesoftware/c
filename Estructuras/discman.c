/**
 * Discman:
 * Aplicación que hace uso de estructuras simples para manejar la informacion de
 * varios discos de música "CDs", Titulo, Artista, Precio y numero de canciones.
 */

// bibliotecas
#include <stdio.h>

typedef struct {
    char *titulo;
    char *artista;
    float precio;
    int canciones;
} CD;

int main() {

    /**
     * Las estructuras pueden ser inicializadas cuando son declarada, al igual
     * que otros tipos de datos en C.
     */
    CD cd1 = {"Trapstorno", "Redimi2", 12.75, 13};

    // declaracion de estructuras
    CD cd2;

    cd2.titulo = "Avivanos";
    cd2.artista = "Marco Barrientos";
    cd2.precio = 9.99;
    cd2.canciones = 15;

    // encabezado del programa
    puts("============== CD1 ==============");
    printf("Titulo:\t\t%s\n", cd1.titulo);
    printf("Artista:\t%s\n", cd1.artista);
    printf("Precio:\t\t$%.2f\n", cd1.precio);
    printf("Canciones:\t%d\n", cd1.canciones);
    puts("============== CD2 ==============");
    printf("Titulo:\t\t%s\n", cd2.titulo);
    printf("Artista:\t%s\n", cd2.artista);
    printf("Precio:\t\t$%.2f\n", cd2.precio);
    printf("Canciones:\t%d\n", cd2.canciones);
    puts("=================================");

    // termina el programa
    return 0;
}
