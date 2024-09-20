//
// Created by Nepomuk Crhonek on 20.09.2024.
//
#include <gtk/gtk.h>
#include "calc.h"

GtkWidget *entry;

static void perform_calculation(GtkWidget *widget, gpointer data) {
    const gchar *operation = (const gchar*)data;
    const gchar *entry_text = gtk_entry_get_text(GTK_ENTRY(entry));
    gchar **values = g_strsplit(entry_text, " ", 2);

    if (g_strv_length(values) != 2) {
        gtk_entry_set_text(GTK_ENTRY(entry), "Error: Enter two numbers separated by space");
        g_strfreev(values);
        return;
    }

    int a = atoi(values[0]);
    int b = atoi(values[1]);
    int result = 0;

    if (g_strcmp0(operation, "+") == 0) {
        result = calc_sum(a, b);
    } else if (g_strcmp0(operation, "-") == 0) {
        result = calc_sub(a, b);
    } else if (g_strcmp0(operation, "*") == 0) {
        result = mult(a, b);
    } else if (g_strcmp0(operation, "/") == 0) {
        if (b != 0) {
            result = divide(a, b);
        } else {
            gtk_entry_set_text(GTK_ENTRY(entry), "Error: Division by zero");
            g_strfreev(values);
            return;
        }
    }

    gchar *result_str = g_strdup_printf("%d", result);
    gtk_entry_set_text(GTK_ENTRY(entry), result_str);
    g_free(result_str);
    g_strfreev(values);
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), entry, 0, 0, 4, 1);

    button = gtk_button_new_with_label("+");
    g_signal_connect(button, "clicked", G_CALLBACK(perform_calculation), "+");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 1, 1);

    button = gtk_button_new_with_label("-");
    g_signal_connect(button, "clicked", G_CALLBACK(perform_calculation), "-");
    gtk_grid_attach(GTK_GRID(grid), button, 1, 1, 1, 1);

    button = gtk_button_new_with_label("*");
    g_signal_connect(button, "clicked", G_CALLBACK(perform_calculation), "*");
    gtk_grid_attach(GTK_GRID(grid), button, 2, 1, 1, 1);

    button = gtk_button_new_with_label("/");
    g_signal_connect(button, "clicked", G_CALLBACK(perform_calculation), "/");
    gtk_grid_attach(GTK_GRID(grid), button, 3, 1, 1, 1);

    gtk_widget_show_all(window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}