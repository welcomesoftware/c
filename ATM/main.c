/**
 * ATM
 * funcion principal del sistema de cajero automatico.
 */

// bibliotecas
#include<stdio.h>
#include<stdlib.h>

// bibliotecas personales
#include"lib/bnklib.h"




int main() {

    // variables del sistema
    int opcion = 0;
    int saldo = 500;
    
    // limpia la consola antes de iniciar el programa
    system("clear");

    // encabezado del programa
    puts("============== ATM ==============");
    puts(" Bienvenido a su cajero virtual  ");
    puts("=================================");

    while (opcion != 4) { 
        
        // imprime el menu
        opcion = menu();


        switch (opcion) {

        case 1:
            consulta(saldo);
            break;

        case 2:
            saldo = deposito(saldo);
            break;

        case 3:
            saldo = retiro(saldo);
            break;

        case 4:
            salir();
            break;
        
        default:
            merror("Opcion invalida, intente de nuevo");
            break;
        }

    }
    
    // termina exitosamente
    return 0;
}

