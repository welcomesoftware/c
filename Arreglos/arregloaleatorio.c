/**
 * Crear un programa que tenga un array de cien números
 * aleatorios entre uno y mil. Una vez creado, organizarlo
 * de tal manera que almacene los números pares en un 
 * arreglo y los números impares en otro.
 */

// librerías
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototipos
void printtag(char tag, int qty);

int main()
{
    // varibles
    int num, par = 0, impar = 0;
    int aleatorio[100];

    // procesamiento
    srand(time(NULL));

    // llena el arreglo de números aleatorios
    // genera números aleatorios entre 1 y 1000
    for (int i = 0; i < 100; i++)
    {
        num = rand() % 1000 + 1;
        aleatorio[i] = num;
    }

    // cuenta cuantos nuemeros pares en impares hay
    for (int i = 0; i < 100; i++)
    {
        if (aleatorio[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    // crea los arreglos pares e impares justo según su tamaño
    int pares[par], impares[impar];
    // contadores
    int count1 = 0, count2 = 0;

    // llena el arreglo de pares
    for (int i = 0; i < 100; i++)
    {
        if (aleatorio[i] % 2 == 0)
        {
            pares[count1] = aleatorio[i];
            count1++;
        }
        else
        {
            impares[count2] = aleatorio[i];
            count2++;
        }
    }

    puts("Arreglo de números aleatorios:");
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
            puts("");
        printf("%i, ", aleatorio[i]);
    }
    puts("");
    printtag('=', 50);

    puts("Arreglo de números pares:");
    for (int i = 0; i < par; i++)
    {
        if (i % 10 == 0)
            puts("");
        printf("%i, ", pares[i]);
    }
    puts("");
    printtag('=', 50);

    puts("Arreglo de números impares:");
    for (int i = 0; i < impar; i++)
    {
        if (i % 10 == 0)
            puts("");
        printf("%i, ", impares[i]);
    }
    puts("");

    // fin del programa
    return 0;
}

void printtag(char tag, int qty)
{
    for (int i = 0; i < qty; i++)
    {
        printf("%c", tag);
    }
    puts("");
}