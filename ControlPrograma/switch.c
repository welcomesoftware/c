/**
 * Programa: Ciclo Infinito
 *
 * Un ciclo infinito es aquel que actuando solo, ejecutara para siempre, puede
 * ser un ciclo for() while() do while().
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 03/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#include <stdlib.h>

#define DELAY 150000

int menu();
void delay();

int main() {

    // variables
    int choice;

    // ciclo infinito
    while (1) {
        // obtiene la entrada del teclado
        choice = menu();

        // ramifica en base a la entrada
        switch (choice) {
            case 1:
                puts("Executing choice 1");
                delay();
                break;
            case 2:
                puts("Executing choice 2");
                delay();
                break;
            case 3:
                puts("Executing choice 3");
                delay();
                break;
            case 4:
                puts("Executing choice 4");
                delay();
                break;
            case 5:
                puts("Exiting program now...");
                delay();
                exit(0);
            default:
                puts("Invalid choice, try again");
                delay();
                break;
        }
    }

    // termina el programa
    return 0;
}

int menu() {
    // imprime el menu y recibe la seleccion del usuario.
    int reply;

    puts("Enter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to Exit the program.");

    scanf("%d", &reply);

    return reply;
}

void delay() {
    for (size_t i = 0; i < DELAY; i++) ;
}
