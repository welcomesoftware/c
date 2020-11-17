#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 7

int main() {

    /**
     * genera numeros al azar entre 0 y N = 7, el 1 debe de ir para que sea aleatorio
     * entre 0 y N exacto.
     */
    srand((getpid()));                   /* escoge un numero semilla para arrancar rand(). */
    int aleatorio = rand() % (N + 1);

    printf("Numero aleatorio: %d\n", aleatorio);

    // finaliza exitosamente.
    return 0;
}
