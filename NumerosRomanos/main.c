/*
 * Numeros Romanos:
 * Progama que convierte numeros enteros a numeros Romanos.
 *
 * hacking2mars@gmail.com
 */

// Bibliotecas
#include <stdio.h>

int main() {
    // Variables del Programa
    int numero, unidades, decenas, centenas, millar;

    // Encabezado del Progama
    puts("========== Numeros Romanos: ==========");
    puts("Programa que convierte numeros enteros");
    puts("a numeros Romanos");
    puts("======================================");

    // Entrada de datos por teclado
    printf("Digite un numero: ");
    scanf("%i", &numero);

    // Procesamiento de datos
    unidades = numero % 10; numero = numero / 10;
    decenas = numero % 10; numero = numero  / 10;
    centenas = numero % 10; numero = numero / 10;
    millar = numero % 10; numero = numero   / 10;

    // Procesamiento condicional
    switch (millar) {
        case 1:
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MM");
            break;
    }

    switch (centenas) {
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }

    switch (decenas) {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXX");
            break;
        case 9:
            printf("XC");
            break;
    }

    switch (unidades) {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }
    puts("");

    // Termina exitosamente
    return 0;
}
