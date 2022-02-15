/**
 * dowhile.c
 * uso simple de la estructura de control do while.
 */

// bibliotecas
#include<stdio.h>


// prototipos
int get_menu_choice();

int main() {
    // variables del programa
    int choice;
    
    // llamada a la funcion
    choice = get_menu_choice();
    printf("You choose menu option %d\n", choice);
    
    // termina exitosamente
    return 0;
}

int get_menu_choice() {
    // variables de la funcion
    int selection = 0;


    // estructura de control 
    do {
        puts("");
        puts("1 - Agregar registro");
        puts("2 - Editar registro");
        puts("3 - Eliminar registro");
        puts("4 - Salir del programa");
        puts("");
        printf("Enter a selection: ");
        scanf("%d", &selection);
    } 
    while (selection < 1 || selection > 4);

    // retorna el valor de la seleccion
    return selection;
}