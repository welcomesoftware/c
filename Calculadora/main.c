/**
 * Calculadora
 * Programa que permite efectuar calculos matematicos.
 */

// Bibliotecas
#include<stdio.h>
#include<stdlib.h>

#include"lib/math.h"
#include"lib/menu.c"

// Macros del sistema
#define SALIR   3


int main () {
    // variables
    char operador;
    int num1, num2;

    // limpia la terminal
    system("clear");


    // imprime el menu 
    menu();
    
    while(1) {
        printf("Digite la operacion: ");
        scanf("%d %c %d", &num1, &operador, &num2);

        
        switch (operador)
        {
        case '+':
            printf("Resulatdo: %d\n", SUMA(num1, num2));
            break;

        case '-':
            printf("Resulatdo: %d\n", RESTA(num1, num2));
            break;

        case '*':
            printf("Resulatdo: %d\n", MULTIPLICACION(num1, num2));
            break;

        case '/':
            printf("Resulatdo: %d\n", DIVISION(num1, num2));
            break;
        
        default:
            puts("\a\a\aError: operador no reconocido!");
            break;
        }
    puts("========================================");
    }



    return 0;
}
    
