/**
 * Arreglos unidimensionales
 */

// Librerías
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Arreglos
    int enteros[5] = {1, 2, 3, 4, 5};
    char vocales[5] = {'a','e', 'i','o','u'};
    char nombre[20];


    /* ciclo que imprime 5 enteros */
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", enteros[i]);
    }
    puts("");

    /* ciclo que pide 5 enteros */
    for (int i = 0; i < 5; i++)
    {
        printf("Digite el número #%i: ", i + 1);
        scanf("%i", &enteros[i]);
    }
    // despliega enteros
    for (int i = 0; i < 5; i++)
    {
        printf("Entero %i: %i\n", i+1, enteros[i]);
    }

    // despliega vocales en pantalla
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vocales[i]);
    }
    puts("");
    
    printf("Digite su nombre: ");
    scanf("%s", nombre);

    puts(nombre);

    // Fin del programa
    return 0;
}
