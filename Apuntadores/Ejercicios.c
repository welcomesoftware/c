/**
 * Programa: Ejercicios de Apuntadores
 *
 * Ejercicos acerca del uso de apuntadores simples y avanzados.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 13/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

// Ejercicio 2
// prototipo para una funcion que toma como arg un arreglo de apuntadores a tipo char
void printstrings(char *lines[], int n);


// Ejercicio 3
// declaracion de apuntador a funcion que regrese un tipo char y que tome como arg
// un arreglo de apuntadores a tipo char.
char (*getlines)(char *lines[]);


int main() {

    // Ejercicio 1
    // declara varias variables y apuntadores tipo float. Luego las inicializa
    float salario = 23.00f, *p_salario, **pp_salario;

    p_salario = &salario;
    pp_salario = &p_salario;

    **pp_salario = 100.0f;

    printf("%.2f\n", **pp_salario);

    // Ejercicio 4
    // declaracion de un apuntador a una funcion tipo float que toma como arg un int
    float (*prestaciones)(int horastrabajadas);

    // Ejercicio 5
    // declaracion de un arreglo de apuntadores a funciones que tomen una cadena como argumento
    // y regresen un entero.
    int (*ptr_func[5])(char *titulo);

    // Ejercicio 6
    // declare un arreglo de 10 apuntadores a tipo char
    char *mensajes[10];



    // termina el programa
    return 0;
}
