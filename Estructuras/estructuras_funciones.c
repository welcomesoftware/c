/**
 * Paso de Estructuras como argumentos a funciones:
 * de manera similar a otros tipos de datos, una estructura puede ser pasada
 * como argumento a una funcion.
 */

#include <stdio.h>

// declara y define una estructura para guardar datos.
struct datos {
    char nombre[20];
    char apellido[20];
    float monto;
} registro;

/**
 * Es prototipo de la funcion, esta misma no tiene valor de retorno, toma una
 * estructura de tipo datos como su unico argumento.
 */
void imprimir_registro(struct datos x);


// funcion principal del programa
int main() {

    // entrada de datos por teclado
    printf("Ingrese el nombre completo del donador: ");
    scanf("%s %s", registro.nombre, registro.apellido);

    printf("Ingrese el monto a donar: ");
    scanf("%f", &registro.monto);

    // llama a la funcion imprimir registro
    imprimir_registro(registro);

    // termina el programa
    return 0;
}


// despliega la informacion del registro en pantalla
void imprimir_registro(struct datos reg) {
    printf("Donador %s %s aporto $%.2f\n", reg.nombre, reg.apellido, reg.monto);
}
