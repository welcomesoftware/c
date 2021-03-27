/**
 * Función Aleatoria
 * 
 * srand(time(NULL));
 * variable = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
 */

// Librerías
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Prototipos
void numaleatorio();

int main(int argc, char const *argv[])
{
    numaleatorio();
    return 0;
}

/**
 * Procesamiento
 * 
 * srand(time(NULL)):   solo se llama una vez al inicio del programa, 
 *                      se usa como semilla, la fecha y hora del sistema.
 *                      suele generar errores si se llama varias veces en la 
 *                      mismo segundo.
 * 
 * srand(getpid()): igual solo se llama una vez, una u otra.
 *                  Usa como semilla el id de proceso del programa, debido
 *                  a que este es unico cada vez que se inicia el programa.
 */
void numaleatorio()
{
    // variables
    int n1, n2, n3;

    // procesamiento
    srand(time(NULL));

    n1 = rand() % 100;          // Genera números aleatorios entre 0 - 99
    n2 = rand() % 100 + 1;      // Genera números aleatorios entre 1 - 100
    n3 = rand() % 31 + 1991;    // Genera números aleatorios entre 1991 - 2020

    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        printf("Aleatorio 1: %i\n", n1);     
        printf("Aleatorio 2: %i\n", n2);     
        printf("Aleatorio 3: %i\n", n3);  
        puts("");   
    }
    
}