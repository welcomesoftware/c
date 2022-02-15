/**
 * MenuMultiple:
 * imprime varias opciones a elegir para el usuario, dependiendo
 * de la opcion, asi mismo genera resultados distintos.
 */

// bibliotecas
#include<stdlib.h>
#include<stdio.h>

// macros
#define CUBO(a) a * a * a
#define PAR(a) a % 2

// prototipos
void ver_menu();

// variables globales
int opcion = 0;



int main() {
    
    // variables locales
    int numero = 0;

    // limpia la consola antes de la ejecucion del programa
    system("clear");
    
    

    while (opcion != 3)
    {
        // imprime el menu
        ver_menu();

        switch (opcion)
        {
        case 1:
            printf("Digite un numero: ");
            scanf("%d", &numero);
            puts("----------------------------------");
            printf("El cubo de %d es %d\n", numero, CUBO(numero));
            puts("----------------------------------");
            break;

        case 2:
            printf("Digite un numero: ");
            scanf("%d", &numero);
            puts("----------------------------------");
            printf("El numero %d es %s\n", numero, PAR(numero) ? "IMPAR" : "PAR");
            puts("----------------------------------");
            break;

        case 3:
            system("clear");
            puts("==================================");
            puts("     Gracias!, Vuelve pronto.     ");
            puts("==================================");
            break;

        default:
            puts("Opcion invalida, intente de nuevo.");
            puts("----------------------------------");
            break;
        }
    }
    
    // finaliza con exito
    return 0;
}


/**
 * Esta funcion imprime el menu en pantalla y captura la 
 * opcion seleccionada por el usuario.
 */
void ver_menu() {

    // encabezado
    puts("1 - Cubo de un numero");
    puts("2 - Numero par o impar");
    puts("3 - Salir del sistema");
    puts("");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    puts("==================================");
}