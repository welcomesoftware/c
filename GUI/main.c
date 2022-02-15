/**
 * Programa: Introdución a GUI con C & GTK
 *
 * Introdución a la programacion de interfaces graficas, usando GTK y Lenguaje C
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 03/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {

    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(win);
    gtk_main();

    // termina el programa
    return 0;
}
