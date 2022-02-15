/**
 * Funciones matemáticas en C.
 * 
 * ceil(x) -> Redondea al proximo entero más cercano.
 * fabs(x) -> Devuelve el valor absoluto de x.
 * floor(x) -> Redondea por defecto al entero base.
 * fmod(x, y) -> Calcula el residuo de la división entre x / y.
 * pow(x, y) -> Calcula x elevado a la potencia de y.
 * sqrt(x) -> Devuelve la raíz cuadrada de x.
 */

// Librerías
#include <stdio.h>
#include <math.h>

// Prototipos
void funcionmatematica();


int main(int argc, char const *argv[])
{
    // Procesamiento
    funcionmatematica();

    // Fin del programa    
    return 0;
}

void funcionmatematica() 
{
    float x, cambio = 0;

    printf("Digite un numero: ");
    scanf("%f", &x);

    // redondea al próximo entero más cercano.
    cambio = ceil(x);
    printf("ceil %.2f\n", cambio);
    
    cambio = fabs(x);
    printf("fabs %.2f\n", cambio);
    
    cambio = floor(x);
    printf("floor %.2f\n", cambio);
    
}