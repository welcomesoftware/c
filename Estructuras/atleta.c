/**
 * Hacer un programa que lea n número de atletas de un arreglo de estru
 * turas. Con los siguientes miembros, nombre, pais, numero_medallas y devuelva los
 *  datos: nombre y pais del atleta que haya ganado el mayor numero de medallas.
 */

// Biblotecas
#include <stdio.h>

// Estructuras
typedef struct 
{
    char nombre[20];
    char pais[20];
    int medallas;
} Atleta;


int main()
{
    // Variables
    int dato, i;
    int min = 999999, max = 0;
    int min_pos, max_pos;

    // Encabezado
    puts("          Atletas Olimpicos           ");
    puts("--------------------------------------");
    printf("Digite el numero de atletas: ");
    scanf("%i", &dato);
    
    // Definición
    Atleta atleta[dato];

    // Entrada de datos
    for(i = 0; i < dato; i++)
    {
        printf("\n              Atleta #%i   \n", i+1);
        puts("--------------------------------------");
        printf("Nombre: "); 
        scanf("%s", atleta[i].nombre);
        printf("Pais: ");
        scanf("%s", atleta[i].pais);
        printf("Medallas: ");
        scanf("%i", &atleta[i].medallas);
    }

    // Algoritmo de comparación
    for(i = 0; i < dato; i++)
    {
        if(atleta[i].medallas > max)
        {
            max = atleta[i].medallas;
            max_pos = i;
        }
        if(atleta[i].medallas < min)
        {
            min = atleta[i].medallas;
            min_pos = i;
        }
    }

    // Salida de datos
    printf("\nATLETA CON MAYOR NUMERO DE MEDALLAS\n");
    puts("--------------------------------------");
    printf("Nombre: %s\n", atleta[max_pos].nombre);
    printf("Pais: %s\n", atleta[max_pos].pais);
    
    // Finaliza el programa
    return 0;
}
