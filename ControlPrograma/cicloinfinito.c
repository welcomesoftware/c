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
        if (choice == 1){
            puts("Executing choice 1");
            delay();
        }
        if (choice == 2){
            puts("Executing choice 2");
            delay();
        }
        if (choice == 3){
            puts("Executing choice 3");
            delay();
        }
        if (choice == 4){
            puts("Executing choice 4");
            delay();
        }
        if (choice == 5){
            puts("Exiting program now...");
            delay();
            break;
        }
        else {
            puts("Invalid choice, try again");
            delay();
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
