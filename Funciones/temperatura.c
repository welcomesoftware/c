// Programa convertidor de temperaturas

// Bibliotecas
#include <stdio.h>

// Prototipos
float tofahrenheit(float c);
float tokelvin(float c);

int main() 
{
    // Variables    
    int opc;
    float celcius, fahrenheit, kelvin;

    // Entrada 
    printf("Digite la temperatura en grados Celcius: ");
    scanf("%f", &celcius);

    // Procesamiento
    do
    {
        puts("1. Converir a grados Fahrenheit");
        puts("2. Converir a grados Kelvin");
        puts("3. Salir");
        puts("-------------------------------");
        printf("> "); scanf("%i", &opc);

        switch (opc)
        {
        case 1:
            puts("-------------------------------");
            fahrenheit = tofahrenheit(celcius);
            printf("En grados Fahrenheit es: %.2f\n", fahrenheit);
            break;
        case 2:
            puts("-------------------------------");
            kelvin = tokelvin(celcius);
            printf("En grados Kelvin es: %.2f\n", kelvin);
            break;

        case 3:
            puts("-------------------------------");
            puts("¡Hasta luego!");
            break;
            
        default:
            puts("-------------------------------");
            puts("¡Error! Opción incorrecta.");
            break;
        }
    } while (opc != 3);


    // Fin del programa
    return 0;
}

float tofahrenheit(float c) 
{
    // Fórmula
    return ((9 * c) / 5 + 32);
}

float tokelvin(float c)
{
    // Fórmula
    return (c + 273.15f);
}