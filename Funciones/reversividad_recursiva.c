/**
 * Crear una función que recibe un número n, e imprime
 * los numeros en cuenta regresiva desde n hasta el 1. 
 */

/* Bibliotecas */
#include <stdio.h>

/* Prototipos */
void cuentaregresiva(int n);


int main(int argc, char const *argv[])
{
    /* Variables */
    int num;

    /* Entrada de datos */
    printf("Digite un número: ");
    scanf("%i", &num);
    puts("=======================");

    /* Procesamiento */
    cuentaregresiva(num);
    puts("");

    /* Fin del programa */
    return 0;
}

void cuentaregresiva(int n) 
{
    if (n == 1)
    {
        printf("%i.", n);
    }
    else
    {
        printf("%i, ", n);
        cuentaregresiva(n - 1);
    }
}