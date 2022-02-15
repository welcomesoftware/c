/**
 * Hacer un programa que muestre un menú con las opciones sumar,
 * restar, multiplicar, y dividir. El programa solicitará una opción
 * y realizará la tarea ejegida, se debe usar procedimientos.
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Prototipos
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(int argc, char const *argv[])
{   
    // Despliega el menú del programa
    menu();
    
    // Fin del programa
    return 0;
}

void menu() 
{
    int opt;
    do
    {
        puts("1. Sumar");
        puts("2. Restar");
        puts("3. Multiplicar");
        puts("4. Dividir");
        puts("5. Salir");
        puts("===================================");
        scanf("%i", &opt);
        
        switch (opt)
        {
        case 1:
            puts("-----------------------------------");
            sumar();
            puts("-----------------------------------");
            break;
        
        case 2:
            puts("-----------------------------------");
            restar();
            puts("-----------------------------------");
            break;
        
        case 3:
            puts("-----------------------------------");
            multiplicar();
            puts("-----------------------------------");
            break;
        
        case 4:
            puts("-----------------------------------");
            dividir();
            puts("-----------------------------------");
            break;
        
        case 5:
            puts("-----------------------------------");
            puts("Fue un placer ¡Hasta luego!");
            puts("-----------------------------------");
            exit(1);
            break;
        
        default:
            puts("-----------------------------------");
            puts("¡Opcion invalida, intente otra vez!");
            puts("-----------------------------------");
            break;
        }
        
    } while (opt != 5);
}

void sumar() 
{
    int n1, n2;
    int suma;

    puts("Digite dos números separados: ");
    scanf("%i %i", &n1, &n2);

    suma = n1 + n2;

    printf("La suma es: %i\n", suma);
}

void restar() 
{
    int n1, n2;
    int resta;

    puts("Digite dos números separados: ");
    scanf("%i %i", &n1, &n2);

    resta = n1 - n2;

    printf("La resta es: %i\n", resta);
}

void multiplicar() 
{
    int n1, n2;
    int multiplicacion;

    puts("Digite dos números separados: ");
    scanf("%i %i", &n1, &n2);

    multiplicacion = n1 * n2;

    printf("La multiplicacion es: %i\n", multiplicacion);
}

void dividir() 
{
    int n1, n2;
    int division;

    puts("Digite dos números separados: ");
    scanf("%i %i", &n1, &n2);

    division = n1 / n2;

    printf("La division es: %i\n", division);
}