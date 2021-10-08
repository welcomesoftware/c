/**
 * apuntador.c
 * demuestra el uso basico de apuntadores.
 */

#include <stdio.h>

// declara e inicializa una variable
int var = 1;

// declara un apuntador
int *ptr;


int main() {
    // inicializa ptr para que apunte a la variable
    ptr = &var;


    // accesa directa e indirectamente a la variable
    printf("Acceso directo: variable = %d\n", var);
    printf("Acceso indirecto: variable = %d\n", *ptr);
    /**
     * cuando se antepone el (*) antes de la variable
     * el operador de indireccion hace referencia al contenido dentro
     * de la variable a la que apunta.
     * var y *ptr hacen referencia al contenido en var.
     */


    // despliega la direccion en memoria de la variable directa e indirectamente
    printf("Direccion directa: variable = %d\n", &var);
    printf("Direccion indirecta: variable = %d\n", ptr);
    /**
     * cuando se antepone el (&) antes de la variable
     * el operador de direccion hace referencia a la direccion en memoria
     * de la variable a la que se antepone.
     * &var y ptr hacen referencia a la direccion en memoria de var.
     */


    return 0;
}
