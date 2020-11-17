/**
 * Area de un Rectangulo
 * Demuestra el uso de estructuras complejas
 *
 * Recibe las entradas de coordenadas de esquinas de un Rectangulo y calcula el
 * area. Supone que la coordenada Y de la esquina superior izquierda es mayor
 * que la coordenada Y de la esquina inferior derecha, y la coordenada X de la
 * esquina inferior derecha es mayor que la coordenada X de la esquina superior
 * izquierda, y que todas las coordenadas son positivas.
 */

#include <stdio.h>

int lengh, width, area;

struct coordinates {
    int x;
    int y;
};

struct rectangle {
    struct coordinates topleft;
    struct coordinates bottomright;
} mybox;

int main() {

    // recibe las coordenadas
    printf("Ingrese la coordenada superior izquierda x: ");
    scanf("%d", &mybox.topleft.x);
    printf("Ingrese la coordenada superior izquierda y: ");
    scanf("%d", &mybox.topleft.y);
    printf("Ingrese la coordenada inferior derecha x: ");
    scanf("%d", &mybox.bottomright.x);
    printf("Ingrese la coordenada inferior derecha y: ");
    scanf("%d", &mybox.bottomright.y);

    // calcula la longitud y el ancho
    width = mybox.bottomright.x - mybox.topleft.x;
    lengh = mybox.bottomright.y - mybox.topleft.y;

    // calcula y despliega el area
    area = width * lengh;

    // debug
    //printf("%d\n", width);

    // imprime el Area
    printf("El Area del Rectangulo es: %d\n", area);

    return 0;
}
