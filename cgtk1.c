/*
 * =====================================================================================
 *
 *       Filename:  cgtk1.c
 *
 *    Description: C gui programming - gtk
 *
 *        Version:  1.0
 *        Created:  02/08/2020 18:04:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init  (&argc, &argv);
    GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(win);
    gtk_main();
    return 0;
}
