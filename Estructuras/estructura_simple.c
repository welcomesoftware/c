/**
 * Una estructura es una coleccion de una o mas variables agrupadas bajo el
 * mismo nombre. Una estructura puede contener cualquiera de los tipos de datos
 * de C, incluyendo arreglos, apuntadores y otras estructuras.
 */
#include <stdio.h>

/**
 * Definicion y declaracion de una estructura
 * Aqui se define una estructura llamda coordenadas y se declaran dos instancias
 * de la estructura.
 *
 * Desde mi punto de vista las estructuras era los primeros intentos de clases
 * porque es una forma de agrupar datos o informacion bajo un solo nombre.
 */
struct coordenadas {
  int x;
  int y;
} primera, segunda; /* Crea dos instancias de la estructura coordenadas */


int main() {

  /**
   * Segundo metodo para declarar o instaciar una estructura.
   *
   * Una estructura sin instancia es simplemente una plantilla que se puede usar
   * luego para declarar nuevas estructuras del tipo de la plantilla.
   */
  struct coordenadas tercera;

  // Asigna un valor al elemento y dentro de la instancia de la estructura.
  primera.x = 2;
  primera.y = 0;

  segunda.x = 4;
  segunda.y = 3;

  /**
   * Una gran ventaja al usar estructuras es la hablilidad de copiar informacion
   * entre estructuras del mismo tipo con un simple enunciado de asignacion.
   */
  tercera.x = primera.x + segunda.x;
  tercera.y = primera.y + segunda.y;

  /**
   * Las estructuras son utiles en cualquier momento en el que hay que procesar
   * informacion de diferentes tipos que necesitan ser tratadas en grupo.
   *
   * Por ejemplo en una base de datos de listas de direcciones, cada registro
   * puede ser una estructura y cada pieza de informacion, un miembro de la
   * estructura (nombre, direccion, ciudad, numero telfonico, etc).
   */
  printf("Coordenadas: %d,%d\n", tercera.x, tercera.y);


  return 0;
}
