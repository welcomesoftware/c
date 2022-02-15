/**
 * Programa que pasa un número entero a binario
 * utilizande recursivida.
 */

/* Librerías */
#include <stdio.h>

/* Pasa un número de entero a binario */
void enteroabinario(int n) 
{
    /* condición */
    if (n > 1) enteroabinario(n / 2);  
    
    /* procedimiento */
    printf("%i", n % 2); 
}


int main(int argc, char const *argv[])
{
    /* variables */
    int num;

    /**
     * menu 
     * si no se ingresa un número positivo continua 
     * pidiendo números. 
     */
    do
    {
        printf("Digite un número: ");
        scanf("%i", &num);
        puts("=========================");
        if (num < 0) puts("Ingresa un número positivo.");
    } 
    while (num < 0);
    
    /* procesamiento de datos */
    enteroabinario(num);
    puts("");

    /* fin del programa */
    return 0;
}
