/**
 * Strings o Cadenas
 * son arreglos o vectores de tipo char, con la peculiaridad que tienen una marca
 * en el fin del mismo, el (\0) = caracter nulo.
 *
 * No necesitamos pasarle la longitud del arreglo de cadena debido a que tiene un
 * caracter nulo que nos marca el fin de la cadena.
 */

/* Calcula el largo de una cadena en base al caracter nulo */
int largo_cadena(char cadena[]) {
    int count = 0;

    /* Recorre el arreglo hasta que encuentra el caracter nulo en incrementa el contador. */
    while(cadena[count] != '\0') count ++;

    /* Retorna el largo de la cadena */
    return count;
}

bool unir_cadenas(char origen[], char destino[], int largo) {

    int largo_origen = largo_cadena(origen);
    int largo_destino = largo_cadena(destino);

    if(largo_origen + largo_destino + 1 > largo)
        return false;

    for(int i = 0; i < largo_origen; i++)
        destino[largo_destino + 1] = origen[i];

    destino[largo_destino + largo_origen] = '\0';
    return true;
}

/**
 * Estas dos funciones son versiones simplificadas de las funciones provistas por la biblioteca
 * estandar de C en el encabezado <string.h>
 * largo_cadena() == strlen()
 * unir_cadenas() == srtncat()
 *
 * strlen(cadena):                  para obtener el largo de una cadena.
 * strcpy(destino, origen):         copia el contenido de origen en destino.
 * strcat(destino, origen):         agrega el contenido de origen al final de destino.
 * strcmp(cadena1, cadena2):        compara dos cadenas.
 * strchr(cadena, caracter):        devuelve la posicion del caracter dentro de la cadena.
 * strstr(cadena, subcadena):       devuleve la posicion de la subcadena dentro de la cadena.
 */

 
