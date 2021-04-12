/**
 * libro.h
 * ListaLibros
 *
 * Created by Darío Welcome on 11/04/21.
 * Copyright © 2021 Darío Welcome. All rights reserved.
 */

#ifndef _LIBRO_H
#define _LIBRO_H

#include <stdio.h>

typedef struct Libro {
		char *titulo;
		char *autor;
		char *isbn;
} Libro;

#endif // _LIBRO_H
