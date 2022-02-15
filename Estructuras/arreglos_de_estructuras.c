/**
 * Arreglos de estructuras:
 * los arreglos de estructuras son una de las herramientas mas poderosas del C.
 *
 * Lista de contactos:
 * programa para gestionar una lista de nombres y numeros telefonicos utilizando
 * los arreglos de estructuras.
 */

#include <stdio.h>

/**
 * Es una práctica muy común asignarle un alias o sinónimo al nombre de la
 * de la estructura, para evitar tener que anteponer "struct" cada vez que
 * declaremos o instanciemos una estructura.
 *
 * C nos permite la posibilidad de hacer esto utilizando la palabra clave
 * "typedef", lo que crea un alias o sinónimo a un tipo.
 *
 * Ahora podemos utilizar "Registro" declarar instancias o variables del tipo
 * "struct" de Registro.
 *
 * Es una buena convención y una buena práctica usar mayúscula en la primera
 * letra de un sinónimo de tipo.
 */
typedef struct {
    char nombre[20];
    char apellido[20];
    char telefono[15];
} Registro;

/**
 * Después de que el alias o sinónimo de la estructura ha sido definido, se
 * puede declarar de la siguiente forma:
 *
 * Este enunciado declara un arreglo llamado lista, que es un arreglo de cuatro
 * instancias de la estructura Registro.
 */
Registro lista[4];      // lista de registros: en pocas palabras.

int main() {
    // variables del programa
    int i;

    // encabezado del programa
    puts("============== Agenda Telefonica ===============");
    puts("Formato: Nombre Apellido");
    puts("Formato: +000-0000-0000");
    puts("================================================");

    // ciclo para entrada los datos de 4 personas
    for(i = 0; i < 4; i++) {
        printf("Ingrese el nombre : ");
        scanf("%s %s", lista[i].nombre, lista[i].apellido);
        printf("Ingrese el telefono: ");
        scanf("%s", lista[i].telefono);
    }

    // inprime dos lineas en blanco
    puts("\n");
    puts("============== Lista de contactos ==============");
    // ciclo para salida de datos por pantalla
    for(i = 0; i < 4; i++) {
        printf("Nombre: %s %s\t", lista[i].nombre, lista[i].apellido);
        printf("Telefono: %s\n", lista[i].telefono);
    }

    puts("================================================");
    // imprime una linea en blanco
    puts("");

    // Termina el programa
    return 0;
}
