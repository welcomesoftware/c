/**
 * Aritmetica de apuntadores: notacion de apuntador
 * Usando la notacion de apuntadores se puede accesar a los elementos de un arreglo
 * con Aritmetica de apuntadores.
 *
 * En este tipo de Aritmetica solo se tiene que tratar con dos tipos de operaciones
 * incremento y decremento.
 *
 * Incremento:
 * Cuando se incrementa un apuntador en 1, automaticamente la Aritmetica de apuntador
 * incrementa el valor del apuntador para que apunte al siguiente el elemento del arreglo.
 * C sabe a que tipo de dato apunta e incrementa la direccion en el apuntador en el
 * tamaño del tipo de dato.
 *
 * Decremento:
 * se aplica el mismo concepto de incremento para el decremento, se decrementa la direccion
 * en el apuntador en el tamaño del tipo de dato.
 */

#include <stdio.h>
#define MAX 10

int i_arreglo[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
float f_arreglo[MAX] = {.0f, .1f, .2f, .3f, .4f, .5f, .6f, .7f, .8f, .9f};

int *pi_arreglo;
float *pf_arreglo;

int main() {
    /* Inicializa los apuntadores */
    pi_arreglo = i_arreglo;
    pf_arreglo = f_arreglo;

    /* Imprime los elementos del arreglo */
    for (int i = 0; i < MAX; i++)
        printf("%d\t%f\n", *pi_arreglo++, *pf_arreglo++);

    /**
     * Nota: No se debe ejecutar operaciones de incremento o decremento sobre CONSTANTES de
     * apuntadores (Nombre de arreglo sin corchetes). Se debe llevar cuenta de hacia donde
     * estan apuntado los apuntadores (usando ciclos for, while, etc.)
     */

    /**
     * Diferencia:
     * Otra operacion de Aritmetica de apuntadores llamada Diferencia, que se refiere
     * a la resta de dos apunatadores. Si se tienen dos apuntadores hacia diferentes
     * elementos del mismo arreglo, se pueden restar y encontrar que tan distantes estan.
     *
     * Las comparaciones entre apuntadores son validades solamente entre apuntadores
     * que apunten al mismo arreglo.
     *
     * operaciones soportadas: >, >= <=, <, ==, !=
     */

    /**
     * Precauciones:
     * Se debe evitar usar apuntadores sin Inicializar, estos apuntadores tiene un valor pero
     * no se sabe cual es; al usarlo sin Inicializar, podemos estar sobreescribiendo alguna
     * informacion importante del sistema operativo o de algun otro programa. Error puede ir
     * desde un crasheo de la pc, hasta una caida completa del sistema.
     */

    /* Finaliza el programa */
    return 0;
}
