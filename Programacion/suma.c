/**
 * Suma.c
 * Pide dos numeros al usuario, luego los suma, resta, multiplica y divide.
 */
#include<stdio.h>

int main() {
    // declaracion y asignacion de variables
    int num1, num2, suma, resta, multiplicacion;
    num1=num2=suma=resta=multiplicacion=0;
    int division = 0;

    // pide los numeros al usuario
    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

    // efectua la suma
    suma = num1 + num2;
    printf("La suma de los dos numeros es: %i\n", suma);
    
    // efectua la resta
    resta = num1 - num2;
    printf("La resta de los dos numeros es: %i\n", resta);
    
    // efectua la multiplicacion
    multiplicacion = num1 * num2;
    printf("La multiplicacion de los dos numeros es: %i\n", multiplicacion);
    
    // efectua la division
    division = num1 / num2;
    printf("La division de los dos numeros es: %i\n", division);

    // termina el programa
    return 0;
}