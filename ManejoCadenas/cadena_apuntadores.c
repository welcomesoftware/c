/**
 * Cadenas y apuntadores:
 * Debido a que el final de la cadena se encuentra marcado por un carácter nulo
 * todo lo que se necesita para definir una cadena es algo que apunte a su inicio.
 *
 * Asignacion de espacio para la cadena en compilacion:
 * el comienzo de una cadena esta indicado por un apuntador a una variable tipo char.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Apuntador a una variable tipo char
    // Esto crea una constante de cadena que ya no puede ser modificado su valor dur-
    // ante la ejecución del programa.
    char *mensaje = "Hello, world!";
    /**
     * La cadena es guardada en algun lugar en memoria y el apuntador es inicializado
     * para que apunte al primer carácter de la cadena, ya que esto es manejado
     * automáticamente por el compilador; debido a esto, no es necesario liberar la 
     * memoria reservada para *mensaje debido a que esto lo hace automáticamente el 
     * compilador. Solo es necesario liberar la memoria cuando la reservamos nosotros
     * mismos con la ayuda de la función malloc().
     *
     * Una vez que ha sido definido, mensaje es un apuntador a la cadena y puedes ser
     * utilizado como tal.
     */

    /**
     * Esto es equivalente a la declaracion e inicializacion anterior
     * mensaje[] == *mensaje: ambas notaciones significan un apuntador a una cadena,
     * sin embargo esta cadena si puede ser modificado su valor durante la ejecución
     * del programa. sin envargo la cantidad de elementos dentro de la cadena conti-
     * nuará siendo la misma.
     */
    char mensaje2[] = "Hello, world!";

    /**
     * Asignacion de memoria dinamica: malloc()
     * Esta función encuentra y reserva un bloque de memoria de la longitud solicitada
     * y regresa la direccion del primer byte del bloque. Esto sucede en tiempo de ejecucion
     *
     * La función malloc() regresa una direccion y su tipo de retorno es un apuntador a tipo
     * void. Un apuntador a tipo void es compatible con todos los tipos de datos.
     *
     * La memoria asignada por malloc() puede ser utilizada para guardar cualquiera de los
     * tipos de datos de C, por eso adecuado el tipo de retorno void.
     *
     * malloc() regresa un apuntador al bloque se memoria asignado. Si no fue capaz de asignar
     * la cantidad de memoria solicitada retorna NULL. Cada vez que se trate de asignar
     * memoria se debe revisar el valor de retorno.
     */

    /* Asigna memoria para una cadena de 100 carácteres
     * Castea el retorno de malloc a un apuntador al tipo de dato que desea almacenar en la
     * memoria asignada. En este caso es un apuntador de tipo char. y lo almacena en un
     * apuntdor del mismo tipo, definido anteriormente.
     */
    char *string;

    if((string = (char *) malloc(100)) == NULL) {
        puts("No hay suficiente memoria para asignar buffer");
        exit(1);
    }
    puts("La cadena fue asignada!");


    /* Asigna memoria para un arreglo de 50 enteros
     * Castea el retorno de malloc a un apuntador tipo int, y almacena la direccion retornada
     * en el apuntador numbers definido anteriormente.
     */
    int *numbers;
    numbers = (int *) malloc(50 * sizeof(int));


    /* Asigna memoria para un arreglo de 10 float
     * Castea el retorno de malloc a un apuntador de tipo float y almacena la direccion retornada
     * en le apuntador del mismo tipo definido anteriormente como prices.
     */
    float *prices;
    prices = (float *) malloc(10 * sizeof(float));


    /* Libera la memoria que fue asignada por malloc() */
    free(string);
    free(numbers);
    free(prices);


    /* Termina el programa */
    return 0;
}
