/**
 * El nombre de un arreglo como apuntador:
 * el nombre de un arreglo sin corchetes es un apuntador al primer
 * elemento de un arreglo. Por lo tanto &arreglo[0] == arreglo
 */
#include <stdio.h>
#define MAX 5

int arreglo[MAX];

int main() {

    printf("Digite un número: ");
    /* arreglo sin corchetes[] es una constante de apuntador. */
    scanf("%d", arreglo);

    /**
     * Se puede crear una variable apuntador e inicializarla para que apunte
     * hacia el arreglo.
     *
     * Declara e inicializa el apuntador para que apunte a la primera direccion del primer
     * elemento en el arreglo arreglo.
     *
     * Debido a que p_arreglo es un apuntador, puede ser modificado para que apunte a otro lugar
     * que no sea el primer elemento del arreglo. En comparacion, arreglo solo puede apuntar al
     * primer elemento del arreglo, es por eso que se le conoce como una constante de apuntador.
     */
    int *p_arreglo;
    p_arreglo = arreglo;

    /**
     * Notacion de subindices de arreglo y apuntador:
     * Un nombre de arreglo sin corchetes es un apuntador al primer elemento de un arreglo
     * por lo tanto se puede accesar al primer elemento de un arregro utilizando el operador
     * de indireccion (*): *arreglo es igual al primer elemento del arreglo.
     */
    *(arreglo) == arreglo[0];
    *(arreglo + 1) == arreglo[1];
    *(arreglo + 2) == arreglo[2];
    *(arreglo + 3) == arreglo[3];

    /* Esto ilusta la notacion de subindices de arreglo y de apuntadores */


    // finaliza exitosamente
    return 0;
}
