/**
 * Apuntadores a Estructuras:
 * Los apuntadores a Estructuras se utilizan frecuentemente cuando se pasa una
 * Estructura como argumento a una funcion. Apuntadores a Estructuras tambien
 * se usan en un método de almacenamiento de datos muy poderoso, conocido como
 * listas encadenadas.
 */
#include <stdio.h>

typedef struct {
    int numero;
    char *nombre;
} Parte;

int main() {
    // declara un apuntador al tipo Parte y NO una instancia a la Estructura Parte.
    Parte *p_parte;

    /**
    * se debe declarar una instancia de tipo parte y luego apuntar a ella con
    * nuestro apuntador *p_parte.
    */
    Parte rueda;

    // inicializacion del apuntador de tipo Estructura a la instancia de Estructura.
    p_parte = &rueda;

    /**
    * Metodo 1 para acceder a miembros de una Estructura usando un apuntador
    * p_parte debe ser encerrado entre parentesis debido a que el operador miembro
    * (.) tiene una precedencia mayor al operador de indireccion (*)
    */
    (*p_parte).numero = 100;
    printf("(*p_parte).numero = %d\n", (*p_parte).numero);

    /**
    * Metodo 2 para acceder a miembros de una Estructura usando un apuntador
    * es usando el operador de membresia indirecta (->).
    */
    p_parte->numero = 101;
    printf("p_parte->numero = %d\n", p_parte->numero);


    // termina el programa
    return 0;
}
