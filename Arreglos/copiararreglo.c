/**
 * Copiar el contenido de un arreglo de 5 elementos
 * en otro arreglo.
 */

// Bibliotecas
#include <stdio.h>

// Prototipos
void copiararreglos(int a[], int b[], int size);
void imprimirarreglo(int a[], int size);

int main(int argc, char const *argv[])
{
    // variables
    int arreglo1[5] = {5,3,2,4,1};
    int arreglo2[5];

    // procesamiento
    copiararreglos(arreglo1, arreglo2, 5);

    // salida de datos
    imprimirarreglo(arreglo2, 5);

    // fin del programa
    return 0;
}

void copiararreglos(int a[], int b[], int size)
{
    puts("Copiando arreglos..\n");
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    puts("¡Arreglos copiados correctamente!");
}

void imprimirarreglo(int arreglo[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("%i, ", arreglo[i]);
    }
    puts("");
}