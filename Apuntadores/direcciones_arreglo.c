/**
 * Para accesar a los elementos sucesivos de un arreglo de un tipo de datos en particular
 * el apuntador debe ser incrementado en el tamaño de bytes de es tipo de dato, por medio
 * de el operador sizeof() que regresa el tamaño en bytes de cualquier tipo de datos en
 * particular.
 */
#include <stdio.h>

#define SIZE 10

int i[SIZE];
float f[SIZE];
double d[SIZE];

int main() {
    /* Encabezado del programa */
    puts("\t\tInteger\t\tFloat\t\tDouble");
    puts("===================================================================");

    /* Imprime las direcciones de cada elemento en el arreglo */
    for (int j = 0; j < SIZE; j++) {
        printf("Elemento %d:\t%d\t%d\t%d\n", j, &i[j], &f[j], &d[j]);
    }
    puts("===================================================================");

    // Finaliza el programa
    return 0;
}
