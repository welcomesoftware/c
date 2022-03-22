/**
 * En un videoclub se ofrece la promoción de llevarse 2 peliculas por el precio
 * de las dos más baratas. Haga un programa que dado el precio de las peliculas
 * determine la cantidad a pagar.
 */ 

// libreías
#include <stdio.h>


// función principal
int main() {
    // variables
    int pelicula[] = {0, 0, 0};
    int cantidad_pagar = 0;

    // entrada de datos
    for(int i = 0; i < 3; i++) {
        printf("Digite el precio de la pelicula %d: ", i + 1);
        scanf("%d", &pelicula[i]);
    }

    if(pelicula[0] > pelicula[1] && pelicula[0] > pelicula[2]) {
        cantidad_pagar = pelicula[1] + pelicula[2];
        printf("Cantidad a pagar por la promoción es: %d", cantidad_pagar);
    }
    if(pelicula[1] > pelicula[0] && pelicula[1] > pelicula[2]) {
        cantidad_pagar = pelicula[0] + pelicula[2];
        printf("Cantidad a pagar por la promoción es: %d", cantidad_pagar);
    }
    else {
        cantidad_pagar = pelicula[0] + pelicula[1];
        printf("Cantidad a pagar por la promoción es: %d", cantidad_pagar);
    }
    
    return 0;
}
