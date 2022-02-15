/**
 * Hacer dos estructuras anidadas, una llamada promedio que tendrá los siguie-
 * ntes miembros: nota 1, nota dos, nota 3; y otra estructura llamada alumno
 * que tendrá los siguientes miembros: nombre, sexo, edad, edad; hacer que la
 * estructura promedio este anidada en la estructura alumno.
 *
 * Pedir todos los datos para un alumno, calcular su promedio e imprimir todos
 * sus datos, incluido el promedio.
 */

// Bibliotecas
#include <stdio.h>


// Estructuras
struct Calificaciones
{
    int nota1;
    int nota2;
    int nota3;
    int promedio;
};

struct Alumno
{
    char nombre[20];
    char sexo[20];
    int edad;
    struct Calificaciones calificaciones;
};

// Función Principal
int main()
{
    // Variables
    int dato, i, max = 0, pos;

    
    // Encabezado del programa
    puts("--------------------------------------");
    puts("          Promedio del Alumno         ");
    puts("--------------------------------------");
    printf("Digite la cantidad de alumnos: ");
    scanf("%i", &dato);

    // Definiciones
    struct Alumno alumno[dato];

    // Entrada de datos
    for(i = 0; i < dato; i++)
    {
        printf("\nDatos Generales Alumno N.%i\n", i+1);
        puts("--------------------------------------");
        printf("Nombre del alumno: ");
        scanf("%s", alumno[i].nombre);
        printf("Sexo del alumno: ");
        scanf("%s", alumno[i].sexo);
        printf("Edad del alumno: ");
        scanf("%i", &alumno[i].edad);
        puts("\n- Registro de notas -\n");
        printf("Digite la nota 1: ");
        scanf("%i", &alumno[i].calificaciones.nota1);
        printf("Digite la nota 2: ");
        scanf("%i", &alumno[i].calificaciones.nota2);
        printf("Digite la nota 3: ");
        scanf("%i", &alumno[i].calificaciones.nota3);  
    }
    
    // Algoritmo del promedio
    for(i = 0; i < dato; i++)
    {
        alumno[i].calificaciones.promedio = (
            alumno[i].calificaciones.nota1 + 
            alumno[i].calificaciones.nota2 + 
            alumno[i].calificaciones.nota3
            ) / 3;
    }

    // Algoritmo para determinar el promedio mayor
    for(i = 0; i < dato; i++)
    {
       if(alumno[i].calificaciones.promedio > max)
       {
           max = alumno[i].calificaciones.promedio;
           pos = i;
       }
    }

    // Salida de datos por pantalla
    printf("\n\n-Registro de Calificaciones Mas Altas -\n\n");
    puts("--------------------------------------");
    printf("Nombre del alumno:  %s\n", alumno[pos].nombre);
    printf("Sexo del alumno:    %s\n", alumno[pos].sexo);
    printf("Edad del alumno:    %i\n", alumno[pos].edad);
    printf("Nota 1:             %i\n", alumno[pos].calificaciones.nota1);
    printf("Nota 2:             %i\n", alumno[pos].calificaciones.nota2);
    printf("Nota 3:             %i\n", alumno[pos].calificaciones.nota3);
    printf("Promedio:           %i\n", alumno[pos].calificaciones.promedio);

    // Finaliza con exito
    return 0;
}
