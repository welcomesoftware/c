/**
 * Hacer un progrma en c que lea los datos de n empleados de una empresa x,
 * que imprima los datos de los empleados con mayor y menor salario.
 */

// librerías
#include <stdio.h>
#include <stdlib.h>

// estructuras
typedef struct 
{
    char nombre[20];
    char sexo[20];
    float salario;
} Empleado;


int main(int argc, char *argv[]) 
{
    // variables
    int dato, i, pmax, pmin;
    float mayor = 0.0, menor = 9999.99;
    
    // encabezado
    puts("- EMPLEADOS CON MAYOR Y MENOR SALARIO -\n");
    
    // entrada de datos
    printf("Digite el total de empleados: ");
    scanf("%i", &dato);

    // crea un arreglo de estructuras de tipo empleado
    Empleado empleados[dato];
    
    for(i = 0; i < dato; i++)
    {
        printf("\nDATOS DEL EMPLEADO N.%i\n", i+1);
        puts("==================================");
        printf("Nombre del empleado: ");
        scanf("%s", empleados[i].nombre);
        printf("Genero del empleado: ");
        scanf("%s", empleados[i].sexo);
        printf("Salario del empleado: ");
        scanf("%f", &empleados[i].salario);
        puts("==================================");
    }

    // algoritmo de comparacion de mayores y menores
    for(i = 0; i < dato; i++)
    {
        if(empleados[i].salario > mayor)
        {
            mayor = empleados[i].salario;
            pmax = i;
        }
        if(empleados[i].salario < menor)
        {
            menor = empleados[i].salario;
            pmin = i;
        }
    }

    // salida de datos por pantalla
    puts("\n- DATOS DEL EMPLEADO CON MAYOR SALARIO -"); 
    printf("Nombre: %s\n", empleados[pmax].nombre);
    printf("Genero: %s\n", empleados[pmax].sexo);
    printf("Sueldo: %.2f\n", empleados[pmax].salario);

    puts("\n- DATOS DEL EMPLEADO CON MENOR SALARIO -");
    printf("Nombre: %s\n", empleados[pmin].nombre);
    printf("Genero: %s\n", empleados[pmin].sexo);
    printf("Sueldo: %.2f\n", empleados[pmin].salario);

    // finaliza el programa
    return 0; 
}
