/*******************************************************************************
 * c [básico] - Numeros aleatorios con srand()
 ******************************************************************************/

// esta función corrige el problema de la función rand() la cual si ejecutamos
// varias veces, la secuencia de números aleatorios se repite. 
// se le pasa como argumento un número que utilizamos como semilla para iniciar
// las cuentas aleatorias. A esta función solo debemos llamarla una sola vez en 
// nuestro programa. 
//
// se pueden utilizar dos tipos de semillas, time(NULL), o getpid()

// librerías
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables
    //--------------------------------------------------------------------------
    int numero; 
    //--------------------------------------------------------------------------

    // definiciones
    //--------------------------------------------------------------------------
    srand(time(NULL));
    //--------------------------------------------------------------------------

    // salida
    //--------------------------------------------------------------------------
    numero = rand() % 101;
    printf("Numero aleatorio: %d\n", numero);
    numero = rand() % 101;
    printf("Numero aleatorio: %d\n", numero);
    numero = rand() % 101;
    printf("Numero aleatorio: %d\n", numero);
 
    // finaliza
    return 0;
}
