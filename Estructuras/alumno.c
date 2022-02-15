/**
 * Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
 * miembros: Nombre, Edad, Promedio.
 * 
 * Pedir datos al usuario de tres alumnos, comprobar cual de los tres tiene el 
 * mejor promedio y posteriormente imprimir los datos del alumno.
 */

// librerías
#include <stdio.h>

// estructuras
typedef struct {
    char nombre[20];
    int edad;
    int promedio;
} Alumno;


int main(int argc, char *argv[])
{
    // variables
    int aux;
    int i;

    // definiciones
    Alumno alumnos[3];
    
    // encabezado del programa
    puts("--------------------------------------------------");
    puts("\t\tALUMNOS DE ALTO PROMEDIO");
    puts("--------------------------------------------------");

    // entrada de datos
    for(i = 0; i < 3; i++)
    { 
        printf("-\t\tDatos del alumno N. %i\t\t-\n", (i + 1));
        printf("Nombre del alumno: "); 
        scanf("%s", alumnos[i].nombre);
        printf("Edad del alumno: ");
        scanf("%i", &alumnos[i].edad);
        printf("Promedio del alumno: ");
        scanf("%i", &alumnos[i].promedio);
        puts("");
    }

    // algoritmo
    if(alumnos[0].promedio > alumnos[1].promedio)
    {
        if(alumnos[0].promedio > alumnos[2].promedio) 
        {
            aux = 0;
        }
        else {
            aux = 2;
        }
    }
    else {
        if(alumnos[1].promedio > alumnos[2].promedio)
        {
            aux = 1;
        }
    }

    // salida de datos
    puts("--------------------------------------------------");
    puts("\t\tPROMEDIO MAS ALTO\t\t");
    puts("--------------------------------------------------");
    printf("Nombre: %s\n", alumnos[aux].nombre);
    printf("Edad: %i años\n", alumnos[aux].edad);
    printf("Promedio: %i\n", alumnos[aux].promedio); 
    puts("");

    return 0;
}


