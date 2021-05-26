#include "pathfinder.h"

void mx_print_errline(t_finder *path, int line) {
    char *print = mx_itoa(line);

    mx_printerr("error: line ");
    mx_printerr(print);
    mx_printerr(" is not valid\n");
    exit(1);
}
