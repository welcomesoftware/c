/**
 * Estructuras complejas
 * son aqueyas que contienen miembros a otras estructuras, apuntadores, arreglos
 * como miembros o arreglos de estructuras.
 */
#include <stdio.h>

// Estructuras simples
struct coordenadas {
    int x;
    int y;
};

// Estructuras que contienen estructuras: complejas
struct rectangulo {
    struct coordenadas arribaizquierda;
    struct coordenadas abajoderecha;
};

int main () {
    // Declaracion de la estructura
    struct rectangulo micuadro;

    /**
     * Operador miembro (.)
     * se utiliza para acceder a los diferentes miembros de las estructuras.
     *
     * Definir un rectangulo con las coordenadas (0,10) (100,200):
     */
    micuadro.arribaizquierda.x = 0;
    micuadro.arribaizquierda.y = 10;
    micuadro.abajoderecha.x = 100;
    micuadro.abajoderecha.y = 200;

    return 0;
}
