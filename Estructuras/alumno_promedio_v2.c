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
    // Definiciones
    struct Alumno alumno;
    
    // Encabezado del programa
    puts("--------------------------------------");
    puts("          Promedio del Alumno         ");
    puts("--------------------------------------");
    puts("\n- Datos Generales -\n");
    printf("Nombre del alumno: ");
    scanf("%s", alumno.nombre);
    printf("Sexo del alumno: ");
    scanf("%s", alumno.sexo);
    printf("Edad del alumno: ");
    scanf("%i", &alumno.edad);
    puts("\n- Registro de notas -\n");
    printf("Digite la nota 1: ");
    scanf("%i", &alumno.calificaciones.nota1);
    printf("Digite la nota 2: ");
    scanf("%i", &alumno.calificaciones.nota2);
    printf("Digite la nota 3: ");
    scanf("%i", &alumno.calificaciones.nota3);
    
    // Algoritmo del programa
    alumno.calificaciones.promedio = (
            alumno.calificaciones.nota1 + 
            alumno.calificaciones.nota2 + 
            alumno.calificaciones.nota3
            ) / 3;

    // Salida de datos por pantalla
    printf("\n\n-Registro de Calificaciones -\n");
    printf("Nombre del alumno:  %s\n", alumno.nombre);
    printf("Sexo del alumno:    %s\n", alumno.sexo);
    printf("Edad del alumno:    %i\n", alumno.edad);
    printf("Nota 1:             %i\n", alumno.calificaciones.nota1);
    printf("Nota 2:             %i\n", alumno.calificaciones.nota2);
    printf("Nota 3:             %i\n", alumno.calificaciones.nota3);
    printf("Promedio:           %i\n", alumno.calificaciones.promedio);

    // Finaliza con exito
    return 0;
}
