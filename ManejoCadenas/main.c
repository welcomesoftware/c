#include <stdio.h>
#include <string.h>


int main() {

    /* Variables de cadena */
    char color[] = "rojo";
    char grosor[] = "grueso";
    char descripcion[1024];

    /* Operaciones con cadenas */
    strcpy(descripcion, "Lapiz color ");
    strncat(descripcion, color, 1024);
    strncat(descripcion, " de trazo ", 1024);
    strncat(descripcion, grosor, 1024);

    /* Imprime el resultado de descripcion en pantalla */
    puts(descripcion);

    /* Termina el programa */
    return 0;
}
